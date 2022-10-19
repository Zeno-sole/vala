/* delegate.c generated by valac, the Vala compiler
 * generated from delegate.vala, do not modify */

/* delegate.vala
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
#include <valagee.h>
#include <glib-object.h>

enum  {
	VALADOC_API_DELEGATE_0_PROPERTY,
	VALADOC_API_DELEGATE_IMPLICIT_ARRAY_LENGTH_CPARAMETER_NAME_PROPERTY,
	VALADOC_API_DELEGATE_RETURN_TYPE_PROPERTY,
	VALADOC_API_DELEGATE_NODE_TYPE_PROPERTY,
	VALADOC_API_DELEGATE_IS_STATIC_PROPERTY,
	VALADOC_API_DELEGATE_NUM_PROPERTIES
};
static GParamSpec* valadoc_api_delegate_properties[VALADOC_API_DELEGATE_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _valadoc_api_signature_builder_unref0(var) ((var == NULL) ? NULL : (var = (valadoc_api_signature_builder_unref (var), NULL)))

struct _ValadocApiDelegatePrivate {
	gchar* cname;
	gchar* _implicit_array_length_cparameter_name;
	ValadocApiTypeReference* _return_type;
	gboolean _is_static;
};

static gint ValadocApiDelegate_private_offset;
static gpointer valadoc_api_delegate_parent_class = NULL;
static ValadocApiCallableIface * valadoc_api_delegate_valadoc_api_callable_parent_iface = NULL;

static void valadoc_api_delegate_set_is_static (ValadocApiDelegate* self,
                                         gboolean value);
static void valadoc_api_delegate_real_accept (ValadocApiNode* base,
                                       ValadocApiVisitor* visitor);
static ValadocContentInline* valadoc_api_delegate_real_build_signature (ValadocApiItem* base);
 G_GNUC_INTERNAL const gchar* valadoc_api_callable_get_implicit_array_length_cparameter_name (ValadocApiCallable* self);
 G_GNUC_INTERNAL void valadoc_api_callable_set_implicit_array_length_cparameter_name (ValadocApiCallable* self,
                                                                     const gchar* value);
static void valadoc_api_delegate_finalize (GObject * obj);
static GType valadoc_api_delegate_get_type_once (void);
static void _vala_valadoc_api_delegate_get_property (GObject * object,
                                              guint property_id,
                                              GValue * value,
                                              GParamSpec * pspec);
static void _vala_valadoc_api_delegate_set_property (GObject * object,
                                              guint property_id,
                                              const GValue * value,
                                              GParamSpec * pspec);

static inline gpointer
valadoc_api_delegate_get_instance_private (ValadocApiDelegate* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocApiDelegate_private_offset);
}

static const gchar*
valadoc_api_delegate_real_get_implicit_array_length_cparameter_name (ValadocApiCallable* base)
{
	const gchar* result;
	ValadocApiDelegate* self;
	const gchar* _tmp0_;
	self = (ValadocApiDelegate*) base;
	_tmp0_ = self->priv->_implicit_array_length_cparameter_name;
	result = _tmp0_;
	return result;
}

static void
valadoc_api_delegate_real_set_implicit_array_length_cparameter_name (ValadocApiCallable* base,
                                                                     const gchar* value)
{
	ValadocApiDelegate* self;
	gchar* old_value;
	self = (ValadocApiDelegate*) base;
	old_value = valadoc_api_delegate_real_get_implicit_array_length_cparameter_name (base);
	if (g_strcmp0 (value, old_value) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_implicit_array_length_cparameter_name);
		self->priv->_implicit_array_length_cparameter_name = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_api_delegate_properties[VALADOC_API_DELEGATE_IMPLICIT_ARRAY_LENGTH_CPARAMETER_NAME_PROPERTY]);
	}
}

ValadocApiDelegate*
valadoc_api_delegate_construct (GType object_type,
                                ValadocApiNode* parent,
                                ValadocApiSourceFile* file,
                                const gchar* name,
                                ValaSymbolAccessibility accessibility,
                                ValadocApiSourceComment* comment,
                                ValaDelegate* data)
{
	ValadocApiDelegate * self = NULL;
	gboolean _tmp0_;
	gboolean _tmp1_;
	gchar* _tmp2_;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (file != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (data != NULL, NULL);
	self = (ValadocApiDelegate*) valadoc_api_typesymbol_construct (object_type, parent, file, name, accessibility, comment, FALSE, (ValaTypeSymbol*) data);
	_tmp0_ = vala_delegate_get_has_target (data);
	_tmp1_ = _tmp0_;
	valadoc_api_delegate_set_is_static (self, !_tmp1_);
	_tmp2_ = vala_get_ccode_name ((ValaCodeNode*) data);
	_g_free0 (self->priv->cname);
	self->priv->cname = _tmp2_;
	return self;
}

ValadocApiDelegate*
valadoc_api_delegate_new (ValadocApiNode* parent,
                          ValadocApiSourceFile* file,
                          const gchar* name,
                          ValaSymbolAccessibility accessibility,
                          ValadocApiSourceComment* comment,
                          ValaDelegate* data)
{
	return valadoc_api_delegate_construct (VALADOC_API_TYPE_DELEGATE, parent, file, name, accessibility, comment, data);
}

/**
 * Returns the name of this delegate as it is used in C.
 */
