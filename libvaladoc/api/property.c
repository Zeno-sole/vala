/* property.c generated by valac, the Vala compiler
 * generated from property.vala, do not modify */

/* property.vala
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
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <vala.h>
#include <valacodegen.h>

enum  {
	VALADOC_API_PROPERTY_0_PROPERTY,
	VALADOC_API_PROPERTY_PROPERTY_TYPE_PROPERTY,
	VALADOC_API_PROPERTY_IS_VIRTUAL_PROPERTY,
	VALADOC_API_PROPERTY_IS_ABSTRACT_PROPERTY,
	VALADOC_API_PROPERTY_IS_OVERRIDE_PROPERTY,
	VALADOC_API_PROPERTY_IS_DBUS_VISIBLE_PROPERTY,
	VALADOC_API_PROPERTY_SETTER_PROPERTY,
	VALADOC_API_PROPERTY_GETTER_PROPERTY,
	VALADOC_API_PROPERTY_BASE_PROPERTY_PROPERTY,
	VALADOC_API_PROPERTY_NODE_TYPE_PROPERTY,
	VALADOC_API_PROPERTY_NUM_PROPERTIES
};
static GParamSpec* valadoc_api_property_properties[VALADOC_API_PROPERTY_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _valadoc_api_signature_builder_unref0(var) ((var == NULL) ? NULL : (var = (valadoc_api_signature_builder_unref (var), NULL)))

struct _ValadocApiPropertyPrivate {
	gchar* dbus_name;
	gchar* cname;
	ValadocApiTypeReference* _property_type;
	gboolean _is_dbus_visible;
	ValadocApiPropertyAccessor* _setter;
	ValadocApiPropertyAccessor* _getter;
	ValadocApiProperty* _base_property;
};

static gint ValadocApiProperty_private_offset;
static gpointer valadoc_api_property_parent_class = NULL;

 G_GNUC_INTERNAL void valadoc_api_item_parse_comments (ValadocApiItem* self,
                                      ValadocSettings* settings,
                                      ValadocDocumentationParser* parser);
 G_GNUC_INTERNAL void valadoc_api_item_check_comments (ValadocApiItem* self,
                                      ValadocSettings* settings,
                                      ValadocDocumentationParser* parser);
static void valadoc_api_property_set_is_dbus_visible (ValadocApiProperty* self,
                                               gboolean value);
static void valadoc_api_property_real_parse_comments (ValadocApiItem* base,
                                               ValadocSettings* settings,
                                               ValadocDocumentationParser* parser);
static void valadoc_api_property_real_check_comments (ValadocApiItem* base,
                                               ValadocSettings* settings,
                                               ValadocDocumentationParser* parser);
static ValadocContentInline* valadoc_api_property_real_build_signature (ValadocApiItem* base);
static void valadoc_api_property_real_accept (ValadocApiNode* base,
                                       ValadocApiVisitor* visitor);
static void valadoc_api_property_finalize (GObject * obj);
static GType valadoc_api_property_get_type_once (void);
static void _vala_valadoc_api_property_get_property (GObject * object,
                                              guint property_id,
                                              GValue * value,
                                              GParamSpec * pspec);
static void _vala_valadoc_api_property_set_property (GObject * object,
                                              guint property_id,
                                              const GValue * value,
                                              GParamSpec * pspec);

static inline gpointer
valadoc_api_property_get_instance_private (ValadocApiProperty* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocApiProperty_private_offset);
}

ValadocApiProperty*
valadoc_api_property_construct (GType object_type,
                                ValadocApiNode* parent,
                                ValadocApiSourceFile* file,
                                const gchar* name,
                                ValaSymbolAccessibility accessibility,
                                ValadocApiSourceComment* comment,
                                ValaProperty* data)
{
	ValadocApiProperty * self = NULL;
	gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (file != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (data != NULL, NULL);
	self = (ValadocApiProperty*) valadoc_api_symbol_construct (object_type, parent, file, name, accessibility, comment, (ValaSymbol*) data);
	valadoc_api_property_set_is_dbus_visible (self, vala_gd_bus_module_is_dbus_visible ((ValaCodeNode*) data));
	_tmp0_ = vala_gd_bus_module_get_dbus_name_for_member ((ValaSymbol*) data);
	_g_free0 (self->priv->dbus_name);
	self->priv->dbus_name = _tmp0_;
	_tmp1_ = vala_get_ccode_name ((ValaCodeNode*) data);
	_g_free0 (self->priv->cname);
	self->priv->cname = _tmp1_;
	return self;
}

ValadocApiProperty*
valadoc_api_property_new (ValadocApiNode* parent,
                          ValadocApiSourceFile* file,
                          const gchar* name,
                          ValaSymbolAccessibility accessibility,
                          ValadocApiSourceComment* comment,
                          ValaProperty* data)
{
	return valadoc_api_property_construct (VALADOC_API_TYPE_PROPERTY, parent, file, name, accessibility, comment, data);
}

/**
 * Returns the name of this method as it is used in C.
 */
