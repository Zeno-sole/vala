/* documentation.c generated by valac, the Vala compiler
 * generated from documentation.vala, do not modify */

/* documentation.vala
 *
 * Copyright (C) 2008-2009 Florian Brosch
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
 *  Florian Brosch <flo.brosch@gmail.com>
 */

#include "valadoc.h"
#include <glib.h>
#include <stdlib.h>
#include <string.h>

static GType valadoc_documentation_get_type_once (void);

ValadocApiPackage*
valadoc_documentation_get_package (ValadocDocumentation* self)
{
	ValadocDocumentationIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = VALADOC_DOCUMENTATION_GET_INTERFACE (self);
	if (_iface_->get_package) {
		return _iface_->get_package (self);
	}
	return NULL;
}

/**
 * The corresponding file name
 */
gchar*
valadoc_documentation_get_filename (ValadocDocumentation* self)
{
	ValadocDocumentationIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = VALADOC_DOCUMENTATION_GET_INTERFACE (self);
	if (_iface_->get_filename) {
		return _iface_->get_filename (self);
	}
	return NULL;
}

static void
valadoc_documentation_default_init (ValadocDocumentationIface * iface,
                                    gpointer iface_data)
{
	/**
	 * The corresponding package
	 */
	g_object_interface_install_property (iface, g_param_spec_object ("package", "package", "package", VALADOC_API_TYPE_PACKAGE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static GType
valadoc_documentation_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocDocumentationIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_documentation_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
	GType valadoc_documentation_type_id;
	valadoc_documentation_type_id = g_type_register_static (G_TYPE_INTERFACE, "ValadocDocumentation", &g_define_type_info, 0);
	g_type_interface_add_prerequisite (valadoc_documentation_type_id, G_TYPE_OBJECT);
	return valadoc_documentation_type_id;
}

GType
valadoc_documentation_get_type (void)
{
	static volatile gsize valadoc_documentation_type_id__once = 0;
	if (g_once_init_enter (&valadoc_documentation_type_id__once)) {
		GType valadoc_documentation_type_id;
		valadoc_documentation_type_id = valadoc_documentation_get_type_once ();
		g_once_init_leave (&valadoc_documentation_type_id__once, valadoc_documentation_type_id);
	}
	return valadoc_documentation_type_id__once;
}