gchar*
valadoc_api_delegate_get_cname (ValadocApiDelegate* self)
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

static ValadocApiTypeReference*
valadoc_api_delegate_real_get_return_type (ValadocApiCallable* base)
{
	ValadocApiTypeReference* result;
	ValadocApiDelegate* self;
	ValadocApiTypeReference* _tmp0_;
	self = (ValadocApiDelegate*) base;
	_tmp0_ = self->priv->_return_type;
	result = _tmp0_;
	return result;
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static void
valadoc_api_delegate_real_set_return_type (ValadocApiCallable* base,
                                           ValadocApiTypeReference* value)
{
	ValadocApiDelegate* self;
	ValadocApiTypeReference* old_value;
	self = (ValadocApiDelegate*) base;
	old_value = valadoc_api_delegate_real_get_return_type (base);
	if (old_value != value) {
		ValadocApiTypeReference* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_return_type);
		self->priv->_return_type = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_api_delegate_properties[VALADOC_API_DELEGATE_RETURN_TYPE_PROPERTY]);
	}
}

static ValadocApiNodeType
valadoc_api_delegate_real_get_node_type (ValadocApiNode* base)
{
	ValadocApiNodeType result;
	ValadocApiDelegate* self;
	self = (ValadocApiDelegate*) base;
	result = VALADOC_API_NODE_TYPE_DELEGATE;
	return result;
}

/**
 * {@inheritDoc}
 */
static void
valadoc_api_delegate_real_accept (ValadocApiNode* base,
                                  ValadocApiVisitor* visitor)
{
	ValadocApiDelegate * self;
	self = (ValadocApiDelegate*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_api_visitor_visit_delegate (visitor, self);
}

gboolean
valadoc_api_delegate_get_is_static (ValadocApiDelegate* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_static;
	return result;
}

static void
valadoc_api_delegate_set_is_static (ValadocApiDelegate* self,
                                    gboolean value)
{
	gboolean old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_api_delegate_get_is_static (self);
	if (old_value != value) {
		self->priv->_is_static = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_api_delegate_properties[VALADOC_API_DELEGATE_IS_STATIC_PROPERTY]);
	}
}

/**
 * {@inheritDoc}
 */