gchar*
valadoc_api_property_get_cname (ValadocApiProperty* self)
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
 * Returns the dbus-name.
 */
gchar*
valadoc_api_property_get_dbus_name (ValadocApiProperty* self)
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

ValadocApiTypeReference*
valadoc_api_property_get_property_type (ValadocApiProperty* self)
{
	ValadocApiTypeReference* result;
	ValadocApiTypeReference* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_property_type;
	result = _tmp0_;
	return result;
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

void
valadoc_api_property_set_property_type (ValadocApiProperty* self,
                                        ValadocApiTypeReference* value)
{
	ValadocApiTypeReference* old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_api_property_get_property_type (self);
	if (old_value != value) {
		ValadocApiTypeReference* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_property_type);
		self->priv->_property_type = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_api_property_properties[VALADOC_API_PROPERTY_PROPERTY_TYPE_PROPERTY]);
	}
}

gboolean
valadoc_api_property_get_is_virtual (ValadocApiProperty* self)
{
	gboolean result;
	ValaCodeNode* _tmp0_;
	ValaCodeNode* _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = valadoc_api_item_get_data ((ValadocApiItem*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_property_get_is_virtual (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, VALA_TYPE_PROPERTY, ValaProperty));
	_tmp3_ = _tmp2_;
	result = _tmp3_;
	return result;
}

gboolean
valadoc_api_property_get_is_abstract (ValadocApiProperty* self)
{
	gboolean result;
	ValaCodeNode* _tmp0_;
	ValaCodeNode* _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = valadoc_api_item_get_data ((ValadocApiItem*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_property_get_is_abstract (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, VALA_TYPE_PROPERTY, ValaProperty));
	_tmp3_ = _tmp2_;
	result = _tmp3_;
	return result;
}

gboolean
valadoc_api_property_get_is_override (ValadocApiProperty* self)
{
	gboolean result;
	ValaCodeNode* _tmp0_;
	ValaCodeNode* _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = valadoc_api_item_get_data ((ValadocApiItem*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_property_get_overrides (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, VALA_TYPE_PROPERTY, ValaProperty));
	_tmp3_ = _tmp2_;
	result = _tmp3_;
	return result;
}

gboolean
valadoc_api_property_get_is_dbus_visible (ValadocApiProperty* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_dbus_visible;
	return result;
}

static void
valadoc_api_property_set_is_dbus_visible (ValadocApiProperty* self,
                                          gboolean value)
{
	gboolean old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_api_property_get_is_dbus_visible (self);
	if (old_value != value) {
		self->priv->_is_dbus_visible = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_api_property_properties[VALADOC_API_PROPERTY_IS_DBUS_VISIBLE_PROPERTY]);
	}
}

ValadocApiPropertyAccessor*
valadoc_api_property_get_setter (ValadocApiProperty* self)
{
	ValadocApiPropertyAccessor* result;
	ValadocApiPropertyAccessor* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_setter;
	result = _tmp0_;
	return result;
}

void
valadoc_api_property_set_setter (ValadocApiProperty* self,
                                 ValadocApiPropertyAccessor* value)
{
	ValadocApiPropertyAccessor* old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_api_property_get_setter (self);
	if (old_value != value) {
		ValadocApiPropertyAccessor* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_setter);
		self->priv->_setter = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_api_property_properties[VALADOC_API_PROPERTY_SETTER_PROPERTY]);
	}
}

