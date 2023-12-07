/* tagletparam.c generated by valac, the Vala compiler
 * generated from tagletparam.vala, do not modify */

/* taglet.vala
 *
 * Copyright (C) 2008-2009 Didier Villevalois
 * Copyright (C) 2008-2012 Florian Brosch
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
 * 	Didier 'Ptitjes Villevalois <ptitjes@free.fr>
 */

#include "valadoc.h"
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <glib-object.h>
#include <valagee.h>

enum  {
	VALADOC_TAGLETS_PARAM_0_PROPERTY,
	VALADOC_TAGLETS_PARAM_PARAMETER_NAME_PROPERTY,
	VALADOC_TAGLETS_PARAM_PARAMETER_PROPERTY,
	VALADOC_TAGLETS_PARAM_POSITION_PROPERTY,
	VALADOC_TAGLETS_PARAM_IS_C_SELF_PARAM_PROPERTY,
	VALADOC_TAGLETS_PARAM_IS_THIS_PROPERTY,
	VALADOC_TAGLETS_PARAM_NUM_PROPERTIES
};
static GParamSpec* valadoc_taglets_param_properties[VALADOC_TAGLETS_PARAM_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

struct _ValadocTagletsParamPrivate {
	gchar* _parameter_name;
	ValadocApiSymbol* _parameter;
	gint _position;
	gboolean _is_c_self_param;
	gboolean _is_this;
};

static gint ValadocTagletsParam_private_offset;
static gpointer valadoc_taglets_param_parent_class = NULL;
static ValadocContentTagletIface * valadoc_taglets_param_valadoc_content_taglet_parent_iface = NULL;
static ValadocContentBlockIface * valadoc_taglets_param_valadoc_content_block_parent_iface = NULL;

 G_GNUC_INTERNAL void valadoc_taglets_param_set_parameter_name (ValadocTagletsParam* self,
                                               const gchar* value);
static void valadoc_taglets_param_set_parameter (ValadocTagletsParam* self,
                                          ValadocApiSymbol* value);
static void valadoc_taglets_param_set_position (ValadocTagletsParam* self,
                                         gint value);
 G_GNUC_INTERNAL void valadoc_taglets_param_set_is_c_self_param (ValadocTagletsParam* self,
                                                gboolean value);
static void valadoc_taglets_param_set_is_this (ValadocTagletsParam* self,
                                        gboolean value);
static ValadocRule* valadoc_taglets_param_real_get_parser_rule (ValadocContentTaglet* base,
                                                         ValadocRule* run_rule);
static void __lambda11_ (ValadocTagletsParam* self,
                  ValadocToken* token,
                  GError** error);
static void ___lambda11__valadoc_token_type_action (ValadocToken* token,
                                             gpointer self,
                                             GError** error);
static void valadoc_taglets_param_real_check (ValadocContentContentElement* base,
                                       ValadocApiTree* api_root,
                                       ValadocApiNode* container,
                                       const gchar* file_path,
                                       ValadocErrorReporter* reporter,
                                       ValadocSettings* settings);
static gboolean valadoc_taglets_param_has_instance (ValadocTagletsParam* self,
                                             ValadocApiItem* element);
 G_GNUC_INTERNAL const gchar* valadoc_api_callable_get_implicit_array_length_cparameter_name (ValadocApiCallable* self);
 G_GNUC_INTERNAL const gchar* valadoc_api_parameter_get_implicit_array_length_cparameter_name (ValadocApiParameter* self);
 G_GNUC_INTERNAL const gchar* valadoc_api_parameter_get_implicit_closure_cparameter_name (ValadocApiParameter* self);
 G_GNUC_INTERNAL const gchar* valadoc_api_parameter_get_implicit_destroy_cparameter_name (ValadocApiParameter* self);
static void valadoc_taglets_param_real_accept (ValadocContentContentElement* base,
                                        ValadocContentContentVisitor* visitor);
static ValaList* valadoc_taglets_param_real_get_inheritable_documentation (ValadocContentTaglet* base);
static gboolean valadoc_taglets_param_real_inheritable (ValadocContentTaglet* base,
                                                 ValadocContentTaglet* taglet);
static ValadocContentContentElement* valadoc_taglets_param_real_copy (ValadocContentContentElement* base,
                                                               ValadocContentContentElement* new_parent);
 G_GNUC_INTERNAL void valadoc_content_content_element_set_parent (ValadocContentContentElement* self,
                                                 ValadocContentContentElement* value);
 G_GNUC_INTERNAL ValadocContentBlockContent* valadoc_content_block_content_construct (GType object_type);
static void valadoc_taglets_param_finalize (GObject * obj);
static GType valadoc_taglets_param_get_type_once (void);
static void _vala_valadoc_taglets_param_get_property (GObject * object,
                                               guint property_id,
                                               GValue * value,
                                               GParamSpec * pspec);
static void _vala_valadoc_taglets_param_set_property (GObject * object,
                                               guint property_id,
                                               const GValue * value,
                                               GParamSpec * pspec);
static void _vala_array_destroy (gpointer array,
                          gssize array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gssize array_length,
                       GDestroyNotify destroy_func);

static inline gpointer
valadoc_taglets_param_get_instance_private (ValadocTagletsParam* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocTagletsParam_private_offset);
}