static ValadocContentInline*
valadoc_api_delegate_real_build_signature (ValadocApiItem* base)
{
	ValadocApiDelegate * self;
	ValadocApiSignatureBuilder* signature = NULL;
	ValadocApiSignatureBuilder* _tmp0_;
	ValadocApiSignatureBuilder* _tmp1_;
	ValaSymbolAccessibility _tmp2_;
	ValaSymbolAccessibility _tmp3_;
	const gchar* _tmp4_;
	ValadocApiSignatureBuilder* _tmp5_;
	ValadocApiSignatureBuilder* _tmp6_;
	ValadocApiTypeReference* _tmp7_;
	ValadocApiTypeReference* _tmp8_;
	ValadocContentInline* _tmp9_;
	ValadocContentInline* _tmp10_;
	ValadocApiSignatureBuilder* _tmp11_;
	ValaList* type_parameters = NULL;
	ValaList* _tmp12_;
	ValaList* _tmp13_;
	gint _tmp14_;
	gint _tmp15_;
	ValadocApiSignatureBuilder* _tmp31_;
	gboolean first = FALSE;
	ValadocApiSignatureBuilder* _tmp45_;
	ValaList* exceptions = NULL;
	ValadocApiNodeType* _tmp46_;
	ValadocApiNodeType* _tmp47_;
	gint _tmp47__length1;
	ValaList* _tmp48_;
	ValaList* _tmp49_;
	ValaList* _tmp50_;
	gint _tmp51_;
	gint _tmp52_;
	ValadocApiSignatureBuilder* _tmp65_;
	ValadocContentRun* _tmp66_;
	ValadocContentInline* result = NULL;
	self = (ValadocApiDelegate*) base;
	_tmp0_ = valadoc_api_signature_builder_new ();
	signature = _tmp0_;
	_tmp1_ = signature;
	_tmp2_ = valadoc_api_symbol_get_accessibility ((ValadocApiSymbol*) self);
	_tmp3_ = _tmp2_;
	_tmp4_ = vala_symbol_accessibility_to_string (_tmp3_);
	valadoc_api_signature_builder_append_keyword (_tmp1_, _tmp4_, TRUE);
	_tmp5_ = signature;
	valadoc_api_signature_builder_append_keyword (_tmp5_, "delegate", TRUE);
	_tmp6_ = signature;
	_tmp7_ = valadoc_api_callable_get_return_type ((ValadocApiCallable*) self);
	_tmp8_ = _tmp7_;
	_tmp9_ = valadoc_api_item_get_signature ((ValadocApiItem*) _tmp8_);
	_tmp10_ = _tmp9_;
	valadoc_api_signature_builder_append_content (_tmp6_, _tmp10_, TRUE);
	_tmp11_ = signature;
	valadoc_api_signature_builder_append_symbol (_tmp11_, (ValadocApiNode*) self, TRUE);
	_tmp12_ = valadoc_api_node_get_children_by_type ((ValadocApiNode*) self, VALADOC_API_NODE_TYPE_TYPE_PARAMETER, FALSE);
	type_parameters = _tmp12_;
	_tmp13_ = type_parameters;
	_tmp14_ = vala_collection_get_size ((ValaCollection*) _tmp13_);
	_tmp15_ = _tmp14_;
	if (_tmp15_ > 0) {
		ValadocApiSignatureBuilder* _tmp16_;
		gboolean first = FALSE;
		ValadocApiSignatureBuilder* _tmp30_;
		_tmp16_ = signature;
		valadoc_api_signature_builder_append (_tmp16_, "<", FALSE);
		first = TRUE;
		{
			ValaList* _param_list = NULL;
			ValaList* _tmp17_;
			gint _param_size = 0;
			ValaList* _tmp18_;
			gint _tmp19_;
			gint _tmp20_;
			gint _param_index = 0;
			_tmp17_ = type_parameters;
			_param_list = _tmp17_;
			_tmp18_ = _param_list;
			_tmp19_ = vala_collection_get_size ((ValaCollection*) _tmp18_);
			_tmp20_ = _tmp19_;
			_param_size = _tmp20_;
			_param_index = -1;
			while (TRUE) {
				gint _tmp21_;
				gint _tmp22_;
				ValadocApiItem* param = NULL;
				ValaList* _tmp23_;
				gpointer _tmp24_;
				ValadocApiSignatureBuilder* _tmp26_;
				ValadocApiItem* _tmp27_;
				ValadocContentInline* _tmp28_;
				ValadocContentInline* _tmp29_;
				_param_index = _param_index + 1;
				_tmp21_ = _param_index;
				_tmp22_ = _param_size;
				if (!(_tmp21_ < _tmp22_)) {
					break;
				}
				_tmp23_ = _param_list;
				_tmp24_ = vala_list_get (_tmp23_, _param_index);
				param = (ValadocApiItem*) ((ValadocApiNode*) _tmp24_);
				if (!first) {
					ValadocApiSignatureBuilder* _tmp25_;
					_tmp25_ = signature;
					valadoc_api_signature_builder_append (_tmp25_, ",", FALSE);
				}
				_tmp26_ = signature;
				_tmp27_ = param;
				_tmp28_ = valadoc_api_item_get_signature (_tmp27_);
				_tmp29_ = _tmp28_;
				valadoc_api_signature_builder_append_content (_tmp26_, _tmp29_, FALSE);
				first = FALSE;
				_g_object_unref0 (param);
			}
		}
		_tmp30_ = signature;
		valadoc_api_signature_builder_append (_tmp30_, ">", FALSE);
	}
	_tmp31_ = signature;
	valadoc_api_signature_builder_append (_tmp31_, "(", TRUE);
	first = TRUE;
	{
		ValaList* _param_list = NULL;
		ValaList* _tmp32_;
		gint _param_size = 0;
		ValaList* _tmp33_;
		gint _tmp34_;
		gint _tmp35_;
		gint _param_index = 0;
		_tmp32_ = valadoc_api_node_get_children_by_type ((ValadocApiNode*) self, VALADOC_API_NODE_TYPE_FORMAL_PARAMETER, FALSE);
		_param_list = _tmp32_;
		_tmp33_ = _param_list;
		_tmp34_ = vala_collection_get_size ((ValaCollection*) _tmp33_);
		_tmp35_ = _tmp34_;
		_param_size = _tmp35_;
		_param_index = -1;
		while (TRUE) {
			gint _tmp36_;
			gint _tmp37_;
			ValadocApiNode* param = NULL;
			ValaList* _tmp38_;
			gpointer _tmp39_;
			ValadocApiSignatureBuilder* _tmp41_;
			ValadocApiNode* _tmp42_;
			ValadocContentInline* _tmp43_;
			ValadocContentInline* _tmp44_;
			_param_index = _param_index + 1;
			_tmp36_ = _param_index;
			_tmp37_ = _param_size;
			if (!(_tmp36_ < _tmp37_)) {
				break;
			}
			_tmp38_ = _param_list;
			_tmp39_ = vala_list_get (_tmp38_, _param_index);
			param = (ValadocApiNode*) _tmp39_;
			if (!first) {
				ValadocApiSignatureBuilder* _tmp40_;
				_tmp40_ = signature;
				valadoc_api_signature_builder_append (_tmp40_, ",", FALSE);
			}
			_tmp41_ = signature;
			_tmp42_ = param;
			_tmp43_ = valadoc_api_item_get_signature ((ValadocApiItem*) _tmp42_);
			_tmp44_ = _tmp43_;
			valadoc_api_signature_builder_append_content (_tmp41_, _tmp44_, !first);
			first = FALSE;
			_g_object_unref0 (param);
		}
		_vala_iterable_unref0 (_param_list);
	}
	_tmp45_ = signature;
	valadoc_api_signature_builder_append (_tmp45_, ")", FALSE);
	_tmp46_ = g_new0 (ValadocApiNodeType, 2);
	_tmp46_[0] = VALADOC_API_NODE_TYPE_ERROR_DOMAIN;
	_tmp46_[1] = VALADOC_API_NODE_TYPE_CLASS;
	_tmp47_ = _tmp46_;
	_tmp47__length1 = 2;
	_tmp48_ = valadoc_api_node_get_children_by_types ((ValadocApiNode*) self, _tmp47_, (gint) 2, TRUE);
	_tmp49_ = _tmp48_;
	_tmp47_ = (g_free (_tmp47_), NULL);
	exceptions = _tmp49_;
	_tmp50_ = exceptions;
	_tmp51_ = vala_collection_get_size ((ValaCollection*) _tmp50_);
	_tmp52_ = _tmp51_;
	if (_tmp52_ > 0) {
		ValadocApiSignatureBuilder* _tmp53_;
		_tmp53_ = signature;
		valadoc_api_signature_builder_append_keyword (_tmp53_, "throws", TRUE);
		first = TRUE;
		{
			ValaList* _param_list = NULL;
			ValaList* _tmp54_;
			gint _param_size = 0;
			ValaList* _tmp55_;
			gint _tmp56_;
			gint _tmp57_;
			gint _param_index = 0;
			_tmp54_ = exceptions;
			_param_list = _tmp54_;
			_tmp55_ = _param_list;
			_tmp56_ = vala_collection_get_size ((ValaCollection*) _tmp55_);
			_tmp57_ = _tmp56_;
			_param_size = _tmp57_;
			_param_index = -1;
			while (TRUE) {
				gint _tmp58_;
				gint _tmp59_;
				ValadocApiNode* param = NULL;
				ValaList* _tmp60_;
				gpointer _tmp61_;
				ValadocApiSignatureBuilder* _tmp63_;
				ValadocApiNode* _tmp64_;
				_param_index = _param_index + 1;
				_tmp58_ = _param_index;
				_tmp59_ = _param_size;
				if (!(_tmp58_ < _tmp59_)) {
					break;
				}
				_tmp60_ = _param_list;
				_tmp61_ = vala_list_get (_tmp60_, _param_index);
				param = (ValadocApiNode*) _tmp61_;
				if (!first) {
					ValadocApiSignatureBuilder* _tmp62_;
					_tmp62_ = signature;
					valadoc_api_signature_builder_append (_tmp62_, ",", FALSE);
				}
				_tmp63_ = signature;
				_tmp64_ = param;
				valadoc_api_signature_builder_append_type (_tmp63_, _tmp64_, TRUE);
				first = FALSE;
				_g_object_unref0 (param);
			}
		}
	}
	_tmp65_ = signature;
	_tmp66_ = valadoc_api_signature_builder_get (_tmp65_);
	result = (ValadocContentInline*) _tmp66_;
	_vala_iterable_unref0 (exceptions);
	_vala_iterable_unref0 (type_parameters);
	_valadoc_api_signature_builder_unref0 (signature);
	return result;
}