ValadocApiPropertyAccessor*
valadoc_api_property_get_getter (ValadocApiProperty* self)
{
	ValadocApiPropertyAccessor* result;
	ValadocApiPropertyAccessor* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_getter;
	result = _tmp0_;
	return result;
}

void
valadoc_api_property_set_getter (ValadocApiProperty* self,
                                 ValadocApiPropertyAccessor* value)
{
	ValadocApiPropertyAccessor* old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_api_property_get_getter (self);
	if (old_value != value) {
		ValadocApiPropertyAccessor* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_getter);
		self->priv->_getter = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_api_property_properties[VALADOC_API_PROPERTY_GETTER_PROPERTY]);
	}
}

ValadocApiProperty*
valadoc_api_property_get_base_property (ValadocApiProperty* self)
{
	ValadocApiProperty* result;
	ValadocApiProperty* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_base_property;
	result = _tmp0_;
	return result;
}

void
valadoc_api_property_set_base_property (ValadocApiProperty* self,
                                        ValadocApiProperty* value)
{
	ValadocApiProperty* old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_api_property_get_base_property (self);
	if (old_value != value) {
		ValadocApiProperty* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_base_property);
		self->priv->_base_property = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_api_property_properties[VALADOC_API_PROPERTY_BASE_PROPERTY_PROPERTY]);
	}
}

/**
 * {@inheritDoc}
 */
static void
valadoc_api_property_real_parse_comments (ValadocApiItem* base,
                                          ValadocSettings* settings,
                                          ValadocDocumentationParser* parser)
{
	ValadocApiProperty * self;
	gboolean _tmp0_ = FALSE;
	ValadocApiPropertyAccessor* _tmp1_;
	gboolean _tmp4_ = FALSE;
	ValadocApiPropertyAccessor* _tmp5_;
	self = (ValadocApiProperty*) base;
	g_return_if_fail (settings != NULL);
	g_return_if_fail (parser != NULL);
	_tmp1_ = self->priv->_getter;
	if (_tmp1_ != NULL) {
		ValadocApiPropertyAccessor* _tmp2_;
		_tmp2_ = self->priv->_getter;
		_tmp0_ = valadoc_api_node_is_browsable ((ValadocApiNode*) _tmp2_, settings);
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		ValadocApiPropertyAccessor* _tmp3_;
		_tmp3_ = self->priv->_getter;
		valadoc_api_item_parse_comments ((ValadocApiItem*) _tmp3_, settings, parser);
	}
	_tmp5_ = self->priv->_setter;
	if (_tmp5_ != NULL) {
		ValadocApiPropertyAccessor* _tmp6_;
		_tmp6_ = self->priv->_setter;
		_tmp4_ = valadoc_api_node_is_browsable ((ValadocApiNode*) _tmp6_, settings);
	} else {
		_tmp4_ = FALSE;
	}
	if (_tmp4_) {
		ValadocApiPropertyAccessor* _tmp7_;
		_tmp7_ = self->priv->_setter;
		valadoc_api_item_parse_comments ((ValadocApiItem*) _tmp7_, settings, parser);
	}
	VALADOC_API_ITEM_CLASS (valadoc_api_property_parent_class)->parse_comments ((ValadocApiItem*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_API_TYPE_SYMBOL, ValadocApiSymbol), settings, parser);
}

/**
 * {@inheritDoc}
 */
