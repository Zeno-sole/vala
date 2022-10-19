/* class.c generated by valac, the Vala compiler
 * generated from class.vala, do not modify */

/* class.vala
 *
 * Copyright (C) 2008-2011  Florian Brosch
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
#include <valagee.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <vala.h>
#include <valacodegen.h>

enum  {
	VALADOC_API_CLASS_0_PROPERTY,
	VALADOC_API_CLASS_BASE_TYPE_PROPERTY,
	VALADOC_API_CLASS_IS_ABSTRACT_PROPERTY,
	VALADOC_API_CLASS_IS_SEALED_PROPERTY,
	VALADOC_API_CLASS_IS_FUNDAMENTAL_PROPERTY,
	VALADOC_API_CLASS_IS_COMPACT_PROPERTY,
	VALADOC_API_CLASS_NODE_TYPE_PROPERTY,
	VALADOC_API_CLASS_NUM_PROPERTIES
};
static GParamSpec* valadoc_api_class_properties[VALADOC_API_CLASS_NUM_PROPERTIES];
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _valadoc_api_signature_builder_unref0(var) ((var == NULL) ? NULL : (var = (valadoc_api_signature_builder_unref (var), NULL)))

struct _ValadocApiClassPrivate {
	ValaArrayList* interfaces;
	gchar* dbus_name;
	gchar* take_value_function_cname;
	gchar* get_value_function_cname;
	gchar* set_value_function_cname;
	gchar* unref_function_name;
	gchar* ref_function_name;
	gchar* free_function_name;
	gchar* param_spec_function_name;
	gchar* type_id;
	gchar* is_class_type_macro_name;
	gchar* class_type_macro_name;
	gchar* class_macro_name;
	gchar* private_cname;
	gchar* cname;
	ValadocApiTypeReference* _base_type;
	ValaCollection* _full_implemented_interfaces;
	gboolean _is_abstract;
	gboolean _is_sealed;
	gboolean _is_fundamental;
	ValaSet* _known_derived_interfaces;
	ValaSet* _known_child_classes;
};

static gint ValadocApiClass_private_offset;
static gpointer valadoc_api_class_parent_class = NULL;

static gchar* _valadoc_api_class_get_private_cname (ValadocApiClass* self,
                                             ValaClass* element);
static void valadoc_api_class_set_is_fundamental (ValadocApiClass* self,
                                           gboolean value);
static void valadoc_api_class_set_is_abstract (ValadocApiClass* self,
                                        gboolean value);
static void valadoc_api_class_set_is_sealed (ValadocApiClass* self,
                                      gboolean value);
static void valadoc_api_class_real_accept (ValadocApiNode* base,
                                    ValadocApiVisitor* visitor);
static ValadocContentInline* valadoc_api_class_real_build_signature (ValadocApiItem* base);
static void valadoc_api_class_finalize (GObject * obj);
static GType valadoc_api_class_get_type_once (void);
static void _vala_valadoc_api_class_get_property (GObject * object,
                                           guint property_id,
                                           GValue * value,
                                           GParamSpec * pspec);
static void _vala_valadoc_api_class_set_property (GObject * object,
                                           guint property_id,
                                           const GValue * value,
                                           GParamSpec * pspec);

static inline gpointer
valadoc_api_class_get_instance_private (ValadocApiClass* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocApiClass_private_offset);
}

ValadocApiClass*
valadoc_api_class_construct (GType object_type,
                             ValadocApiNode* parent,
                             ValadocApiSourceFile* file,
                             const gchar* name,
                             ValaSymbolAccessibility accessibility,
                             ValadocApiSourceComment* comment,
                             ValaClass* data)
{
	ValadocApiClass * self = NULL;
	gboolean _tmp0_ = FALSE;
	ValaClass* _tmp1_;
	ValaClass* _tmp2_;
	gboolean is_basic_type = FALSE;
	GEqualFunc _tmp5_;
	ValaArrayList* _tmp6_;
	gboolean _tmp7_;
	gboolean _tmp8_;
	gchar* _tmp13_;
	gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	gchar* _tmp17_;
	gchar* _tmp18_;
	gchar* _tmp19_ = NULL;
	gboolean _tmp20_;
	gboolean _tmp21_;
	gchar* _tmp23_;
	gchar* _tmp24_;
	gchar* _tmp25_;
	gchar* _tmp26_;
	gboolean _tmp27_;
	gboolean _tmp28_;
	gboolean _tmp29_;
	gboolean _tmp30_;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (file != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (data != NULL, NULL);
	_tmp1_ = vala_class_get_base_class (data);
	_tmp2_ = _tmp1_;
	if (_tmp2_ == NULL) {
		const gchar* _tmp3_;
		const gchar* _tmp4_;
		_tmp3_ = vala_symbol_get_name ((ValaSymbol*) data);
		_tmp4_ = _tmp3_;
		_tmp0_ = g_strcmp0 (_tmp4_, "string") == 0;
	} else {
		_tmp0_ = FALSE;
	}
	is_basic_type = _tmp0_;
	self = (ValadocApiClass*) valadoc_api_typesymbol_construct (object_type, parent, file, name, accessibility, comment, is_basic_type, (ValaTypeSymbol*) data);
	_tmp5_ = g_direct_equal;
	_tmp6_ = vala_array_list_new (VALADOC_API_TYPE_TYPEREFERENCE, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp5_);
	_vala_iterable_unref0 (self->priv->interfaces);
	self->priv->interfaces = _tmp6_;
	_tmp7_ = vala_class_get_is_compact (data);
	_tmp8_ = _tmp7_;
	if (!_tmp8_) {
		gchar* _tmp9_;
		gchar* _tmp10_;
		gchar* _tmp11_;
		gchar* _tmp12_;
		_tmp9_ = vala_get_ccode_class_type_check_function (data);
		_g_free0 (self->priv->is_class_type_macro_name);
		self->priv->is_class_type_macro_name = _tmp9_;
		_tmp10_ = vala_get_ccode_class_type_function (data);
		_g_free0 (self->priv->class_type_macro_name);
		self->priv->class_type_macro_name = _tmp10_;
		_tmp11_ = vala_get_ccode_type_get_function ((ValaObjectTypeSymbol*) data);
		_g_free0 (self->priv->class_macro_name);
		self->priv->class_macro_name = _tmp11_;
		_tmp12_ = _valadoc_api_class_get_private_cname (self, data);
		_g_free0 (self->priv->private_cname);
		self->priv->private_cname = _tmp12_;
	}
	_tmp13_ = vala_gd_bus_module_get_dbus_name ((ValaTypeSymbol*) data);
	_g_free0 (self->priv->dbus_name);
	self->priv->dbus_name = _tmp13_;
	_tmp14_ = vala_get_ccode_type_id ((ValaCodeNode*) data);
	_g_free0 (self->priv->type_id);
	self->priv->type_id = _tmp14_;
	_tmp15_ = vala_get_ccode_name ((ValaCodeNode*) data);
	_g_free0 (self->priv->cname);
	self->priv->cname = _tmp15_;
	_tmp16_ = vala_get_ccode_param_spec_function ((ValaCodeNode*) data);
	_g_free0 (self->priv->param_spec_function_name);
	self->priv->param_spec_function_name = _tmp16_;
	_tmp17_ = vala_get_ccode_unref_function ((ValaObjectTypeSymbol*) data);
	_g_free0 (self->priv->unref_function_name);
	self->priv->unref_function_name = _tmp17_;
	_tmp18_ = vala_get_ccode_ref_function ((ValaTypeSymbol*) data);
	_g_free0 (self->priv->ref_function_name);
	self->priv->ref_function_name = _tmp18_;
	_tmp20_ = vala_class_get_is_compact (data);
	_tmp21_ = _tmp20_;
	if (_tmp21_) {
		gchar* _tmp22_;
		_tmp22_ = vala_get_ccode_free_function ((ValaTypeSymbol*) data);
		_g_free0 (_tmp19_);
		_tmp19_ = _tmp22_;
	} else {
		_g_free0 (_tmp19_);
		_tmp19_ = NULL;
	}
	_tmp23_ = g_strdup (_tmp19_);
	_g_free0 (self->priv->free_function_name);
	self->priv->free_function_name = _tmp23_;
	_tmp24_ = vala_get_ccode_take_value_function ((ValaCodeNode*) data);
	_g_free0 (self->priv->take_value_function_cname);
	self->priv->take_value_function_cname = _tmp24_;
	_tmp25_ = vala_get_ccode_get_value_function ((ValaCodeNode*) data);
	_g_free0 (self->priv->get_value_function_cname);
	self->priv->get_value_function_cname = _tmp25_;
	_tmp26_ = vala_get_ccode_set_value_function ((ValaCodeNode*) data);
	_g_free0 (self->priv->set_value_function_cname);
	self->priv->set_value_function_cname = _tmp26_;
	valadoc_api_class_set_is_fundamental (self, vala_class_is_fundamental (data));
	_tmp27_ = vala_class_get_is_abstract (data);
	_tmp28_ = _tmp27_;
	valadoc_api_class_set_is_abstract (self, _tmp28_);
	_tmp29_ = vala_class_get_is_sealed (data);
	_tmp30_ = _tmp29_;
	valadoc_api_class_set_is_sealed (self, _tmp30_);
	_g_free0 (_tmp19_);
	return self;
}

ValadocApiClass*
valadoc_api_class_new (ValadocApiNode* parent,
                       ValadocApiSourceFile* file,
                       const gchar* name,
                       ValaSymbolAccessibility accessibility,
                       ValadocApiSourceComment* comment,
                       ValaClass* data)
{
	return valadoc_api_class_construct (VALADOC_API_TYPE_CLASS, parent, file, name, accessibility, comment, data);
}

static gchar*
_valadoc_api_class_get_private_cname (ValadocApiClass* self,
                                      ValaClass* element)
{
	gboolean _tmp0_;
	gboolean _tmp1_;
	gchar* cname = NULL;
	gchar* _tmp2_;
	gchar* _tmp3_ = NULL;
	const gchar* _tmp4_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (element != NULL, NULL);
	_tmp0_ = vala_class_get_is_compact (element);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		result = NULL;
		return result;
	}
	_tmp2_ = vala_get_ccode_name ((ValaCodeNode*) element);
	cname = _tmp2_;
	_tmp4_ = cname;
	if (_tmp4_ != NULL) {
		const gchar* _tmp5_;
		gchar* _tmp6_;
		_tmp5_ = cname;
		_tmp6_ = g_strconcat (_tmp5_, "Private", NULL);
		_g_free0 (_tmp3_);
		_tmp3_ = _tmp6_;
	} else {
		_g_free0 (_tmp3_);
		_tmp3_ = NULL;
	}
	result = _tmp3_;
	_g_free0 (cname);
	return result;
}

ValadocApiTypeReference*
valadoc_api_class_get_base_type (ValadocApiClass* self)
{
	ValadocApiTypeReference* result;
	ValadocApiTypeReference* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_base_type;
	result = _tmp0_;
	return result;
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

void
valadoc_api_class_set_base_type (ValadocApiClass* self,
                                 ValadocApiTypeReference* value)
{
	ValadocApiTypeReference* old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_api_class_get_base_type (self);
	if (old_value != value) {
		ValadocApiTypeReference* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_base_type);
		self->priv->_base_type = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_api_class_properties[VALADOC_API_CLASS_BASE_TYPE_PROPERTY]);
	}
}

/**
 * Returns the name of this class as it is used in C.
 */