const gchar*
valadoc_taglets_param_get_parameter_name (ValadocTagletsParam* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_parameter_name;
	result = _tmp0_;
	return result;
}

 G_GNUC_INTERNAL void
valadoc_taglets_param_set_parameter_name (ValadocTagletsParam* self,
                                          const gchar* value)
{
	gchar* old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_taglets_param_get_parameter_name (self);
	if (g_strcmp0 (value, old_value) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_parameter_name);
		self->priv->_parameter_name = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_taglets_param_properties[VALADOC_TAGLETS_PARAM_PARAMETER_NAME_PROPERTY]);
	}
}

ValadocApiSymbol*
valadoc_taglets_param_get_parameter (ValadocTagletsParam* self)
{
	ValadocApiSymbol* result;
	ValadocApiSymbol* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_parameter;
	result = _tmp0_;
	return result;
}

static void
valadoc_taglets_param_set_parameter (ValadocTagletsParam* self,
                                     ValadocApiSymbol* value)
{
	ValadocApiSymbol* old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_taglets_param_get_parameter (self);
	if (old_value != value) {
		self->priv->_parameter = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_taglets_param_properties[VALADOC_TAGLETS_PARAM_PARAMETER_PROPERTY]);
	}
}

gint
valadoc_taglets_param_get_position (ValadocTagletsParam* self)
{
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_position;
	return result;
}

static void
valadoc_taglets_param_set_position (ValadocTagletsParam* self,
                                    gint value)
{
	gint old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_taglets_param_get_position (self);
	if (old_value != value) {
		self->priv->_position = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_taglets_param_properties[VALADOC_TAGLETS_PARAM_POSITION_PROPERTY]);
	}
}

gboolean
valadoc_taglets_param_get_is_c_self_param (ValadocTagletsParam* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_c_self_param;
	return result;
}

 G_GNUC_INTERNAL void
valadoc_taglets_param_set_is_c_self_param (ValadocTagletsParam* self,
                                           gboolean value)
{
	gboolean old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_taglets_param_get_is_c_self_param (self);
	if (old_value != value) {
		self->priv->_is_c_self_param = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_taglets_param_properties[VALADOC_TAGLETS_PARAM_IS_C_SELF_PARAM_PROPERTY]);
	}
}

gboolean
valadoc_taglets_param_get_is_this (ValadocTagletsParam* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_this;
	return result;
}

static void
valadoc_taglets_param_set_is_this (ValadocTagletsParam* self,
                                   gboolean value)
{
	gboolean old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_taglets_param_get_is_this (self);
	if (old_value != value) {
		self->priv->_is_this = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_taglets_param_properties[VALADOC_TAGLETS_PARAM_IS_THIS_PROPERTY]);
	}
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static void
__lambda11_ (ValadocTagletsParam* self,
             ValadocToken* token,
             GError** error)
{
	const gchar* _tmp0_;
	g_return_if_fail (token != NULL);
	_tmp0_ = valadoc_token_to_string (token);
	valadoc_taglets_param_set_parameter_name (self, _tmp0_);
}

static void
___lambda11__valadoc_token_type_action (ValadocToken* token,
                                        gpointer self,
                                        GError** error)
{
	__lambda11_ ((ValadocTagletsParam*) self, token, error);
}

static ValadocRule*
valadoc_taglets_param_real_get_parser_rule (ValadocContentTaglet* base,
                                            ValadocRule* run_rule)
{
	ValadocTagletsParam * self;
	ValadocTokenType* _tmp0_;
	GObject* _tmp1_;
	GObject** _tmp2_;
	GObject** _tmp3_;
	gint _tmp3__length1;
	ValadocRule* _tmp4_;
	GObject** _tmp5_;
	GObject** _tmp6_;
	gint _tmp6__length1;
	ValadocRule* _tmp7_;
	ValadocTokenType* _tmp8_;
	ValadocTokenType* _tmp9_;
	ValadocTokenType* _tmp10_;
	GObject* _tmp11_;
	GObject** _tmp12_;
	GObject** _tmp13_;
	gint _tmp13__length1;
	ValadocRule* _tmp14_;
	ValadocRule* _tmp15_;
	ValadocRule* result;
	self = (ValadocTagletsParam*) base;
	g_return_val_if_fail (run_rule != NULL, NULL);
	_tmp0_ = valadoc_token_type_SPACE;
	_tmp1_ = _g_object_ref0 ((GObject*) _tmp0_);
	_tmp2_ = g_new0 (GObject*, 1 + 1);
	_tmp2_[0] = _tmp1_;
	_tmp3_ = _tmp2_;
	_tmp3__length1 = 1;
	_tmp4_ = valadoc_rule_many (_tmp3_, (gint) 1);
	_tmp5_ = g_new0 (GObject*, 1 + 1);
	_tmp5_[0] = (GObject*) _tmp4_;
	_tmp6_ = _tmp5_;
	_tmp6__length1 = 1;
	_tmp7_ = valadoc_rule_option (_tmp6_, (gint) 1);
	_tmp8_ = valadoc_token_type_any_word ();
	_tmp9_ = _tmp8_;
	_tmp10_ = valadoc_token_type_action (_tmp9_, ___lambda11__valadoc_token_type_action, self);
	_tmp11_ = _g_object_ref0 ((GObject*) run_rule);
	_tmp12_ = g_new0 (GObject*, 3 + 1);
	_tmp12_[0] = (GObject*) _tmp7_;
	_tmp12_[1] = (GObject*) _tmp10_;
	_tmp12_[2] = _tmp11_;
	_tmp13_ = _tmp12_;
	_tmp13__length1 = 3;
	_tmp14_ = valadoc_rule_seq (_tmp13_, (gint) 3);
	_tmp15_ = _tmp14_;
	_tmp13_ = (_vala_array_free (_tmp13_, _tmp13__length1, (GDestroyNotify) g_object_unref), NULL);
	_g_object_unref0 (_tmp9_);
	_tmp6_ = (_vala_array_free (_tmp6_, _tmp6__length1, (GDestroyNotify) g_object_unref), NULL);
	_tmp3_ = (_vala_array_free (_tmp3_, _tmp3__length1, (GDestroyNotify) g_object_unref), NULL);
	result = _tmp15_;
	return result;
}