static void
valadoc_api_property_real_check_comments (ValadocApiItem* base,
                                          ValadocSettings* settings,
                                          ValadocDocumentationParser* parser)
{
	ValadocApiProperty * self;
	gboolean _tmp0_ = FALSE;
	ValadocApiPropertyAccessor* _tmp1_;
	gboolean _tmp4_ = FALSE;
	ValadocApiPropertyAccessor* _tmp5_;
	self = (ValadocApiProperty*) base;
	g_return_if_fail (settings != NULL);
	g_return_if_fail (parser != NULL);
	_tmp1_ = self->priv->_getter;
	if (_tmp1_ != NULL) {
		ValadocApiPropertyAccessor* _tmp2_;
		_tmp2_ = self->priv->_getter;
		_tmp0_ = valadoc_api_node_is_browsable ((ValadocApiNode*) _tmp2_, settings);
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		ValadocApiPropertyAccessor* _tmp3_;
		_tmp3_ = self->priv->_getter;
		valadoc_api_item_check_comments ((ValadocApiItem*) _tmp3_, settings, parser);
	}
	_tmp5_ = self->priv->_setter;
	if (_tmp5_ != NULL) {
		ValadocApiPropertyAccessor* _tmp6_;
		_tmp6_ = self->priv->_setter;
		_tmp4_ = valadoc_api_node_is_browsable ((ValadocApiNode*) _tmp6_, settings);
	} else {
		_tmp4_ = FALSE;
	}
	if (_tmp4_) {
		ValadocApiPropertyAccessor* _tmp7_;
		_tmp7_ = self->priv->_setter;
		valadoc_api_item_check_comments ((ValadocApiItem*) _tmp7_, settings, parser);
	}
	VALADOC_API_ITEM_CLASS (valadoc_api_property_parent_class)->check_comments ((ValadocApiItem*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_API_TYPE_SYMBOL, ValadocApiSymbol), settings, parser);
}

/**
 * {@inheritDoc}
 */
