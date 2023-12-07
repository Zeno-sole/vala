/* valaccodemodifiers.c generated by valac, the Vala compiler
 * generated from valaccodemodifiers.vala, do not modify */

/* valaccodemodifiers.vala
 *
 * Copyright (C) 2006-2010  Jürg Billeter
 * Copyright (C) 2006-2008  Raffaele Sandrini
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 *	Raffaele Sandrini <raffaele@sandrini.ch>
 */

#include "valaccode.h"

static GType
vala_ccode_modifiers_get_type_once (void)
{
	static const GFlagsValue values[] = {{VALA_CCODE_MODIFIERS_NONE, "VALA_CCODE_MODIFIERS_NONE", "none"}, {VALA_CCODE_MODIFIERS_STATIC, "VALA_CCODE_MODIFIERS_STATIC", "static"}, {VALA_CCODE_MODIFIERS_REGISTER, "VALA_CCODE_MODIFIERS_REGISTER", "register"}, {VALA_CCODE_MODIFIERS_EXTERN, "VALA_CCODE_MODIFIERS_EXTERN", "extern"}, {VALA_CCODE_MODIFIERS_INLINE, "VALA_CCODE_MODIFIERS_INLINE", "inline"}, {VALA_CCODE_MODIFIERS_VOLATILE, "VALA_CCODE_MODIFIERS_VOLATILE", "volatile"}, {VALA_CCODE_MODIFIERS_DEPRECATED, "VALA_CCODE_MODIFIERS_DEPRECATED", "deprecated"}, {VALA_CCODE_MODIFIERS_THREAD_LOCAL, "VALA_CCODE_MODIFIERS_THREAD_LOCAL", "thread-local"}, {VALA_CCODE_MODIFIERS_INTERNAL, "VALA_CCODE_MODIFIERS_INTERNAL", "internal"}, {VALA_CCODE_MODIFIERS_CONST, "VALA_CCODE_MODIFIERS_CONST", "const"}, {VALA_CCODE_MODIFIERS_UNUSED, "VALA_CCODE_MODIFIERS_UNUSED", "unused"}, {VALA_CCODE_MODIFIERS_CONSTRUCTOR, "VALA_CCODE_MODIFIERS_CONSTRUCTOR", "constructor"}, {VALA_CCODE_MODIFIERS_DESTRUCTOR, "VALA_CCODE_MODIFIERS_DESTRUCTOR", "destructor"}, {VALA_CCODE_MODIFIERS_FORMAT_ARG, "VALA_CCODE_MODIFIERS_FORMAT_ARG", "format-arg"}, {VALA_CCODE_MODIFIERS_PRINTF, "VALA_CCODE_MODIFIERS_PRINTF", "printf"}, {VALA_CCODE_MODIFIERS_SCANF, "VALA_CCODE_MODIFIERS_SCANF", "scanf"}, {VALA_CCODE_MODIFIERS_NO_INLINE, "VALA_CCODE_MODIFIERS_NO_INLINE", "no-inline"}, {0, NULL, NULL}};
	GType vala_ccode_modifiers_type_id;
	vala_ccode_modifiers_type_id = g_flags_register_static ("ValaCCodeModifiers", values);
	return vala_ccode_modifiers_type_id;
}

GType
vala_ccode_modifiers_get_type (void)
{
	static volatile gsize vala_ccode_modifiers_type_id__once = 0;
	if (g_once_init_enter (&vala_ccode_modifiers_type_id__once)) {
		GType vala_ccode_modifiers_type_id;
		vala_ccode_modifiers_type_id = vala_ccode_modifiers_get_type_once ();
		g_once_init_leave (&vala_ccode_modifiers_type_id__once, vala_ccode_modifiers_type_id);
	}
	return vala_ccode_modifiers_type_id__once;
}

