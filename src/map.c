/**
 * Copyright © 2012 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * Author: Daniel Stone <daniel@fooishbar.org>
 */

/************************************************************
 * Copyright (c) 1993 by Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, and distribute this
 * software and its documentation for any purpose and without
 * fee is hereby granted, provided that the above copyright
 * notice appear in all copies and that both that copyright
 * notice and this permission notice appear in supporting
 * documentation, and that the name of Silicon Graphics not be
 * used in advertising or publicity pertaining to distribution
 * of the software without specific prior written permission.
 * Silicon Graphics makes no representation about the suitability
 * of this software for any purpose. It is provided "as is"
 * without any express or implied warranty.
 *
 * SILICON GRAPHICS DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS
 * SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL SILICON
 * GRAPHICS BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION  WITH
 * THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 * ********************************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "xkbcommon/xkbcommon.h"
#include "XKBcommonint.h"
#include <X11/X.h>

/**
 * Returns the level to use for the given key and state, or -1 if invalid.
 */
static int
xkb_key_get_level(struct xkb_desc *xkb, struct xkb_state *state,
                  xkb_keycode_t key, unsigned int group)
{
    struct xkb_key_type *type = XkbKeyType(xkb, key, group);
    unsigned int active_mods = state->mods & type->mods.mask;
    int i;

    fprintf(stderr, "get_level: %s, %d entries, mods %x, mask %x (v%x r%x)\n",
            type->name, type->map_count, state->mods, type->mods.mask,
            type->mods.vmods, type->mods.real_mods);

    for (i = 0; i < type->map_count; i++) {
        if (!type->map[i].active)
            continue;
        fprintf(stderr, "    type active, level %d (%s), mask %x (v%x r%x), active %x\n",
                type->map[i].level, type->level_names[i], type->map[i].mods.mask,
                type->map[i].mods.real_mods, type->map[i].mods.vmods, active_mods);
        if (type->map[i].mods.mask == active_mods)
            return type->map[i].level;
    }

    return 0;
}

/**
 * Returns the group to use for the given key and state, or -1 if invalid,
 * taking wrapping/clamping/etc into account.
 */
static int
xkb_key_get_group(struct xkb_desc *xkb, struct xkb_state *state,
                  xkb_keycode_t key)
{
    unsigned int info = XkbKeyGroupInfo(xkb, key);
    unsigned int num_groups = XkbKeyNumGroups(xkb, key);
    int ret = state->group;

    if (ret < XkbKeyNumGroups(xkb, key))
        return ret;

    switch (XkbOutOfRangeGroupAction(info)) {
    case XkbRedirectIntoRange:
        ret = XkbOutOfRangeGroupInfo(info);
        if (ret >= num_groups)
            ret = 0;
        break;
    case XkbClampIntoRange:
        ret = num_groups - 1;
        break;
    case XkbWrapIntoRange:
    default:
        ret %= num_groups;
        break;
    }

    return ret;
}

/**
 * Provides the symbols to use for the given key and state.  Returns the
 * number of symbols pointed to in syms_out.
 */
unsigned int
xkb_key_get_syms(struct xkb_desc *xkb, struct xkb_state *state,
                 xkb_keycode_t key, xkb_keysym_t **syms_out)
{
    int group;
    int level;

    if (!xkb || !state || key < xkb->min_key_code || key > xkb->max_key_code)
        return -1;

    group = xkb_key_get_group(xkb, state, key);
    if (group == -1)
        goto err;
    level = xkb_key_get_level(xkb, state, key, group);
    if (level == -1)
        goto err;

    *syms_out = &(XkbKeySymEntry(xkb, key, level, group));
    if (**syms_out == NoSymbol)
        goto err;

    return 1;

err:
    *syms_out = NULL;
    return 0;
}
