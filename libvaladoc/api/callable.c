/* callable.c generated by valac, the Vala compiler
 * generated from callable.vala, do not modify */

/* callable.vala
 *
 * Copyright (C) 2012  Florian Brosch
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
#include <stdlib.h>
#include <string.h>

 G_GNUC_INTERNAL const gchar* valadoc_api_callable_get_implicit_array_length_cparameter_name (ValadocApiCallable* self);
 G_GNUC_INTERNAL void valadoc_api_callable_set_implicit_array_length_cparameter_name (ValadocApiCallable* self,
                                                                     const gchar* value);
static GType valadoc_api_callable_get_type_once (void);

ValadocApiTypeReference*
valadoc_api_callable_get_return_type (ValadocApiCallable* self)
{
	ValadocApiCallableIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = VALADOC_API_CALLABLE_GET_INTERFACE (self);
	if (_iface_->get_return_type) {
		return _iface_->get_return_type (self);
	}
	return NULL;
}

void
valadoc_api_callable_set_return_type (ValadocApiCallable* self,
                                      ValadocApiTypeReference* value)
{
	ValadocApiCallableIface* _iface_;
	g_return_if_fail (self != NULL);
	_iface_ = VALADOC_API_CALLABLE_GET_INTERFACE (self);
	if (_iface_->set_return_type) {
		_iface_->set_return_type (self, value);
	}
}

 G_GNUC_INTERNAL const gchar*
valadoc_api_callable_get_implicit_array_length_cparameter_name (ValadocApiCallable* self)
{
	ValadocApiCallableIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = VALADOC_API_CALLABLE_GET_INTERFACE (self);
	if (_iface_->get_implicit_array_length_cparameter_name) {
		return _iface_->get_implicit_array_length_cparameter_name (self);
	}
	return NULL;
}

 G_GNUC_INTERNAL void
valadoc_api_callable_set_implicit_array_length_cparameter_name (ValadocApiCallable* self,
                                                                const gchar* value)
{
	ValadocApiCallableIface* _iface_;
	g_return_if_fail (self != NULL);
	_iface_ = VALADOC_API_CALLABLE_GET_INTERFACE (self);
	if (_iface_->set_implicit_array_length_cparameter_name) {
		_iface_->set_implicit_array_length_cparameter_name (self, value);
	}
}

static void
valadoc_api_callable_default_init (ValadocApiCallableIface * iface,
                                   gpointer iface_data)
{
	/**
	 * The return type of this symbol.
	 */
	g_object_interface_install_property (iface, g_param_spec_object ("return-type", "return-type", "return-type", VALADOC_API_TYPE_TYPEREFERENCE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	 * Used to avoid warnings for implicit parameters
	 */
	g_object_interface_install_property (iface, g_param_spec_string ("implicit-array-length-cparameter-name", "implicit-array-length-cparameter-name", "implicit-array-length-cparameter-name", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
}

/**
 * Used to translate imported C-documentation
 */
static GType
valadoc_api_callable_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocApiCallableIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_api_callable_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
	GType valadoc_api_callable_type_id;
	valadoc_api_callable_type_id = g_type_register_static (G_TYPE_INTERFACE, "ValadocApiCallable", &g_define_type_info, 0);
	g_type_interface_add_prerequisite (valadoc_api_callable_type_id, VALADOC_API_TYPE_SYMBOL);
	return valadoc_api_callable_type_id;
}

GType
valadoc_api_callable_get_type (void)
{
	static volatile gsize valadoc_api_callable_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_api_callable_type_id__volatile)) {
		GType valadoc_api_callable_type_id;
		valadoc_api_callable_type_id = valadoc_api_callable_get_type_once ();
		g_once_init_leave (&valadoc_api_callable_type_id__volatile, valadoc_api_callable_type_id);
	}
	return valadoc_api_callable_type_id__volatile;
}