static void
valadoc_api_delegate_class_init (ValadocApiDelegateClass * klass,
                                 gpointer klass_data)
{
	valadoc_api_delegate_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocApiDelegate_private_offset);
	((ValadocApiNodeClass *) klass)->accept = (void (*) (ValadocApiNode*, ValadocApiVisitor*)) valadoc_api_delegate_real_accept;
	((ValadocApiItemClass *) klass)->build_signature = (ValadocContentInline* (*) (ValadocApiItem*)) valadoc_api_delegate_real_build_signature;
	VALADOC_API_NODE_CLASS (klass)->get_node_type = valadoc_api_delegate_real_get_node_type;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_api_delegate_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_valadoc_api_delegate_set_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_api_delegate_finalize;
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_DELEGATE_IMPLICIT_ARRAY_LENGTH_CPARAMETER_NAME_PROPERTY, valadoc_api_delegate_properties[VALADOC_API_DELEGATE_IMPLICIT_ARRAY_LENGTH_CPARAMETER_NAME_PROPERTY] = g_param_spec_string ("implicit-array-length-cparameter-name", "implicit-array-length-cparameter-name", "implicit-array-length-cparameter-name", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_DELEGATE_RETURN_TYPE_PROPERTY, valadoc_api_delegate_properties[VALADOC_API_DELEGATE_RETURN_TYPE_PROPERTY] = g_param_spec_object ("return-type", "return-type", "return-type", VALADOC_API_TYPE_TYPEREFERENCE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_DELEGATE_NODE_TYPE_PROPERTY, valadoc_api_delegate_properties[VALADOC_API_DELEGATE_NODE_TYPE_PROPERTY] = g_param_spec_enum ("node-type", "node-type", "node-type", VALADOC_API_TYPE_NODE_TYPE, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Specifies whether this delegate is static
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_DELEGATE_IS_STATIC_PROPERTY, valadoc_api_delegate_properties[VALADOC_API_DELEGATE_IS_STATIC_PROPERTY] = g_param_spec_boolean ("is-static", "is-static", "is-static", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static void
valadoc_api_delegate_valadoc_api_callable_interface_init (ValadocApiCallableIface * iface,
                                                          gpointer iface_data)
{
	valadoc_api_delegate_valadoc_api_callable_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_implicit_array_length_cparameter_name = valadoc_api_delegate_real_get_implicit_array_length_cparameter_name;
	iface->set_implicit_array_length_cparameter_name = valadoc_api_delegate_real_set_implicit_array_length_cparameter_name;
	iface->get_return_type = valadoc_api_delegate_real_get_return_type;
	iface->set_return_type = valadoc_api_delegate_real_set_return_type;
}

static void
valadoc_api_delegate_instance_init (ValadocApiDelegate * self,
                                    gpointer klass)
{
	self->priv = valadoc_api_delegate_get_instance_private (self);
}

static void
valadoc_api_delegate_finalize (GObject * obj)
{
	ValadocApiDelegate * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_API_TYPE_DELEGATE, ValadocApiDelegate);
	_g_free0 (self->priv->cname);
	_g_free0 (self->priv->_implicit_array_length_cparameter_name);
	_g_object_unref0 (self->priv->_return_type);
	G_OBJECT_CLASS (valadoc_api_delegate_parent_class)->finalize (obj);
}

/**
 * Represents a Delegate.
 */
static GType
valadoc_api_delegate_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocApiDelegateClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_api_delegate_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocApiDelegate), 0, (GInstanceInitFunc) valadoc_api_delegate_instance_init, NULL };
	static const GInterfaceInfo valadoc_api_callable_info = { (GInterfaceInitFunc) valadoc_api_delegate_valadoc_api_callable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType valadoc_api_delegate_type_id;
	valadoc_api_delegate_type_id = g_type_register_static (VALADOC_API_TYPE_TYPESYMBOL, "ValadocApiDelegate", &g_define_type_info, 0);
	g_type_add_interface_static (valadoc_api_delegate_type_id, VALADOC_API_TYPE_CALLABLE, &valadoc_api_callable_info);
	ValadocApiDelegate_private_offset = g_type_add_instance_private (valadoc_api_delegate_type_id, sizeof (ValadocApiDelegatePrivate));
	return valadoc_api_delegate_type_id;
}

GType
valadoc_api_delegate_get_type (void)
{
	static volatile gsize valadoc_api_delegate_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_api_delegate_type_id__volatile)) {
		GType valadoc_api_delegate_type_id;
		valadoc_api_delegate_type_id = valadoc_api_delegate_get_type_once ();
		g_once_init_leave (&valadoc_api_delegate_type_id__volatile, valadoc_api_delegate_type_id);
	}
	return valadoc_api_delegate_type_id__volatile;
}