static void
valadoc_taglets_param_real_check (ValadocContentContentElement* base,
                                  ValadocApiTree* api_root,
                                  ValadocApiNode* container,
                                  const gchar* file_path,
                                  ValadocErrorReporter* reporter,
                                  ValadocSettings* settings)
{
	ValadocTagletsParam * self;
	const gchar* implicit_return_array_length = NULL;
	gboolean has_instance = FALSE;
	gboolean is_implicit = FALSE;
	gboolean _tmp6_ = FALSE;
	gboolean _tmp7_;
	ValadocApiSymbol* _tmp75_;
	self = (ValadocTagletsParam*) base;
	g_return_if_fail (api_root != NULL);
	g_return_if_fail (container != NULL);
	g_return_if_fail (file_path != NULL);
	g_return_if_fail (reporter != NULL);
	g_return_if_fail (settings != NULL);
	implicit_return_array_length = NULL;
	has_instance = valadoc_taglets_param_has_instance (self, (ValadocApiItem*) container);
	is_implicit = FALSE;
	valadoc_taglets_param_set_parameter (self, NULL);
	if (VALADOC_API_IS_CALLABLE (container)) {
		const gchar* _tmp0_;
		const gchar* _tmp1_;
		_tmp0_ = valadoc_api_callable_get_implicit_array_length_cparameter_name (G_TYPE_CHECK_INSTANCE_CAST (container, VALADOC_API_TYPE_CALLABLE, ValadocApiCallable));
		_tmp1_ = _tmp0_;
		implicit_return_array_length = _tmp1_;
	} else {
		gchar* _tmp2_;
		gchar* _tmp3_;
		gchar* _tmp4_;
		gchar* _tmp5_;
		_tmp2_ = valadoc_api_node_get_full_name (container);
		_tmp3_ = _tmp2_;
		_tmp4_ = g_strdup_printf ("%s: %s: @param", file_path, _tmp3_);
		_tmp5_ = _tmp4_;
		valadoc_error_reporter_simple_warning (reporter, _tmp5_, "@param used outside method/delegate/signal context");
		_g_free0 (_tmp5_);
		_g_free0 (_tmp3_);
		VALADOC_CONTENT_CONTENT_ELEMENT_CLASS (valadoc_taglets_param_parent_class)->check ((ValadocContentContentElement*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_CONTENT_TYPE_BLOCK_CONTENT, ValadocContentBlockContent), api_root, container, file_path, reporter, settings);
		return;
	}
	_tmp7_ = self->priv->_is_c_self_param;
	if (_tmp7_ == TRUE) {
		_tmp6_ = has_instance;
	} else {
		_tmp6_ = FALSE;
	}
	if (_tmp6_) {
		valadoc_taglets_param_set_parameter_name (self, "this");
		valadoc_taglets_param_set_is_this (self, TRUE);
		valadoc_taglets_param_set_position (self, 0);
	} else {
		const gchar* _tmp8_;
		_tmp8_ = self->priv->_parameter_name;
		if (g_strcmp0 (_tmp8_, "...") == 0) {
			ValaList* params = NULL;
			ValaList* _tmp9_;
			_tmp9_ = valadoc_api_node_get_children_by_type (container, VALADOC_API_NODE_TYPE_FORMAL_PARAMETER, FALSE);
			params = _tmp9_;
			{
				ValaList* _param_list = NULL;
				ValaList* _tmp10_;
				gint _param_size = 0;
				ValaList* _tmp11_;
				gint _tmp12_;
				gint _tmp13_;
				gint _param_index = 0;
				_tmp10_ = params;
				_param_list = _tmp10_;
				_tmp11_ = _param_list;
				_tmp12_ = vala_collection_get_size ((ValaCollection*) _tmp11_);
				_tmp13_ = _tmp12_;
				_param_size = _tmp13_;
				_param_index = -1;
				while (TRUE) {
					gint _tmp14_;
					gint _tmp15_;
					ValadocApiNode* param = NULL;
					ValaList* _tmp16_;
					gpointer _tmp17_;
					ValadocApiNode* _tmp18_;
					gboolean _tmp19_;
					gboolean _tmp20_;
					_param_index = _param_index + 1;
					_tmp14_ = _param_index;
					_tmp15_ = _param_size;
					if (!(_tmp14_ < _tmp15_)) {
						break;
					}
					_tmp16_ = _param_list;
					_tmp17_ = vala_list_get (_tmp16_, _param_index);
					param = (ValadocApiNode*) _tmp17_;
					_tmp18_ = param;
					_tmp19_ = valadoc_api_parameter_get_ellipsis (G_TYPE_CHECK_INSTANCE_CAST (_tmp18_, VALADOC_API_TYPE_PARAMETER, ValadocApiParameter));
					_tmp20_ = _tmp19_;
					if (_tmp20_) {
						ValadocApiNode* _tmp21_;
						gint _tmp22_ = 0;
						_tmp21_ = param;
						valadoc_taglets_param_set_parameter (self, G_TYPE_CHECK_INSTANCE_CAST (_tmp21_, VALADOC_API_TYPE_SYMBOL, ValadocApiSymbol));
						if (has_instance) {
							ValaList* _tmp23_;
							gint _tmp24_;
							gint _tmp25_;
							_tmp23_ = params;
							_tmp24_ = vala_collection_get_size ((ValaCollection*) _tmp23_);
							_tmp25_ = _tmp24_;
							_tmp22_ = _tmp25_;
						} else {
							ValaList* _tmp26_;
							gint _tmp27_;
							gint _tmp28_;
							_tmp26_ = params;
							_tmp27_ = vala_collection_get_size ((ValaCollection*) _tmp26_);
							_tmp28_ = _tmp27_;
							_tmp22_ = _tmp28_ - 1;
						}
						valadoc_taglets_param_set_position (self, _tmp22_);
						_g_object_unref0 (param);
						break;
					}
					_g_object_unref0 (param);
				}
			}
			_vala_iterable_unref0 (params);
		} else {
			ValaList* params = NULL;
			ValadocApiNodeType* _tmp29_;
			ValadocApiNodeType* _tmp30_;
			gint _tmp30__length1;
			ValaList* _tmp31_;
			ValaList* _tmp32_;
			gint _tmp33_ = 0;
			gint pos = 0;
			gboolean _tmp66_ = FALSE;
			ValadocApiSymbol* _tmp67_;
			_tmp29_ = g_new0 (ValadocApiNodeType, 2);
			_tmp29_[0] = VALADOC_API_NODE_TYPE_FORMAL_PARAMETER;
			_tmp29_[1] = VALADOC_API_NODE_TYPE_TYPE_PARAMETER;
			_tmp30_ = _tmp29_;
			_tmp30__length1 = 2;
			_tmp31_ = valadoc_api_node_get_children_by_types (container, _tmp30_, (gint) 2, FALSE);
			_tmp32_ = _tmp31_;
			_tmp30_ = (g_free (_tmp30_), NULL);
			params = _tmp32_;
			if (has_instance) {
				_tmp33_ = 1;
			} else {
				_tmp33_ = 0;
			}
			pos = _tmp33_;
			{
				ValaList* _param_list = NULL;
				ValaList* _tmp34_;
				gint _param_size = 0;
				ValaList* _tmp35_;
				gint _tmp36_;
				gint _tmp37_;
				gint _param_index = 0;
				_tmp34_ = params;
				_param_list = _tmp34_;
				_tmp35_ = _param_list;
				_tmp36_ = vala_collection_get_size ((ValaCollection*) _tmp35_);
				_tmp37_ = _tmp36_;
				_param_size = _tmp37_;
				_param_index = -1;
				while (TRUE) {
					gint _tmp38_;
					gint _tmp39_;
					ValadocApiNode* param = NULL;
					ValaList* _tmp40_;
					gpointer _tmp41_;
					ValadocApiNode* _tmp42_;
					const gchar* _tmp43_;
					const gchar* _tmp44_;
					const gchar* _tmp45_;
					ValadocApiParameter* formalparam = NULL;
					ValadocApiNode* _tmp47_;
					ValadocApiParameter* _tmp48_;
					gboolean _tmp49_ = FALSE;
					ValadocApiParameter* _tmp50_;
					gint _tmp65_;
					_param_index = _param_index + 1;
					_tmp38_ = _param_index;
					_tmp39_ = _param_size;
					if (!(_tmp38_ < _tmp39_)) {
						break;
					}
					_tmp40_ = _param_list;
					_tmp41_ = vala_list_get (_tmp40_, _param_index);
					param = (ValadocApiNode*) _tmp41_;
					_tmp42_ = param;
					_tmp43_ = valadoc_api_node_get_name (_tmp42_);
					_tmp44_ = _tmp43_;
					_tmp45_ = self->priv->_parameter_name;
					if (g_strcmp0 (_tmp44_, _tmp45_) == 0) {
						ValadocApiNode* _tmp46_;
						_tmp46_ = param;
						valadoc_taglets_param_set_parameter (self, G_TYPE_CHECK_INSTANCE_CAST (_tmp46_, VALADOC_API_TYPE_SYMBOL, ValadocApiSymbol));
						valadoc_taglets_param_set_position (self, pos);
						_g_object_unref0 (param);
						break;
					}
					_tmp47_ = param;
					_tmp48_ = _g_object_ref0 (VALADOC_API_IS_PARAMETER (_tmp47_) ? ((ValadocApiParameter*) _tmp47_) : NULL);
					formalparam = _tmp48_;
					_tmp50_ = formalparam;
					if (_tmp50_ != NULL) {
						gboolean _tmp51_ = FALSE;
						gboolean _tmp52_ = FALSE;
						ValadocApiParameter* _tmp53_;
						const gchar* _tmp54_;
						const gchar* _tmp55_;
						const gchar* _tmp56_;
						_tmp53_ = formalparam;
						_tmp54_ = valadoc_api_parameter_get_implicit_array_length_cparameter_name (_tmp53_);
						_tmp55_ = _tmp54_;
						_tmp56_ = self->priv->_parameter_name;
						if (g_strcmp0 (_tmp55_, _tmp56_) == 0) {
							_tmp52_ = TRUE;
						} else {
							ValadocApiParameter* _tmp57_;
							const gchar* _tmp58_;
							const gchar* _tmp59_;
							const gchar* _tmp60_;
							_tmp57_ = formalparam;
							_tmp58_ = valadoc_api_parameter_get_implicit_closure_cparameter_name (_tmp57_);
							_tmp59_ = _tmp58_;
							_tmp60_ = self->priv->_parameter_name;
							_tmp52_ = g_strcmp0 (_tmp59_, _tmp60_) == 0;
						}
						if (_tmp52_) {
							_tmp51_ = TRUE;
						} else {
							ValadocApiParameter* _tmp61_;
							const gchar* _tmp62_;
							const gchar* _tmp63_;
							const gchar* _tmp64_;
							_tmp61_ = formalparam;
							_tmp62_ = valadoc_api_parameter_get_implicit_destroy_cparameter_name (_tmp61_);
							_tmp63_ = _tmp62_;
							_tmp64_ = self->priv->_parameter_name;
							_tmp51_ = g_strcmp0 (_tmp63_, _tmp64_) == 0;
						}
						_tmp49_ = _tmp51_;
					} else {
						_tmp49_ = FALSE;
					}
					if (_tmp49_) {
						is_implicit = TRUE;
						_g_object_unref0 (formalparam);
						_g_object_unref0 (param);
						break;
					}
					_tmp65_ = pos;
					pos = _tmp65_ + 1;
					_g_object_unref0 (formalparam);
					_g_object_unref0 (param);
				}
			}
			_tmp67_ = self->priv->_parameter;
			if (_tmp67_ == NULL) {
				gboolean _tmp68_ = FALSE;
				gboolean _tmp69_ = FALSE;
				const gchar* _tmp70_;
				_tmp70_ = self->priv->_parameter_name;
				if (g_strcmp0 (_tmp70_, "error") == 0) {
					ValadocApiNodeType* _tmp71_;
					ValadocApiNodeType* _tmp72_;
					gint _tmp72__length1;
					_tmp71_ = g_new0 (ValadocApiNodeType, 2);
					_tmp71_[0] = VALADOC_API_NODE_TYPE_ERROR_DOMAIN;
					_tmp71_[1] = VALADOC_API_NODE_TYPE_CLASS;
					_tmp72_ = _tmp71_;
					_tmp72__length1 = 2;
					_tmp69_ = valadoc_api_node_has_children (container, _tmp72_, (gint) 2);
					_tmp72_ = (g_free (_tmp72_), NULL);
				} else {
					_tmp69_ = FALSE;
				}
				if (_tmp69_) {
					_tmp68_ = TRUE;
				} else {
					const gchar* _tmp73_;
					const gchar* _tmp74_;
					_tmp73_ = self->priv->_parameter_name;
					_tmp74_ = implicit_return_array_length;
					_tmp68_ = g_strcmp0 (_tmp73_, _tmp74_) == 0;
				}
				_tmp66_ = _tmp68_;
			} else {
				_tmp66_ = FALSE;
			}
			if (_tmp66_) {
				is_implicit = TRUE;
			}
			_vala_iterable_unref0 (params);
		}
	}
	_tmp75_ = self->priv->_parameter;
	if (_tmp75_ == NULL) {
		if (is_implicit) {
			gchar* _tmp76_;
			gchar* _tmp77_;
			gchar* _tmp78_;
			gchar* _tmp79_;
			const gchar* _tmp80_;
			_tmp76_ = valadoc_api_node_get_full_name (container);
			_tmp77_ = _tmp76_;
			_tmp78_ = g_strdup_printf ("%s: %s: @param", file_path, _tmp77_);
			_tmp79_ = _tmp78_;
			_tmp80_ = self->priv->_parameter_name;
			valadoc_error_reporter_simple_note (reporter, _tmp79_, "Implicit parameter `%s' exposed in documentation", _tmp80_);
			_g_free0 (_tmp79_);
			_g_free0 (_tmp77_);
		} else {
			gboolean _tmp81_;
			_tmp81_ = self->priv->_is_c_self_param;
			if (!_tmp81_) {
				gchar* _tmp82_;
				gchar* _tmp83_;
				gchar* _tmp84_;
				gchar* _tmp85_;
				const gchar* _tmp86_;
				_tmp82_ = valadoc_api_node_get_full_name (container);
				_tmp83_ = _tmp82_;
				_tmp84_ = g_strdup_printf ("%s: %s: @param", file_path, _tmp83_);
				_tmp85_ = _tmp84_;
				_tmp86_ = self->priv->_parameter_name;
				valadoc_error_reporter_simple_warning (reporter, _tmp85_, "Unknown parameter `%s'", _tmp86_);
				_g_free0 (_tmp85_);
				_g_free0 (_tmp83_);
			}
		}
	}
	VALADOC_CONTENT_CONTENT_ELEMENT_CLASS (valadoc_taglets_param_parent_class)->check ((ValadocContentContentElement*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_CONTENT_TYPE_BLOCK_CONTENT, ValadocContentBlockContent), api_root, container, file_path, reporter, settings);
}