static ValadocContentInline*
valadoc_api_property_real_build_signature (ValadocApiItem* base)
{
	ValadocApiProperty * self;
	ValadocApiSignatureBuilder* signature = NULL;
	ValadocApiSignatureBuilder* _tmp0_;
	ValadocApiSignatureBuilder* _tmp1_;
	ValaSymbolAccessibility _tmp2_;
	ValaSymbolAccessibility _tmp3_;
	const gchar* _tmp4_;
	gboolean _tmp5_;
	gboolean _tmp6_;
	ValadocApiSignatureBuilder* _tmp14_;
	ValadocApiTypeReference* _tmp15_;
	ValadocContentInline* _tmp16_;
	ValadocContentInline* _tmp17_;
	ValadocApiSignatureBuilder* _tmp18_;
	ValadocApiSignatureBuilder* _tmp19_;
	gboolean _tmp20_ = FALSE;
	ValadocApiPropertyAccessor* _tmp21_;
	gboolean _tmp27_ = FALSE;
	ValadocApiPropertyAccessor* _tmp28_;
	ValadocApiSignatureBuilder* _tmp34_;
	ValadocApiSignatureBuilder* _tmp35_;
	ValadocContentRun* _tmp36_;
	ValadocContentInline* result = NULL;
	self = (ValadocApiProperty*) base;
	_tmp0_ = valadoc_api_signature_builder_new ();
	signature = _tmp0_;
	_tmp1_ = signature;
	_tmp2_ = valadoc_api_symbol_get_accessibility ((ValadocApiSymbol*) self);
	_tmp3_ = _tmp2_;
	_tmp4_ = vala_symbol_accessibility_to_string (_tmp3_);
	valadoc_api_signature_builder_append_keyword (_tmp1_, _tmp4_, TRUE);
	_tmp5_ = valadoc_api_property_get_is_abstract (self);
	_tmp6_ = _tmp5_;
	if (_tmp6_) {
		ValadocApiSignatureBuilder* _tmp7_;
		_tmp7_ = signature;
		valadoc_api_signature_builder_append_keyword (_tmp7_, "abstract", TRUE);
	} else {
		gboolean _tmp8_;
		gboolean _tmp9_;
		_tmp8_ = valadoc_api_property_get_is_override (self);
		_tmp9_ = _tmp8_;
		if (_tmp9_) {
			ValadocApiSignatureBuilder* _tmp10_;
			_tmp10_ = signature;
			valadoc_api_signature_builder_append_keyword (_tmp10_, "override", TRUE);
		} else {
			gboolean _tmp11_;
			gboolean _tmp12_;
			_tmp11_ = valadoc_api_property_get_is_virtual (self);
			_tmp12_ = _tmp11_;
			if (_tmp12_) {
				ValadocApiSignatureBuilder* _tmp13_;
				_tmp13_ = signature;
				valadoc_api_signature_builder_append_keyword (_tmp13_, "virtual", TRUE);
			}
		}
	}
	_tmp14_ = signature;
	_tmp15_ = self->priv->_property_type;
	_tmp16_ = valadoc_api_item_get_signature ((ValadocApiItem*) _tmp15_);
	_tmp17_ = _tmp16_;
	valadoc_api_signature_builder_append_content (_tmp14_, _tmp17_, TRUE);
	_tmp18_ = signature;
	valadoc_api_signature_builder_append_symbol (_tmp18_, (ValadocApiNode*) self, TRUE);
	_tmp19_ = signature;
	valadoc_api_signature_builder_append (_tmp19_, "{", TRUE);
	_tmp21_ = self->priv->_getter;
	if (_tmp21_ != NULL) {
		ValadocApiPropertyAccessor* _tmp22_;
		_tmp22_ = self->priv->_getter;
		_tmp20_ = ((ValadocApiNode*) _tmp22_)->do_document;
	} else {
		_tmp20_ = FALSE;
	}
	if (_tmp20_) {
		ValadocApiSignatureBuilder* _tmp23_;
		ValadocApiPropertyAccessor* _tmp24_;
		ValadocContentInline* _tmp25_;
		ValadocContentInline* _tmp26_;
		_tmp23_ = signature;
		_tmp24_ = self->priv->_getter;
		_tmp25_ = valadoc_api_item_get_signature ((ValadocApiItem*) _tmp24_);
		_tmp26_ = _tmp25_;
		valadoc_api_signature_builder_append_content (_tmp23_, _tmp26_, TRUE);
	}
	_tmp28_ = self->priv->_setter;
	if (_tmp28_ != NULL) {
		ValadocApiPropertyAccessor* _tmp29_;
		_tmp29_ = self->priv->_setter;
		_tmp27_ = ((ValadocApiNode*) _tmp29_)->do_document;
	} else {
		_tmp27_ = FALSE;
	}
	if (_tmp27_) {
		ValadocApiSignatureBuilder* _tmp30_;
		ValadocApiPropertyAccessor* _tmp31_;
		ValadocContentInline* _tmp32_;
		ValadocContentInline* _tmp33_;
		_tmp30_ = signature;
		_tmp31_ = self->priv->_setter;
		_tmp32_ = valadoc_api_item_get_signature ((ValadocApiItem*) _tmp31_);
		_tmp33_ = _tmp32_;
		valadoc_api_signature_builder_append_content (_tmp30_, _tmp33_, TRUE);
	}
	_tmp34_ = signature;
	valadoc_api_signature_builder_append (_tmp34_, "}", TRUE);
	_tmp35_ = signature;
	_tmp36_ = valadoc_api_signature_builder_get (_tmp35_);
	result = (ValadocContentInline*) _tmp36_;
	_valadoc_api_signature_builder_unref0 (signature);
	return result;
}

static ValadocApiNodeType
valadoc_api_property_real_get_node_type (ValadocApiNode* base)
{
	ValadocApiNodeType result;
	ValadocApiProperty* self;
	self = (ValadocApiProperty*) base;
	result = VALADOC_API_NODE_TYPE_PROPERTY;
	return result;
}

/**
 * {@inheritDoc}
 */