static void
_vala_valadoc_api_delegate_get_property (GObject * object,
                                         guint property_id,
                                         GValue * value,
                                         GParamSpec * pspec)
{
	ValadocApiDelegate * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_API_TYPE_DELEGATE, ValadocApiDelegate);
	switch (property_id) {
		case VALADOC_API_DELEGATE_IMPLICIT_ARRAY_LENGTH_CPARAMETER_NAME_PROPERTY:
		g_value_set_string (value, valadoc_api_callable_get_implicit_array_length_cparameter_name ((ValadocApiCallable*) self));
		break;
		case VALADOC_API_DELEGATE_RETURN_TYPE_PROPERTY:
		g_value_set_object (value, valadoc_api_callable_get_return_type ((ValadocApiCallable*) self));
		break;
		case VALADOC_API_DELEGATE_NODE_TYPE_PROPERTY:
		g_value_set_enum (value, valadoc_api_node_get_node_type ((ValadocApiNode*) self));
		break;
		case VALADOC_API_DELEGATE_IS_STATIC_PROPERTY:
		g_value_set_boolean (value, valadoc_api_delegate_get_is_static (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_valadoc_api_delegate_set_property (GObject * object,
                                         guint property_id,
                                         const GValue * value,
                                         GParamSpec * pspec)
{
	ValadocApiDelegate * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_API_TYPE_DELEGATE, ValadocApiDelegate);
	switch (property_id) {
		case VALADOC_API_DELEGATE_IMPLICIT_ARRAY_LENGTH_CPARAMETER_NAME_PROPERTY:
		valadoc_api_callable_set_implicit_array_length_cparameter_name ((ValadocApiCallable*) self, g_value_get_string (value));
		break;
		case VALADOC_API_DELEGATE_RETURN_TYPE_PROPERTY:
		valadoc_api_callable_set_return_type ((ValadocApiCallable*) self, g_value_get_object (value));
		break;
		case VALADOC_API_DELEGATE_IS_STATIC_PROPERTY:
		valadoc_api_delegate_set_is_static (self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