static gboolean
valadoc_taglets_param_has_instance (ValadocTagletsParam* self,
                                    ValadocApiItem* element)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (element != NULL, FALSE);
	if (VALADOC_API_IS_METHOD (element)) {
		gboolean _tmp0_;
		gboolean _tmp1_;
		_tmp0_ = valadoc_api_method_get_is_static (G_TYPE_CHECK_INSTANCE_CAST (element, VALADOC_API_TYPE_METHOD, ValadocApiMethod));
		_tmp1_ = _tmp0_;
		result = !_tmp1_;
		return result;
	}
	result = FALSE;
	return result;
}

static void
valadoc_taglets_param_real_accept (ValadocContentContentElement* base,
                                   ValadocContentContentVisitor* visitor)
{
	ValadocTagletsParam * self;
	self = (ValadocTagletsParam*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_content_content_visitor_visit_taglet (visitor, (ValadocContentTaglet*) self);
}

static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}

static ValaList*
valadoc_taglets_param_real_get_inheritable_documentation (ValadocContentTaglet* base)
{
	ValadocTagletsParam * self;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	ValaList* _tmp2_;
	ValaList* result;
	self = (ValadocTagletsParam*) base;
	_tmp0_ = valadoc_content_block_content_get_content ((ValadocContentBlockContent*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = _vala_iterable_ref0 (_tmp1_);
	result = _tmp2_;
	return result;
}

static gboolean
valadoc_taglets_param_real_inheritable (ValadocContentTaglet* base,
                                        ValadocContentTaglet* taglet)
{
	ValadocTagletsParam * self;
	ValadocTagletsParam* t = NULL;
	ValadocTagletsParam* _tmp0_;
	gboolean _tmp1_ = FALSE;
	ValadocApiSymbol* _tmp2_;
	ValadocTagletsParam* _tmp3_;
	ValadocApiSymbol* _tmp4_;
	gboolean result;
	self = (ValadocTagletsParam*) base;
	g_return_val_if_fail (taglet != NULL, FALSE);
	if (VALADOC_TAGLETS_IS_PARAM (taglet) == FALSE) {
		result = FALSE;
		return result;
	}
	_tmp0_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (taglet, VALADOC_TAGLETS_TYPE_PARAM, ValadocTagletsParam));
	t = _tmp0_;
	_tmp2_ = self->priv->_parameter;
	_tmp3_ = t;
	_tmp4_ = _tmp3_->priv->_parameter;
	if (_tmp2_ == _tmp4_) {
		_tmp1_ = TRUE;
	} else {
		const gchar* _tmp5_;
		ValadocTagletsParam* _tmp6_;
		const gchar* _tmp7_;
		_tmp5_ = self->priv->_parameter_name;
		_tmp6_ = t;
		_tmp7_ = _tmp6_->priv->_parameter_name;
		_tmp1_ = g_strcmp0 (_tmp5_, _tmp7_) == 0;
	}
	result = _tmp1_;
	_g_object_unref0 (t);
	return result;
}

static ValadocContentContentElement*
valadoc_taglets_param_real_copy (ValadocContentContentElement* base,
                                 ValadocContentContentElement* new_parent)
{
	ValadocTagletsParam * self;
	ValadocTagletsParam* param = NULL;
	ValadocTagletsParam* _tmp0_;
	ValadocTagletsParam* _tmp1_;
	ValadocTagletsParam* _tmp2_;
	const gchar* _tmp3_;
	ValadocTagletsParam* _tmp4_;
	ValadocApiSymbol* _tmp5_;
	ValadocTagletsParam* _tmp6_;
	gint _tmp7_;
	ValadocContentContentElement* result;
	self = (ValadocTagletsParam*) base;
	_tmp0_ = valadoc_taglets_param_new ();
	param = _tmp0_;
	_tmp1_ = param;
	valadoc_content_content_element_set_parent ((ValadocContentContentElement*) _tmp1_, new_parent);
	_tmp2_ = param;
	_tmp3_ = self->priv->_parameter_name;
	valadoc_taglets_param_set_parameter_name (_tmp2_, _tmp3_);
	_tmp4_ = param;
	_tmp5_ = self->priv->_parameter;
	valadoc_taglets_param_set_parameter (_tmp4_, _tmp5_);
	_tmp6_ = param;
	_tmp7_ = self->priv->_position;
	valadoc_taglets_param_set_position (_tmp6_, _tmp7_);
	{
		ValaList* _element_list = NULL;
		ValaList* _tmp8_;
		ValaList* _tmp9_;
		gint _element_size = 0;
		ValaList* _tmp10_;
		gint _tmp11_;
		gint _tmp12_;
		gint _element_index = 0;
		_tmp8_ = valadoc_content_block_content_get_content ((ValadocContentBlockContent*) self);
		_tmp9_ = _tmp8_;
		_element_list = _tmp9_;
		_tmp10_ = _element_list;
		_tmp11_ = vala_collection_get_size ((ValaCollection*) _tmp10_);
		_tmp12_ = _tmp11_;
		_element_size = _tmp12_;
		_element_index = -1;
		while (TRUE) {
			gint _tmp13_;
			gint _tmp14_;
			ValadocContentBlock* element = NULL;
			ValaList* _tmp15_;
			gpointer _tmp16_;
			ValadocContentBlock* copy = NULL;
			ValadocContentBlock* _tmp17_;
			ValadocTagletsParam* _tmp18_;
			ValadocContentContentElement* _tmp19_;
			ValadocContentBlock* _tmp20_;
			ValadocTagletsParam* _tmp21_;
			ValaList* _tmp22_;
			ValaList* _tmp23_;
			ValadocContentBlock* _tmp24_;
			_element_index = _element_index + 1;
			_tmp13_ = _element_index;
			_tmp14_ = _element_size;
			if (!(_tmp13_ < _tmp14_)) {
				break;
			}
			_tmp15_ = _element_list;
			_tmp16_ = vala_list_get (_tmp15_, _element_index);
			element = (ValadocContentBlock*) _tmp16_;
			_tmp17_ = element;
			_tmp18_ = param;
			_tmp19_ = valadoc_content_content_element_copy ((ValadocContentContentElement*) _tmp17_, (ValadocContentContentElement*) _tmp18_);
			_tmp20_ = VALADOC_CONTENT_IS_BLOCK (_tmp19_) ? ((ValadocContentBlock*) _tmp19_) : NULL;
			if (_tmp20_ == NULL) {
				_g_object_unref0 (_tmp19_);
			}
			copy = _tmp20_;
			_tmp21_ = param;
			_tmp22_ = valadoc_content_block_content_get_content ((ValadocContentBlockContent*) _tmp21_);
			_tmp23_ = _tmp22_;
			_tmp24_ = copy;
			vala_collection_add ((ValaCollection*) _tmp23_, _tmp24_);
			_g_object_unref0 (copy);
			_g_object_unref0 (element);
		}
	}
	result = (ValadocContentContentElement*) param;
	return result;
}

ValadocTagletsParam*
valadoc_taglets_param_construct (GType object_type)
{
	ValadocTagletsParam * self = NULL;
	self = (ValadocTagletsParam*) valadoc_content_block_content_construct (object_type);
	return self;
}

ValadocTagletsParam*
valadoc_taglets_param_new (void)
{
	return valadoc_taglets_param_construct (VALADOC_TAGLETS_TYPE_PARAM);
}

static void
valadoc_taglets_param_class_init (ValadocTagletsParamClass * klass,
                                  gpointer klass_data)
{
	valadoc_taglets_param_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocTagletsParam_private_offset);
	((ValadocContentContentElementClass *) klass)->check = (void (*) (ValadocContentContentElement*, ValadocApiTree*, ValadocApiNode*, const gchar*, ValadocErrorReporter*, ValadocSettings*)) valadoc_taglets_param_real_check;
	((ValadocContentContentElementClass *) klass)->accept = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_taglets_param_real_accept;
	((ValadocContentContentElementClass *) klass)->copy = (ValadocContentContentElement* (*) (ValadocContentContentElement*, ValadocContentContentElement*)) valadoc_taglets_param_real_copy;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_taglets_param_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_valadoc_taglets_param_set_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_taglets_param_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_TAGLETS_PARAM_PARAMETER_NAME_PROPERTY, valadoc_taglets_param_properties[VALADOC_TAGLETS_PARAM_PARAMETER_NAME_PROPERTY] = g_param_spec_string ("parameter-name", "parameter-name", "parameter-name", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_TAGLETS_PARAM_PARAMETER_PROPERTY, valadoc_taglets_param_properties[VALADOC_TAGLETS_PARAM_PARAMETER_PROPERTY] = g_param_spec_object ("parameter", "parameter", "parameter", VALADOC_API_TYPE_SYMBOL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_TAGLETS_PARAM_POSITION_PROPERTY, valadoc_taglets_param_properties[VALADOC_TAGLETS_PARAM_POSITION_PROPERTY] = g_param_spec_int ("position", "position", "position", G_MININT, G_MAXINT, -1, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_TAGLETS_PARAM_IS_C_SELF_PARAM_PROPERTY, valadoc_taglets_param_properties[VALADOC_TAGLETS_PARAM_IS_C_SELF_PARAM_PROPERTY] = g_param_spec_boolean ("is-c-self-param", "is-c-self-param", "is-c-self-param", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_TAGLETS_PARAM_IS_THIS_PROPERTY, valadoc_taglets_param_properties[VALADOC_TAGLETS_PARAM_IS_THIS_PROPERTY] = g_param_spec_boolean ("is-this", "is-this", "is-this", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static void
valadoc_taglets_param_valadoc_content_taglet_interface_init (ValadocContentTagletIface * iface,
                                                             gpointer iface_data)
{
	valadoc_taglets_param_valadoc_content_taglet_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_parser_rule = (ValadocRule* (*) (ValadocContentTaglet*, ValadocRule*)) valadoc_taglets_param_real_get_parser_rule;
	iface->get_inheritable_documentation = (ValaList* (*) (ValadocContentTaglet*)) valadoc_taglets_param_real_get_inheritable_documentation;
	iface->inheritable = (gboolean (*) (ValadocContentTaglet*, ValadocContentTaglet*)) valadoc_taglets_param_real_inheritable;
}

static void
valadoc_taglets_param_valadoc_content_block_interface_init (ValadocContentBlockIface * iface,
                                                            gpointer iface_data)
{
	valadoc_taglets_param_valadoc_content_block_parent_iface = g_type_interface_peek_parent (iface);
}

static void
valadoc_taglets_param_instance_init (ValadocTagletsParam * self,
                                     gpointer klass)
{
	self->priv = valadoc_taglets_param_get_instance_private (self);
	self->priv->_position = -1;
}

static void
valadoc_taglets_param_finalize (GObject * obj)
{
	ValadocTagletsParam * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_TAGLETS_TYPE_PARAM, ValadocTagletsParam);
	_g_free0 (self->priv->_parameter_name);
	G_OBJECT_CLASS (valadoc_taglets_param_parent_class)->finalize (obj);
}

static GType
valadoc_taglets_param_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocTagletsParamClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_taglets_param_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocTagletsParam), 0, (GInstanceInitFunc) valadoc_taglets_param_instance_init, NULL };
	static const GInterfaceInfo valadoc_content_taglet_info = { (GInterfaceInitFunc) valadoc_taglets_param_valadoc_content_taglet_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	static const GInterfaceInfo valadoc_content_block_info = { (GInterfaceInitFunc) valadoc_taglets_param_valadoc_content_block_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType valadoc_taglets_param_type_id;
	valadoc_taglets_param_type_id = g_type_register_static (VALADOC_CONTENT_TYPE_BLOCK_CONTENT, "ValadocTagletsParam", &g_define_type_info, 0);
	g_type_add_interface_static (valadoc_taglets_param_type_id, VALADOC_CONTENT_TYPE_TAGLET, &valadoc_content_taglet_info);
	g_type_add_interface_static (valadoc_taglets_param_type_id, VALADOC_CONTENT_TYPE_BLOCK, &valadoc_content_block_info);
	ValadocTagletsParam_private_offset = g_type_add_instance_private (valadoc_taglets_param_type_id, sizeof (ValadocTagletsParamPrivate));
	return valadoc_taglets_param_type_id;
}

GType
valadoc_taglets_param_get_type (void)
{
	static volatile gsize valadoc_taglets_param_type_id__once = 0;
	if (g_once_init_enter (&valadoc_taglets_param_type_id__once)) {
		GType valadoc_taglets_param_type_id;
		valadoc_taglets_param_type_id = valadoc_taglets_param_get_type_once ();
		g_once_init_leave (&valadoc_taglets_param_type_id__once, valadoc_taglets_param_type_id);
	}
	return valadoc_taglets_param_type_id__once;
}

static void
_vala_valadoc_taglets_param_get_property (GObject * object,
                                          guint property_id,
                                          GValue * value,
                                          GParamSpec * pspec)
{
	ValadocTagletsParam * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_TAGLETS_TYPE_PARAM, ValadocTagletsParam);
	switch (property_id) {
		case VALADOC_TAGLETS_PARAM_PARAMETER_NAME_PROPERTY:
		g_value_set_string (value, valadoc_taglets_param_get_parameter_name (self));
		break;
		case VALADOC_TAGLETS_PARAM_PARAMETER_PROPERTY:
		g_value_set_object (value, valadoc_taglets_param_get_parameter (self));
		break;
		case VALADOC_TAGLETS_PARAM_POSITION_PROPERTY:
		g_value_set_int (value, valadoc_taglets_param_get_position (self));
		break;
		case VALADOC_TAGLETS_PARAM_IS_C_SELF_PARAM_PROPERTY:
		g_value_set_boolean (value, valadoc_taglets_param_get_is_c_self_param (self));
		break;
		case VALADOC_TAGLETS_PARAM_IS_THIS_PROPERTY:
		g_value_set_boolean (value, valadoc_taglets_param_get_is_this (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_valadoc_taglets_param_set_property (GObject * object,
                                          guint property_id,
                                          const GValue * value,
                                          GParamSpec * pspec)
{
	ValadocTagletsParam * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_TAGLETS_TYPE_PARAM, ValadocTagletsParam);
	switch (property_id) {
		case VALADOC_TAGLETS_PARAM_PARAMETER_NAME_PROPERTY:
		valadoc_taglets_param_set_parameter_name (self, g_value_get_string (value));
		break;
		case VALADOC_TAGLETS_PARAM_PARAMETER_PROPERTY:
		valadoc_taglets_param_set_parameter (self, g_value_get_object (value));
		break;
		case VALADOC_TAGLETS_PARAM_POSITION_PROPERTY:
		valadoc_taglets_param_set_position (self, g_value_get_int (value));
		break;
		case VALADOC_TAGLETS_PARAM_IS_C_SELF_PARAM_PROPERTY:
		valadoc_taglets_param_set_is_c_self_param (self, g_value_get_boolean (value));
		break;
		case VALADOC_TAGLETS_PARAM_IS_THIS_PROPERTY:
		valadoc_taglets_param_set_is_this (self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_array_destroy (gpointer array,
                     gssize array_length,
                     GDestroyNotify destroy_func)
{
	if ((array != NULL) && (destroy_func != NULL)) {
		gssize i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}

static void
_vala_array_free (gpointer array,
                  gssize array_length,
                  GDestroyNotify destroy_func)
{
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}