static void
valadoc_api_property_real_accept (ValadocApiNode* base,
                                  ValadocApiVisitor* visitor)
{
	ValadocApiProperty * self;
	self = (ValadocApiProperty*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_api_visitor_visit_property (visitor, self);
}

static void
valadoc_api_property_class_init (ValadocApiPropertyClass * klass,
                                 gpointer klass_data)
{
	valadoc_api_property_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocApiProperty_private_offset);
	((ValadocApiItemClass *) klass)->parse_comments = (void (*) (ValadocApiItem*, ValadocSettings*, ValadocDocumentationParser*)) valadoc_api_property_real_parse_comments;
	((ValadocApiItemClass *) klass)->check_comments = (void (*) (ValadocApiItem*, ValadocSettings*, ValadocDocumentationParser*)) valadoc_api_property_real_check_comments;
	((ValadocApiItemClass *) klass)->build_signature = (ValadocContentInline* (*) (ValadocApiItem*)) valadoc_api_property_real_build_signature;
	((ValadocApiNodeClass *) klass)->accept = (void (*) (ValadocApiNode*, ValadocApiVisitor*)) valadoc_api_property_real_accept;
	VALADOC_API_NODE_CLASS (klass)->get_node_type = valadoc_api_property_real_get_node_type;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_api_property_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_valadoc_api_property_set_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_api_property_finalize;
	/**
	 * The property type.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_PROPERTY_PROPERTY_TYPE_PROPERTY, valadoc_api_property_properties[VALADOC_API_PROPERTY_PROPERTY_TYPE_PROPERTY] = g_param_spec_object ("property-type", "property-type", "property-type", VALADOC_API_TYPE_TYPEREFERENCE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	 * Specifies whether the property is virtual.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_PROPERTY_IS_VIRTUAL_PROPERTY, valadoc_api_property_properties[VALADOC_API_PROPERTY_IS_VIRTUAL_PROPERTY] = g_param_spec_boolean ("is-virtual", "is-virtual", "is-virtual", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Specifies whether the property is abstract.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_PROPERTY_IS_ABSTRACT_PROPERTY, valadoc_api_property_properties[VALADOC_API_PROPERTY_IS_ABSTRACT_PROPERTY] = g_param_spec_boolean ("is-abstract", "is-abstract", "is-abstract", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Specifies whether the property is override.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_PROPERTY_IS_OVERRIDE_PROPERTY, valadoc_api_property_properties[VALADOC_API_PROPERTY_IS_OVERRIDE_PROPERTY] = g_param_spec_boolean ("is-override", "is-override", "is-override", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Specifies whether the property is visible.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_PROPERTY_IS_DBUS_VISIBLE_PROPERTY, valadoc_api_property_properties[VALADOC_API_PROPERTY_IS_DBUS_VISIBLE_PROPERTY] = g_param_spec_boolean ("is-dbus-visible", "is-dbus-visible", "is-dbus-visible", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_PROPERTY_SETTER_PROPERTY, valadoc_api_property_properties[VALADOC_API_PROPERTY_SETTER_PROPERTY] = g_param_spec_object ("setter", "setter", "setter", VALADOC_API_TYPE_PROPERTY_ACCESSOR, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_PROPERTY_GETTER_PROPERTY, valadoc_api_property_properties[VALADOC_API_PROPERTY_GETTER_PROPERTY] = g_param_spec_object ("getter", "getter", "getter", VALADOC_API_TYPE_PROPERTY_ACCESSOR, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	 * Specifies the virtual or abstract property this property overrides.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_PROPERTY_BASE_PROPERTY_PROPERTY, valadoc_api_property_properties[VALADOC_API_PROPERTY_BASE_PROPERTY_PROPERTY] = g_param_spec_object ("base-property", "base-property", "base-property", VALADOC_API_TYPE_PROPERTY, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_PROPERTY_NODE_TYPE_PROPERTY, valadoc_api_property_properties[VALADOC_API_PROPERTY_NODE_TYPE_PROPERTY] = g_param_spec_enum ("node-type", "node-type", "node-type", VALADOC_API_TYPE_NODE_TYPE, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static void
valadoc_api_property_instance_init (ValadocApiProperty * self,
                                    gpointer klass)
{
	self->priv = valadoc_api_property_get_instance_private (self);
}

static void
valadoc_api_property_finalize (GObject * obj)
{
	ValadocApiProperty * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_API_TYPE_PROPERTY, ValadocApiProperty);
	_g_free0 (self->priv->dbus_name);
	_g_free0 (self->priv->cname);
	_g_object_unref0 (self->priv->_property_type);
	_g_object_unref0 (self->priv->_setter);
	_g_object_unref0 (self->priv->_getter);
	_g_object_unref0 (self->priv->_base_property);
	G_OBJECT_CLASS (valadoc_api_property_parent_class)->finalize (obj);
}

/**
 * Represents a property declaration.
 */
static GType
valadoc_api_property_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocApiPropertyClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_api_property_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocApiProperty), 0, (GInstanceInitFunc) valadoc_api_property_instance_init, NULL };
	GType valadoc_api_property_type_id;
	valadoc_api_property_type_id = g_type_register_static (VALADOC_API_TYPE_SYMBOL, "ValadocApiProperty", &g_define_type_info, 0);
	ValadocApiProperty_private_offset = g_type_add_instance_private (valadoc_api_property_type_id, sizeof (ValadocApiPropertyPrivate));
	return valadoc_api_property_type_id;
}