gchar*
valadoc_api_class_get_cname (ValadocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->cname;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the name of this class' private data structure as it is used in C.
 */
gchar*
valadoc_api_class_get_private_cname (ValadocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->private_cname;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the C symbol representing the runtime type id for this data type.
 */
gchar*
valadoc_api_class_get_type_id (ValadocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->type_id;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the C function name that increments the reference count of
 * instances of this data type.
 *
 * @return the name of the C function or null if this data type does not
 *         support reference counting
 */
gchar*
valadoc_api_class_get_ref_function_cname (ValadocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->ref_function_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the C function name that decrements the reference count of
 * instances of this data type.
 *
 * @return the name of the C function or null if this data type does not
 *         support reference counting
 */
gchar*
valadoc_api_class_get_unref_function_cname (ValadocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->unref_function_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the C function name that frees the
 * instances of this data type.
 *
 * @return the name of the C function or null
 */
gchar*
valadoc_api_class_get_free_function_name (ValadocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->free_function_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the cname of the GValue parameter spec function.
 */
gchar*
valadoc_api_class_get_param_spec_function_cname (ValadocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->param_spec_function_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the cname of the GValue setter function.
 */
gchar*
valadoc_api_class_get_set_value_function_cname (ValadocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->set_value_function_cname;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the cname of the GValue getter function.
 */
gchar*
valadoc_api_class_get_get_value_function_cname (ValadocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->get_value_function_cname;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the cname of the GValue taker function.
 */
gchar*
valadoc_api_class_get_take_value_function_cname (ValadocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->take_value_function_cname;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the dbus-name.
 */
gchar*
valadoc_api_class_get_dbus_name (ValadocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->dbus_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Gets the name of the GType macro which returns the class struct.
 */
gchar*
valadoc_api_class_get_class_macro_name (ValadocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->class_macro_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Gets the name of the GType macro which returns the type of the class.
 */
gchar*
valadoc_api_class_get_class_type_macro_name (ValadocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->class_type_macro_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Gets the name of the GType macro which returns whether a class instance is of a given type.
 */
gchar*
valadoc_api_class_get_is_class_type_macro_name (ValadocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->is_class_type_macro_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns a list of all newly implemented interfaces.
 *
 * @see get_full_implemented_interface_list
 */
static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}

ValaCollection*
valadoc_api_class_get_implemented_interface_list (ValadocApiClass* self)
{
	ValaArrayList* _tmp0_;
	ValaCollection* _tmp1_;
	ValaCollection* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->interfaces;
	_tmp1_ = _vala_iterable_ref0 ((ValaCollection*) _tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns a list of all implemented interfaces.
 *
 * @see get_implemented_interface_list
 */
ValaCollection*
valadoc_api_class_get_full_implemented_interface_list (ValadocApiClass* self)
{
	ValaCollection* _tmp0_;
	ValaCollection* _tmp12_;
	ValaCollection* _tmp13_;
	ValaCollection* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_full_implemented_interfaces;
	if (_tmp0_ == NULL) {
		GEqualFunc _tmp1_;
		ValaArrayList* _tmp2_;
		ValaCollection* _tmp3_;
		ValaArrayList* _tmp4_;
		ValadocApiTypeReference* _tmp5_;
		_tmp1_ = g_direct_equal;
		_tmp2_ = vala_array_list_new (VALADOC_API_TYPE_TYPEREFERENCE, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp1_);
		_vala_iterable_unref0 (self->priv->_full_implemented_interfaces);
		self->priv->_full_implemented_interfaces = (ValaCollection*) _tmp2_;
		_tmp3_ = self->priv->_full_implemented_interfaces;
		_tmp4_ = self->priv->interfaces;
		vala_collection_add_all (_tmp3_, (ValaCollection*) _tmp4_);
		_tmp5_ = self->priv->_base_type;
		if (_tmp5_ != NULL) {
			ValaCollection* _tmp6_;
			ValadocApiTypeReference* _tmp7_;
			ValadocApiItem* _tmp8_;
			ValadocApiItem* _tmp9_;
			ValaCollection* _tmp10_;
			ValaCollection* _tmp11_;
			_tmp6_ = self->priv->_full_implemented_interfaces;
			_tmp7_ = self->priv->_base_type;
			_tmp8_ = valadoc_api_typereference_get_data_type (_tmp7_);
			_tmp9_ = _tmp8_;
			_tmp10_ = valadoc_api_class_get_full_implemented_interface_list (G_TYPE_CHECK_INSTANCE_CAST (_tmp9_, VALADOC_API_TYPE_CLASS, ValadocApiClass));
			_tmp11_ = _tmp10_;
			vala_collection_add_all (_tmp6_, _tmp11_);
			_vala_iterable_unref0 (_tmp11_);
		}
	}
	_tmp12_ = self->priv->_full_implemented_interfaces;
	_tmp13_ = _vala_iterable_ref0 (_tmp12_);
	result = _tmp13_;
	return result;
}

void
valadoc_api_class_add_interface (ValadocApiClass* self,
                                 ValadocApiTypeReference* iface)
{
	ValaArrayList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (iface != NULL);
	_tmp0_ = self->priv->interfaces;
	vala_collection_add ((ValaCollection*) _tmp0_, iface);
}

gboolean
valadoc_api_class_get_is_abstract (ValadocApiClass* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_abstract;
	return result;
}

static void
valadoc_api_class_set_is_abstract (ValadocApiClass* self,
                                   gboolean value)
{
	gboolean old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_api_class_get_is_abstract (self);
	if (old_value != value) {
		self->priv->_is_abstract = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_api_class_properties[VALADOC_API_CLASS_IS_ABSTRACT_PROPERTY]);
	}
}

gboolean
valadoc_api_class_get_is_sealed (ValadocApiClass* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_sealed;
	return result;
}

static void
valadoc_api_class_set_is_sealed (ValadocApiClass* self,
                                 gboolean value)
{
	gboolean old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_api_class_get_is_sealed (self);
	if (old_value != value) {
		self->priv->_is_sealed = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_api_class_properties[VALADOC_API_CLASS_IS_SEALED_PROPERTY]);
	}
}

gboolean
valadoc_api_class_get_is_fundamental (ValadocApiClass* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_fundamental;
	return result;
}

static void
valadoc_api_class_set_is_fundamental (ValadocApiClass* self,
                                      gboolean value)
{
	gboolean old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_api_class_get_is_fundamental (self);
	if (old_value != value) {
		self->priv->_is_fundamental = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_api_class_properties[VALADOC_API_CLASS_IS_FUNDAMENTAL_PROPERTY]);
	}
}

gboolean
valadoc_api_class_get_is_compact (ValadocApiClass* self)
{
	gboolean result;
	ValaCodeNode* _tmp0_;
	ValaCodeNode* _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = valadoc_api_item_get_data ((ValadocApiItem*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_class_get_is_compact (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, VALA_TYPE_CLASS, ValaClass));
	_tmp3_ = _tmp2_;
	result = _tmp3_;
	return result;
}

static ValadocApiNodeType
valadoc_api_class_real_get_node_type (ValadocApiNode* base)
{
	ValadocApiNodeType result;
	ValadocApiClass* self;
	self = (ValadocApiClass*) base;
	result = VALADOC_API_NODE_TYPE_CLASS;
	return result;
}

/**
 * {@inheritDoc}
 */
static void
valadoc_api_class_real_accept (ValadocApiNode* base,
                               ValadocApiVisitor* visitor)
{
	ValadocApiClass * self;
	self = (ValadocApiClass*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_api_visitor_visit_class (visitor, self);
}

/**
 * Returns a list of all known classes based on this class
 */
ValaCollection*
valadoc_api_class_get_known_child_classes (ValadocApiClass* self)
{
	ValaSet* _tmp0_;
	ValaCollection* _tmp1_;
	ValaCollection* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_known_child_classes;
	_tmp1_ = _vala_iterable_ref0 ((ValaCollection*) _tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns a list of all known interfaces based on this class
 */
ValaCollection*
valadoc_api_class_get_known_derived_interfaces (ValadocApiClass* self)
{
	ValaSet* _tmp0_;
	ValaCollection* _tmp1_;
	ValaCollection* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_known_derived_interfaces;
	_tmp1_ = _vala_iterable_ref0 ((ValaCollection*) _tmp0_);
	result = _tmp1_;
	return result;
}

void
valadoc_api_class_register_derived_interface (ValadocApiClass* self,
                                              ValadocApiInterface* iface)
{
	ValaSet* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (iface != NULL);
	_tmp0_ = self->priv->_known_derived_interfaces;
	vala_collection_add ((ValaCollection*) _tmp0_, iface);
}

void
valadoc_api_class_register_child_class (ValadocApiClass* self,
                                        ValadocApiClass* cl)
{
	ValadocApiTypeReference* _tmp0_;
	ValaSet* _tmp4_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (cl != NULL);
	_tmp0_ = self->priv->_base_type;
	if (_tmp0_ != NULL) {
		ValadocApiTypeReference* _tmp1_;
		ValadocApiItem* _tmp2_;
		ValadocApiItem* _tmp3_;
		_tmp1_ = self->priv->_base_type;
		_tmp2_ = valadoc_api_typereference_get_data_type (_tmp1_);
		_tmp3_ = _tmp2_;
		valadoc_api_class_register_child_class (G_TYPE_CHECK_INSTANCE_CAST (_tmp3_, VALADOC_API_TYPE_CLASS, ValadocApiClass), cl);
	}
	_tmp4_ = self->priv->_known_child_classes;
	vala_collection_add ((ValaCollection*) _tmp4_, cl);
}

/**
 * {@inheritDoc}
 */
static ValadocContentInline*
valadoc_api_class_real_build_signature (ValadocApiItem* base)
{
	ValadocApiClass * self;
	ValadocApiSignatureBuilder* signature = NULL;
	ValadocApiSignatureBuilder* _tmp0_;
	ValadocApiSignatureBuilder* _tmp1_;
	ValaSymbolAccessibility _tmp2_;
	ValaSymbolAccessibility _tmp3_;
	const gchar* _tmp4_;
	gboolean _tmp5_;
	gboolean _tmp7_;
	ValadocApiSignatureBuilder* _tmp9_;
	ValadocApiSignatureBuilder* _tmp10_;
	ValaList* type_parameters = NULL;
	ValaList* _tmp11_;
	ValaList* _tmp12_;
	gint _tmp13_;
	gint _tmp14_;
	gboolean first = FALSE;
	ValadocApiTypeReference* _tmp30_;
	ValaArrayList* _tmp36_;
	gint _tmp37_;
	gint _tmp38_;
	ValadocApiSignatureBuilder* _tmp53_;
	ValadocContentRun* _tmp54_;
	ValadocContentInline* result = NULL;
	self = (ValadocApiClass*) base;
	_tmp0_ = valadoc_api_signature_builder_new ();
	signature = _tmp0_;
	_tmp1_ = signature;
	_tmp2_ = valadoc_api_symbol_get_accessibility ((ValadocApiSymbol*) self);
	_tmp3_ = _tmp2_;
	_tmp4_ = vala_symbol_accessibility_to_string (_tmp3_);
	valadoc_api_signature_builder_append_keyword (_tmp1_, _tmp4_, TRUE);
	_tmp5_ = self->priv->_is_abstract;
	if (_tmp5_) {
		ValadocApiSignatureBuilder* _tmp6_;
		_tmp6_ = signature;
		valadoc_api_signature_builder_append_keyword (_tmp6_, "abstract", TRUE);
	}
	_tmp7_ = self->priv->_is_sealed;
	if (_tmp7_) {
		ValadocApiSignatureBuilder* _tmp8_;
		_tmp8_ = signature;
		valadoc_api_signature_builder_append_keyword (_tmp8_, "sealed", TRUE);
	}
	_tmp9_ = signature;
	valadoc_api_signature_builder_append_keyword (_tmp9_, "class", TRUE);
	_tmp10_ = signature;
	valadoc_api_signature_builder_append_symbol (_tmp10_, (ValadocApiNode*) self, TRUE);
	_tmp11_ = valadoc_api_node_get_children_by_type ((ValadocApiNode*) self, VALADOC_API_NODE_TYPE_TYPE_PARAMETER, FALSE);
	type_parameters = _tmp11_;
	_tmp12_ = type_parameters;
	_tmp13_ = vala_collection_get_size ((ValaCollection*) _tmp12_);
	_tmp14_ = _tmp13_;
	if (_tmp14_ > 0) {
		ValadocApiSignatureBuilder* _tmp15_;
		gboolean first = FALSE;
		ValadocApiSignatureBuilder* _tmp29_;
		_tmp15_ = signature;
		valadoc_api_signature_builder_append (_tmp15_, "<", FALSE);
		first = TRUE;
		{
			ValaList* _param_list = NULL;
			ValaList* _tmp16_;
			gint _param_size = 0;
			ValaList* _tmp17_;
			gint _tmp18_;
			gint _tmp19_;
			gint _param_index = 0;
			_tmp16_ = type_parameters;
			_param_list = _tmp16_;
			_tmp17_ = _param_list;
			_tmp18_ = vala_collection_get_size ((ValaCollection*) _tmp17_);
			_tmp19_ = _tmp18_;
			_param_size = _tmp19_;
			_param_index = -1;
			while (TRUE) {
				gint _tmp20_;
				gint _tmp21_;
				ValadocApiItem* param = NULL;
				ValaList* _tmp22_;
				gpointer _tmp23_;
				ValadocApiSignatureBuilder* _tmp25_;
				ValadocApiItem* _tmp26_;
				ValadocContentInline* _tmp27_;
				ValadocContentInline* _tmp28_;
				_param_index = _param_index + 1;
				_tmp20_ = _param_index;
				_tmp21_ = _param_size;
				if (!(_tmp20_ < _tmp21_)) {
					break;
				}
				_tmp22_ = _param_list;
				_tmp23_ = vala_list_get (_tmp22_, _param_index);
				param = (ValadocApiItem*) ((ValadocApiNode*) _tmp23_);
				if (!first) {
					ValadocApiSignatureBuilder* _tmp24_;
					_tmp24_ = signature;
					valadoc_api_signature_builder_append (_tmp24_, ",", FALSE);
				}
				_tmp25_ = signature;
				_tmp26_ = param;
				_tmp27_ = valadoc_api_item_get_signature (_tmp26_);
				_tmp28_ = _tmp27_;
				valadoc_api_signature_builder_append_content (_tmp25_, _tmp28_, FALSE);
				first = FALSE;
				_g_object_unref0 (param);
			}
		}
		_tmp29_ = signature;
		valadoc_api_signature_builder_append (_tmp29_, ">", FALSE);
	}
	first = TRUE;
	_tmp30_ = self->priv->_base_type;
	if (_tmp30_ != NULL) {
		ValadocApiSignatureBuilder* _tmp31_;
		ValadocApiSignatureBuilder* _tmp32_;
		ValadocApiTypeReference* _tmp33_;
		ValadocContentInline* _tmp34_;
		ValadocContentInline* _tmp35_;
		_tmp31_ = signature;
		valadoc_api_signature_builder_append (_tmp31_, ":", TRUE);
		_tmp32_ = signature;
		_tmp33_ = self->priv->_base_type;
		_tmp34_ = valadoc_api_item_get_signature ((ValadocApiItem*) _tmp33_);
		_tmp35_ = _tmp34_;
		valadoc_api_signature_builder_append_content (_tmp32_, _tmp35_, TRUE);
		first = FALSE;
	}
	_tmp36_ = self->priv->interfaces;
	_tmp37_ = vala_collection_get_size ((ValaCollection*) _tmp36_);
	_tmp38_ = _tmp37_;
	if (_tmp38_ > 0) {
		if (first) {
			ValadocApiSignatureBuilder* _tmp39_;
			_tmp39_ = signature;
			valadoc_api_signature_builder_append (_tmp39_, ":", TRUE);
		}
		{
			ValaArrayList* _implemented_interface_list = NULL;
			ValaArrayList* _tmp40_;
			gint _implemented_interface_size = 0;
			ValaArrayList* _tmp41_;
			gint _tmp42_;
			gint _tmp43_;
			gint _implemented_interface_index = 0;
			_tmp40_ = self->priv->interfaces;
			_implemented_interface_list = _tmp40_;
			_tmp41_ = _implemented_interface_list;
			_tmp42_ = vala_collection_get_size ((ValaCollection*) _tmp41_);
			_tmp43_ = _tmp42_;
			_implemented_interface_size = _tmp43_;
			_implemented_interface_index = -1;
			while (TRUE) {
				gint _tmp44_;
				gint _tmp45_;
				ValadocApiItem* implemented_interface = NULL;
				ValaArrayList* _tmp46_;
				gpointer _tmp47_;
				ValadocApiSignatureBuilder* _tmp49_;
				ValadocApiItem* _tmp50_;
				ValadocContentInline* _tmp51_;
				ValadocContentInline* _tmp52_;
				_implemented_interface_index = _implemented_interface_index + 1;
				_tmp44_ = _implemented_interface_index;
				_tmp45_ = _implemented_interface_size;
				if (!(_tmp44_ < _tmp45_)) {
					break;
				}
				_tmp46_ = _implemented_interface_list;
				_tmp47_ = vala_list_get ((ValaList*) _tmp46_, _implemented_interface_index);
				implemented_interface = (ValadocApiItem*) ((ValadocApiTypeReference*) _tmp47_);
				if (!first) {
					ValadocApiSignatureBuilder* _tmp48_;
					_tmp48_ = signature;
					valadoc_api_signature_builder_append (_tmp48_, ",", FALSE);
				}
				_tmp49_ = signature;
				_tmp50_ = implemented_interface;
				_tmp51_ = valadoc_api_item_get_signature (_tmp50_);
				_tmp52_ = _tmp51_;
				valadoc_api_signature_builder_append_content (_tmp49_, _tmp52_, TRUE);
				first = FALSE;
				_g_object_unref0 (implemented_interface);
			}
		}
	}
	_tmp53_ = signature;
	_tmp54_ = valadoc_api_signature_builder_get (_tmp53_);
	result = (ValadocContentInline*) _tmp54_;
	_vala_iterable_unref0 (type_parameters);
	_valadoc_api_signature_builder_unref0 (signature);
	return result;
}

static void
valadoc_api_class_class_init (ValadocApiClassClass * klass,
                              gpointer klass_data)
{
	valadoc_api_class_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocApiClass_private_offset);
	((ValadocApiNodeClass *) klass)->accept = (void (*) (ValadocApiNode*, ValadocApiVisitor*)) valadoc_api_class_real_accept;
	((ValadocApiItemClass *) klass)->build_signature = (ValadocContentInline* (*) (ValadocApiItem*)) valadoc_api_class_real_build_signature;
	VALADOC_API_NODE_CLASS (klass)->get_node_type = valadoc_api_class_real_get_node_type;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_api_class_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_valadoc_api_class_set_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_api_class_finalize;
	/**
	 * Specifies the base class.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_CLASS_BASE_TYPE_PROPERTY, valadoc_api_class_properties[VALADOC_API_CLASS_BASE_TYPE_PROPERTY] = g_param_spec_object ("base-type", "base-type", "base-type", VALADOC_API_TYPE_TYPEREFERENCE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	 * Specifies whether this class is abstract.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_CLASS_IS_ABSTRACT_PROPERTY, valadoc_api_class_properties[VALADOC_API_CLASS_IS_ABSTRACT_PROPERTY] = g_param_spec_boolean ("is-abstract", "is-abstract", "is-abstract", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Specifies whether this class is sealed. Sealed classes may not be
	 * sub-classed.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_CLASS_IS_SEALED_PROPERTY, valadoc_api_class_properties[VALADOC_API_CLASS_IS_SEALED_PROPERTY] = g_param_spec_boolean ("is-sealed", "is-sealed", "is-sealed", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Specifies whether this class is fundamental.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_CLASS_IS_FUNDAMENTAL_PROPERTY, valadoc_api_class_properties[VALADOC_API_CLASS_IS_FUNDAMENTAL_PROPERTY] = g_param_spec_boolean ("is-fundamental", "is-fundamental", "is-fundamental", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_CLASS_IS_COMPACT_PROPERTY, valadoc_api_class_properties[VALADOC_API_CLASS_IS_COMPACT_PROPERTY] = g_param_spec_boolean ("is-compact", "is-compact", "is-compact", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_CLASS_NODE_TYPE_PROPERTY, valadoc_api_class_properties[VALADOC_API_CLASS_NODE_TYPE_PROPERTY] = g_param_spec_enum ("node-type", "node-type", "node-type", VALADOC_API_TYPE_NODE_TYPE, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static void
valadoc_api_class_instance_init (ValadocApiClass * self,
                                 gpointer klass)
{
	GHashFunc _tmp0_;
	GEqualFunc _tmp1_;
	ValaHashSet* _tmp2_;
	GHashFunc _tmp3_;
	GEqualFunc _tmp4_;
	ValaHashSet* _tmp5_;
	self->priv = valadoc_api_class_get_instance_private (self);
	self->priv->_full_implemented_interfaces = NULL;
	_tmp0_ = g_direct_hash;
	_tmp1_ = g_direct_equal;
	_tmp2_ = vala_hash_set_new (VALADOC_API_TYPE_INTERFACE, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp0_, _tmp1_);
	self->priv->_known_derived_interfaces = (ValaSet*) _tmp2_;
	_tmp3_ = g_direct_hash;
	_tmp4_ = g_direct_equal;
	_tmp5_ = vala_hash_set_new (VALADOC_API_TYPE_CLASS, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp3_, _tmp4_);
	self->priv->_known_child_classes = (ValaSet*) _tmp5_;
}

static void
valadoc_api_class_finalize (GObject * obj)
{
	ValadocApiClass * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_API_TYPE_CLASS, ValadocApiClass);
	_vala_iterable_unref0 (self->priv->interfaces);
	_g_free0 (self->priv->dbus_name);
	_g_free0 (self->priv->take_value_function_cname);
	_g_free0 (self->priv->get_value_function_cname);
	_g_free0 (self->priv->set_value_function_cname);
	_g_free0 (self->priv->unref_function_name);
	_g_free0 (self->priv->ref_function_name);
	_g_free0 (self->priv->free_function_name);
	_g_free0 (self->priv->param_spec_function_name);
	_g_free0 (self->priv->type_id);
	_g_free0 (self->priv->is_class_type_macro_name);
	_g_free0 (self->priv->class_type_macro_name);
	_g_free0 (self->priv->class_macro_name);
	_g_free0 (self->priv->private_cname);
	_g_free0 (self->priv->cname);
	_g_object_unref0 (self->priv->_base_type);
	_vala_iterable_unref0 (self->priv->_full_implemented_interfaces);
	_vala_iterable_unref0 (self->priv->_known_derived_interfaces);
	_vala_iterable_unref0 (self->priv->_known_child_classes);
	G_OBJECT_CLASS (valadoc_api_class_parent_class)->finalize (obj);
}

/**
 * Represents a class declaration.
 */
static GType
valadoc_api_class_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocApiClassClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_api_class_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocApiClass), 0, (GInstanceInitFunc) valadoc_api_class_instance_init, NULL };
	GType valadoc_api_class_type_id;
	valadoc_api_class_type_id = g_type_register_static (VALADOC_API_TYPE_TYPESYMBOL, "ValadocApiClass", &g_define_type_info, 0);
	ValadocApiClass_private_offset = g_type_add_instance_private (valadoc_api_class_type_id, sizeof (ValadocApiClassPrivate));
	return valadoc_api_class_type_id;
}

GType
valadoc_api_class_get_type (void)
{
	static volatile gsize valadoc_api_class_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_api_class_type_id__volatile)) {
		GType valadoc_api_class_type_id;
		valadoc_api_class_type_id = valadoc_api_class_get_type_once ();
		g_once_init_leave (&valadoc_api_class_type_id__volatile, valadoc_api_class_type_id);
	}
	return valadoc_api_class_type_id__volatile;
}

static void
_vala_valadoc_api_class_get_property (GObject * object,
                                      guint property_id,
                                      GValue * value,
                                      GParamSpec * pspec)
{
	ValadocApiClass * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_API_TYPE_CLASS, ValadocApiClass);
	switch (property_id) {
		case VALADOC_API_CLASS_BASE_TYPE_PROPERTY:
		g_value_set_object (value, valadoc_api_class_get_base_type (self));
		break;
		case VALADOC_API_CLASS_IS_ABSTRACT_PROPERTY:
		g_value_set_boolean (value, valadoc_api_class_get_is_abstract (self));
		break;
		case VALADOC_API_CLASS_IS_SEALED_PROPERTY:
		g_value_set_boolean (value, valadoc_api_class_get_is_sealed (self));
		break;
		case VALADOC_API_CLASS_IS_FUNDAMENTAL_PROPERTY:
		g_value_set_boolean (value, valadoc_api_class_get_is_fundamental (self));
		break;
		case VALADOC_API_CLASS_IS_COMPACT_PROPERTY:
		g_value_set_boolean (value, valadoc_api_class_get_is_compact (self));
		break;
		case VALADOC_API_CLASS_NODE_TYPE_PROPERTY:
		g_value_set_enum (value, valadoc_api_node_get_node_type ((ValadocApiNode*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_valadoc_api_class_set_property (GObject * object,
                                      guint property_id,
                                      const GValue * value,
                                      GParamSpec * pspec)
{
	ValadocApiClass * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_API_TYPE_CLASS, ValadocApiClass);
	switch (property_id) {
		case VALADOC_API_CLASS_BASE_TYPE_PROPERTY:
		valadoc_api_class_set_base_type (self, g_value_get_object (value));
		break;
		case VALADOC_API_CLASS_IS_ABSTRACT_PROPERTY:
		valadoc_api_class_set_is_abstract (self, g_value_get_boolean (value));
		break;
		case VALADOC_API_CLASS_IS_SEALED_PROPERTY:
		valadoc_api_class_set_is_sealed (self, g_value_get_boolean (value));
		break;
		case VALADOC_API_CLASS_IS_FUNDAMENTAL_PROPERTY:
		valadoc_api_class_set_is_fundamental (self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

