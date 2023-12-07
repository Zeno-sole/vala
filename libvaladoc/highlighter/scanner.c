/* scanner.c generated by valac, the Vala compiler
 * generated from scanner.vala, do not modify */

/* scanner.vala
 *
 * Copyright (C) 2015       Florian Brosch
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Florian Brosch <flo.brosch@gmail.com>
 */

#include "valadoc.h"
#include <glib.h>

static GType valadoc_highlighter_scanner_get_type_once (void);

ValadocHighlighterCodeToken*
valadoc_highlighter_scanner_next (ValadocHighlighterScanner* self)
{
	ValadocHighlighterScannerIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = VALADOC_HIGHLIGHTER_SCANNER_GET_INTERFACE (self);
	if (_iface_->next) {
		return _iface_->next (self);
	}
	return NULL;
}

static void
valadoc_highlighter_scanner_default_init (ValadocHighlighterScannerIface * iface,
                                          gpointer iface_data)
{
}

/**
 * Scanner interface used to highlight source code.
 */
static GType
valadoc_highlighter_scanner_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocHighlighterScannerIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_highlighter_scanner_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
	GType valadoc_highlighter_scanner_type_id;
	valadoc_highlighter_scanner_type_id = g_type_register_static (G_TYPE_INTERFACE, "ValadocHighlighterScanner", &g_define_type_info, 0);
	g_type_interface_add_prerequisite (valadoc_highlighter_scanner_type_id, G_TYPE_OBJECT);
	return valadoc_highlighter_scanner_type_id;
}

GType
valadoc_highlighter_scanner_get_type (void)
{
	static volatile gsize valadoc_highlighter_scanner_type_id__once = 0;
	if (g_once_init_enter (&valadoc_highlighter_scanner_type_id__once)) {
		GType valadoc_highlighter_scanner_type_id;
		valadoc_highlighter_scanner_type_id = valadoc_highlighter_scanner_get_type_once ();
		g_once_init_leave (&valadoc_highlighter_scanner_type_id__once, valadoc_highlighter_scanner_type_id);
	}
	return valadoc_highlighter_scanner_type_id__once;
}