GType
valadoc_api_property_get_type (void)
{
	static volatile gsize valadoc_api_property_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_api_property_type_id__volatile)) {
		GType valadoc_api_property_type_id;
		valadoc_api_property_type_id = valadoc_api_property_get_type_once ();
		g_once_init_leave (&valadoc_api_property_type_id__volatile, valadoc_api_property_type_id);
	}
	return valadoc_api_property_type_id__volatile;
}

static void
_vala_valadoc_api_property_get_property (GObject * object,
                                         guint property_id,
                                         GValue * value,
                                         GParamSpec * pspec)
{
	ValadocApiProperty * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_API_TYPE_PROPERTY, ValadocApiProperty);
	switch (property_id) {
		case VALADOC_API_PROPERTY_PROPERTY_TYPE_PROPERTY:
		g_value_set_object (value, valadoc_api_property_get_property_type (self));
		break;
		case VALADOC_API_PROPERTY_IS_VIRTUAL_PROPERTY:
		g_value_set_boolean (value, valadoc_api_property_get_is_virtual (self));
		break;
		case VALADOC_API_PROPERTY_IS_ABSTRACT_PROPERTY:
		g_value_set_boolean (value, valadoc_api_property_get_is_abstract (self));
		break;
		case VALADOC_API_PROPERTY_IS_OVERRIDE_PROPERTY:
		g_value_set_boolean (value, valadoc_api_property_get_is_override (self));
		break;
		case VALADOC_API_PROPERTY_IS_DBUS_VISIBLE_PROPERTY:
		g_value_set_boolean (value, valadoc_api_property_get_is_dbus_visible (self));
		break;
		case VALADOC_API_PROPERTY_SETTER_PROPERTY:
		g_value_set_object (value, valadoc_api_property_get_setter (self));
		break;
		case VALADOC_API_PROPERTY_GETTER_PROPERTY:
		g_value_set_object (value, valadoc_api_property_get_getter (self));
		break;
		case VALADOC_API_PROPERTY_BASE_PROPERTY_PROPERTY:
		g_value_set_object (value, valadoc_api_property_get_base_property (self));
		break;
		case VALADOC_API_PROPERTY_NODE_TYPE_PROPERTY:
		g_value_set_enum (value, valadoc_api_node_get_node_type ((ValadocApiNode*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_valadoc_api_property_set_property (GObject * object,
                                         guint property_id,
                                         const GValue * value,
                                         GParamSpec * pspec)
{
	ValadocApiProperty * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_API_TYPE_PROPERTY, ValadocApiProperty);
	switch (property_id) {
		case VALADOC_API_PROPERTY_PROPERTY_TYPE_PROPERTY:
		valadoc_api_property_set_property_type (self, g_value_get_object (value));
		break;
		case VALADOC_API_PROPERTY_IS_DBUS_VISIBLE_PROPERTY:
		valadoc_api_property_set_is_dbus_visible (self, g_value_get_boolean (value));
		break;
		case VALADOC_API_PROPERTY_SETTER_PROPERTY:
		valadoc_api_property_set_setter (self, g_value_get_object (value));
		break;
		case VALADOC_API_PROPERTY_GETTER_PROPERTY:
		valadoc_api_property_set_getter (self, g_value_get_object (value));
		break;
		case VALADOC_API_PROPERTY_BASE_PROPERTY_PROPERTY:
		valadoc_api_property_set_base_property (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

