/* tagletthrows.c generated by valac, the Vala compiler
 * generated from tagletthrows.vala, do not modify */

/* tagletthrows.vala
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
	VALADOC_TAGLETS_THROWS_0_PROPERTY,
	VALADOC_TAGLETS_THROWS_ERROR_DOMAIN_NAME_PROPERTY,
	VALADOC_TAGLETS_THROWS_ERROR_DOMAIN_PROPERTY,
	VALADOC_TAGLETS_THROWS_NUM_PROPERTIES
};
static GParamSpec* valadoc_taglets_throws_properties[VALADOC_TAGLETS_THROWS_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

struct _ValadocTagletsThrowsPrivate {
	gchar* _error_domain_name;
	ValadocApiNode* _error_domain;
};

static gint ValadocTagletsThrows_private_offset;
static gpointer valadoc_taglets_throws_parent_class = NULL;
static ValadocContentTagletIface * valadoc_taglets_throws_valadoc_content_taglet_parent_iface = NULL;
static ValadocContentBlockIface * valadoc_taglets_throws_valadoc_content_block_parent_iface = NULL;

static void valadoc_taglets_throws_set_error_domain_name (ValadocTagletsThrows* self,
                                                   const gchar* value);
static void valadoc_taglets_throws_set_error_domain (ValadocTagletsThrows* self,
                                              ValadocApiNode* value);
static ValadocRule* valadoc_taglets_throws_real_get_parser_rule (ValadocContentTaglet* base,
                                                          ValadocRule* run_rule);
static void __lambda130_ (ValadocTagletsThrows* self,
                   ValadocToken* token,
                   GError** error);
static void ___lambda130__valadoc_token_type_action (ValadocToken* token,
                                              gpointer self,
                                              GError** error);
static void valadoc_taglets_throws_real_check (ValadocContentContentElement* base,
                                        ValadocApiTree* api_root,
                                        ValadocApiNode* container,
                                        const gchar* file_path,
                                        ValadocErrorReporter* reporter,
                                        ValadocSettings* settings);
static void valadoc_taglets_throws_real_accept (ValadocContentContentElement* base,
                                         ValadocContentContentVisitor* visitor);
static ValaList* valadoc_taglets_throws_real_get_inheritable_documentation (ValadocContentTaglet* base);
static gboolean valadoc_taglets_throws_real_inheritable (ValadocContentTaglet* base,
                                                  ValadocContentTaglet* taglet);
static ValadocContentContentElement* valadoc_taglets_throws_real_copy (ValadocContentContentElement* base,
                                                                ValadocContentContentElement* new_parent);
 G_GNUC_INTERNAL void valadoc_content_content_element_set_parent (ValadocContentContentElement* self,
                                                 ValadocContentContentElement* value);
 G_GNUC_INTERNAL ValadocContentBlockContent* valadoc_content_block_content_construct (GType object_type);
static void valadoc_taglets_throws_finalize (GObject * obj);
static GType valadoc_taglets_throws_get_type_once (void);
static void _vala_valadoc_taglets_throws_get_property (GObject * object,
                                                guint property_id,
                                                GValue * value,
                                                GParamSpec * pspec);
static void _vala_valadoc_taglets_throws_set_property (GObject * object,
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
valadoc_taglets_throws_get_instance_private (ValadocTagletsThrows* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocTagletsThrows_private_offset);
}

const gchar*
valadoc_taglets_throws_get_error_domain_name (ValadocTagletsThrows* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_error_domain_name;
	result = _tmp0_;
	return result;
}

static void
valadoc_taglets_throws_set_error_domain_name (ValadocTagletsThrows* self,
                                              const gchar* value)
{
	gchar* old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_taglets_throws_get_error_domain_name (self);
	if (g_strcmp0 (value, old_value) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_error_domain_name);
		self->priv->_error_domain_name = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_taglets_throws_properties[VALADOC_TAGLETS_THROWS_ERROR_DOMAIN_NAME_PROPERTY]);
	}
}

ValadocApiNode*
valadoc_taglets_throws_get_error_domain (ValadocTagletsThrows* self)
{
	ValadocApiNode* result;
	ValadocApiNode* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_error_domain;
	result = _tmp0_;
	return result;
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static void
valadoc_taglets_throws_set_error_domain (ValadocTagletsThrows* self,
                                         ValadocApiNode* value)
{
	ValadocApiNode* old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_taglets_throws_get_error_domain (self);
	if (old_value != value) {
		ValadocApiNode* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_error_domain);
		self->priv->_error_domain = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_taglets_throws_properties[VALADOC_TAGLETS_THROWS_ERROR_DOMAIN_PROPERTY]);
	}
}

static void
__lambda130_ (ValadocTagletsThrows* self,
              ValadocToken* token,
              GError** error)
{
	const gchar* _tmp0_;
	g_return_if_fail (token != NULL);
	_tmp0_ = valadoc_token_to_string (token);
	valadoc_taglets_throws_set_error_domain_name (self, _tmp0_);
}

static void
___lambda130__valadoc_token_type_action (ValadocToken* token,
                                         gpointer self,
                                         GError** error)
{
	__lambda130_ ((ValadocTagletsThrows*) self, token, error);
}

static ValadocRule*
valadoc_taglets_throws_real_get_parser_rule (ValadocContentTaglet* base,
                                             ValadocRule* run_rule)
{
	ValadocTagletsThrows * self;
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
	ValadocRule* result = NULL;
	self = (ValadocTagletsThrows*) base;
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
	_tmp10_ = valadoc_token_type_action (_tmp9_, ___lambda130__valadoc_token_type_action, self);
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
valadoc_taglets_throws_real_check (ValadocContentContentElement* base,
                                   ValadocApiTree* api_root,
                                   ValadocApiNode* container,
                                   const gchar* file_path,
                                   ValadocErrorReporter* reporter,
                                   ValadocSettings* settings)
{
	ValadocTagletsThrows * self;
	gboolean _tmp0_ = FALSE;
	const gchar* _tmp5_;
	ValadocApiNode* _tmp6_;
	ValadocApiNode* _tmp7_;
	ValadocApiNode* _tmp8_;
	ValaList* exceptions = NULL;
	ValadocApiNodeType* _tmp14_;
	ValadocApiNodeType* _tmp15_;
	gint _tmp15__length1;
	ValaList* _tmp16_;
	ValaList* _tmp17_;
	ValadocApiItem* _tmp18_ = NULL;
	ValadocApiNode* _tmp19_;
	ValadocApiItem* expected_error_domain = NULL;
	ValadocApiItem* _tmp24_;
	gboolean report_warning = FALSE;
	self = (ValadocTagletsThrows*) base;
	g_return_if_fail (api_root != NULL);
	g_return_if_fail (container != NULL);
	g_return_if_fail (file_path != NULL);
	g_return_if_fail (reporter != NULL);
	g_return_if_fail (settings != NULL);
	if (VALADOC_API_IS_METHOD (container) == FALSE) {
		_tmp0_ = VALADOC_API_IS_DELEGATE (container) == FALSE;
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		gchar* _tmp1_;
		gchar* _tmp2_;
		gchar* _tmp3_;
		gchar* _tmp4_;
		_tmp1_ = valadoc_api_node_get_full_name (container);
		_tmp2_ = _tmp1_;
		_tmp3_ = g_strdup_printf ("%s: %s: @throws", file_path, _tmp2_);
		_tmp4_ = _tmp3_;
		valadoc_error_reporter_simple_warning (reporter, _tmp4_, "@throws used outside method/delegate context");
		_g_free0 (_tmp4_);
		_g_free0 (_tmp2_);
		VALADOC_CONTENT_CONTENT_ELEMENT_CLASS (valadoc_taglets_throws_parent_class)->check ((ValadocContentContentElement*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_CONTENT_TYPE_BLOCK_CONTENT, ValadocContentBlockContent), api_root, container, file_path, reporter, settings);
		return;
	}
	_tmp5_ = self->priv->_error_domain_name;
	_tmp6_ = valadoc_api_tree_search_symbol_str (api_root, container, _tmp5_);
	_tmp7_ = _tmp6_;
	valadoc_taglets_throws_set_error_domain (self, _tmp7_);
	_g_object_unref0 (_tmp7_);
	_tmp8_ = self->priv->_error_domain;
	if (_tmp8_ == NULL) {
		gchar* _tmp9_;
		gchar* _tmp10_;
		gchar* _tmp11_;
		gchar* _tmp12_;
		const gchar* _tmp13_;
		_tmp9_ = valadoc_api_node_get_full_name (container);
		_tmp10_ = _tmp9_;
		_tmp11_ = g_strdup_printf ("%s: %s: @throws", file_path, _tmp10_);
		_tmp12_ = _tmp11_;
		_tmp13_ = self->priv->_error_domain_name;
		valadoc_error_reporter_simple_error (reporter, _tmp12_, "`%s' does not exist", _tmp13_);
		_g_free0 (_tmp12_);
		_g_free0 (_tmp10_);
		VALADOC_CONTENT_CONTENT_ELEMENT_CLASS (valadoc_taglets_throws_parent_class)->check ((ValadocContentContentElement*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_CONTENT_TYPE_BLOCK_CONTENT, ValadocContentBlockContent), api_root, container, file_path, reporter, settings);
		return;
	}
	_tmp14_ = g_new0 (ValadocApiNodeType, 2);
	_tmp14_[0] = VALADOC_API_NODE_TYPE_ERROR_DOMAIN;
	_tmp14_[1] = VALADOC_API_NODE_TYPE_CLASS;
	_tmp15_ = _tmp14_;
	_tmp15__length1 = 2;
	_tmp16_ = valadoc_api_node_get_children_by_types (container, _tmp15_, (gint) 2, FALSE);
	_tmp17_ = _tmp16_;
	_tmp15_ = (g_free (_tmp15_), NULL);
	exceptions = _tmp17_;
	_tmp19_ = self->priv->_error_domain;
	if (VALADOC_API_IS_ERROR_CODE (_tmp19_)) {
		ValadocApiNode* _tmp20_;
		ValadocApiItem* _tmp21_;
		ValadocApiItem* _tmp22_;
		_tmp20_ = self->priv->_error_domain;
		_tmp21_ = valadoc_api_item_get_parent ((ValadocApiItem*) _tmp20_);
		_tmp22_ = _tmp21_;
		_tmp18_ = _tmp22_;
	} else {
		ValadocApiNode* _tmp23_;
		_tmp23_ = self->priv->_error_domain;
		_tmp18_ = (ValadocApiItem*) _tmp23_;
	}
	_tmp24_ = _g_object_ref0 (_tmp18_);
	expected_error_domain = _tmp24_;
	report_warning = TRUE;
	{
		ValaList* _exception_list = NULL;
		ValaList* _tmp25_;
		gint _exception_size = 0;
		ValaList* _tmp26_;
		gint _tmp27_;
		gint _tmp28_;
		gint _exception_index = 0;
		_tmp25_ = exceptions;
		_exception_list = _tmp25_;
		_tmp26_ = _exception_list;
		_tmp27_ = vala_collection_get_size ((ValaCollection*) _tmp26_);
		_tmp28_ = _tmp27_;
		_exception_size = _tmp28_;
		_exception_index = -1;
		while (TRUE) {
			gint _tmp29_;
			gint _tmp30_;
			ValadocApiNode* exception = NULL;
			ValaList* _tmp31_;
			gpointer _tmp32_;
			gboolean _tmp33_ = FALSE;
			ValadocApiNode* _tmp34_;
			ValadocApiItem* _tmp35_;
			_exception_index = _exception_index + 1;
			_tmp29_ = _exception_index;
			_tmp30_ = _exception_size;
			if (!(_tmp29_ < _tmp30_)) {
				break;
			}
			_tmp31_ = _exception_list;
			_tmp32_ = vala_list_get (_tmp31_, _exception_index);
			exception = (ValadocApiNode*) _tmp32_;
			_tmp34_ = exception;
			_tmp35_ = expected_error_domain;
			if (G_TYPE_CHECK_INSTANCE_CAST (_tmp34_, VALADOC_API_TYPE_ITEM, ValadocApiItem) == _tmp35_) {
				_tmp33_ = TRUE;
			} else {
				gboolean _tmp36_ = FALSE;
				ValadocApiNode* _tmp37_;
				_tmp37_ = exception;
				if (VALADOC_API_IS_CLASS (_tmp37_)) {
					ValadocApiItem* _tmp38_;
					_tmp38_ = expected_error_domain;
					_tmp36_ = VALADOC_API_IS_ERROR_DOMAIN (_tmp38_);
				} else {
					_tmp36_ = FALSE;
				}
				_tmp33_ = _tmp36_;
			}
			if (_tmp33_) {
				report_warning = FALSE;
				_g_object_unref0 (exception);
				break;
			}
			_g_object_unref0 (exception);
		}
	}
	if (report_warning) {
		gchar* _tmp39_;
		gchar* _tmp40_;
		gchar* _tmp41_;
		gchar* _tmp42_;
		const gchar* _tmp43_;
		_tmp39_ = valadoc_api_node_get_full_name (container);
		_tmp40_ = _tmp39_;
		_tmp41_ = g_strdup_printf ("%s: %s: @throws", file_path, _tmp40_);
		_tmp42_ = _tmp41_;
		_tmp43_ = self->priv->_error_domain_name;
		valadoc_error_reporter_simple_warning (reporter, _tmp42_, "`%s' does not exist in exception list", _tmp43_);
		_g_free0 (_tmp42_);
		_g_free0 (_tmp40_);
	}
	VALADOC_CONTENT_CONTENT_ELEMENT_CLASS (valadoc_taglets_throws_parent_class)->check ((ValadocContentContentElement*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_CONTENT_TYPE_BLOCK_CONTENT, ValadocContentBlockContent), api_root, container, file_path, reporter, settings);
	_g_object_unref0 (expected_error_domain);
	_vala_iterable_unref0 (exceptions);
}

static void
valadoc_taglets_throws_real_accept (ValadocContentContentElement* base,
                                    ValadocContentContentVisitor* visitor)
{
	ValadocTagletsThrows * self;
	self = (ValadocTagletsThrows*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_content_content_visitor_visit_taglet (visitor, (ValadocContentTaglet*) self);
}

static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}

static ValaList*
valadoc_taglets_throws_real_get_inheritable_documentation (ValadocContentTaglet* base)
{
	ValadocTagletsThrows * self;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	ValaList* _tmp2_;
	ValaList* result = NULL;
	self = (ValadocTagletsThrows*) base;
	_tmp0_ = valadoc_content_block_content_get_content ((ValadocContentBlockContent*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = _vala_iterable_ref0 (_tmp1_);
	result = _tmp2_;
	return result;
}

static gboolean
valadoc_taglets_throws_real_inheritable (ValadocContentTaglet* base,
                                         ValadocContentTaglet* taglet)
{
	ValadocTagletsThrows * self;
	ValadocTagletsThrows* t = NULL;
	ValadocTagletsThrows* _tmp0_;
	gboolean _tmp1_ = FALSE;
	ValadocApiNode* _tmp2_;
	ValadocTagletsThrows* _tmp3_;
	ValadocApiNode* _tmp4_;
	gboolean result = FALSE;
	self = (ValadocTagletsThrows*) base;
	g_return_val_if_fail (taglet != NULL, FALSE);
	if (VALADOC_TAGLETS_IS_THROWS (taglet) == FALSE) {
		result = FALSE;
		return result;
	}
	_tmp0_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (taglet, VALADOC_TAGLETS_TYPE_THROWS, ValadocTagletsThrows));
	t = _tmp0_;
	_tmp2_ = self->priv->_error_domain;
	_tmp3_ = t;
	_tmp4_ = _tmp3_->priv->_error_domain;
	if (_tmp2_ == _tmp4_) {
		_tmp1_ = TRUE;
	} else {
		const gchar* _tmp5_;
		ValadocTagletsThrows* _tmp6_;
		const gchar* _tmp7_;
		_tmp5_ = self->priv->_error_domain_name;
		_tmp6_ = t;
		_tmp7_ = _tmp6_->priv->_error_domain_name;
		_tmp1_ = g_strcmp0 (_tmp5_, _tmp7_) == 0;
	}
	result = _tmp1_;
	_g_object_unref0 (t);
	return result;
}

static ValadocContentContentElement*
valadoc_taglets_throws_real_copy (ValadocContentContentElement* base,
                                  ValadocContentContentElement* new_parent)
{
	ValadocTagletsThrows * self;
	ValadocTagletsThrows* tr = NULL;
	ValadocTagletsThrows* _tmp0_;
	ValadocTagletsThrows* _tmp1_;
	ValadocTagletsThrows* _tmp2_;
	const gchar* _tmp3_;
	ValadocTagletsThrows* _tmp4_;
	ValadocApiNode* _tmp5_;
	ValadocContentContentElement* result = NULL;
	self = (ValadocTagletsThrows*) base;
	_tmp0_ = valadoc_taglets_throws_new ();
	tr = _tmp0_;
	_tmp1_ = tr;
	valadoc_content_content_element_set_parent ((ValadocContentContentElement*) _tmp1_, new_parent);
	_tmp2_ = tr;
	_tmp3_ = self->priv->_error_domain_name;
	valadoc_taglets_throws_set_error_domain_name (_tmp2_, _tmp3_);
	_tmp4_ = tr;
	_tmp5_ = self->priv->_error_domain;
	valadoc_taglets_throws_set_error_domain (_tmp4_, _tmp5_);
	{
		ValaList* _element_list = NULL;
		ValaList* _tmp6_;
		ValaList* _tmp7_;
		gint _element_size = 0;
		ValaList* _tmp8_;
		gint _tmp9_;
		gint _tmp10_;
		gint _element_index = 0;
		_tmp6_ = valadoc_content_block_content_get_content ((ValadocContentBlockContent*) self);
		_tmp7_ = _tmp6_;
		_element_list = _tmp7_;
		_tmp8_ = _element_list;
		_tmp9_ = vala_collection_get_size ((ValaCollection*) _tmp8_);
		_tmp10_ = _tmp9_;
		_element_size = _tmp10_;
		_element_index = -1;
		while (TRUE) {
			gint _tmp11_;
			gint _tmp12_;
			ValadocContentBlock* element = NULL;
			ValaList* _tmp13_;
			gpointer _tmp14_;
			ValadocContentBlock* copy = NULL;
			ValadocContentBlock* _tmp15_;
			ValadocTagletsThrows* _tmp16_;
			ValadocContentContentElement* _tmp17_;
			ValadocContentBlock* _tmp18_;
			ValadocTagletsThrows* _tmp19_;
			ValaList* _tmp20_;
			ValaList* _tmp21_;
			ValadocContentBlock* _tmp22_;
			_element_index = _element_index + 1;
			_tmp11_ = _element_index;
			_tmp12_ = _element_size;
			if (!(_tmp11_ < _tmp12_)) {
				break;
			}
			_tmp13_ = _element_list;
			_tmp14_ = vala_list_get (_tmp13_, _element_index);
			element = (ValadocContentBlock*) _tmp14_;
			_tmp15_ = element;
			_tmp16_ = tr;
			_tmp17_ = valadoc_content_content_element_copy ((ValadocContentContentElement*) _tmp15_, (ValadocContentContentElement*) _tmp16_);
			_tmp18_ = VALADOC_CONTENT_IS_BLOCK (_tmp17_) ? ((ValadocContentBlock*) _tmp17_) : NULL;
			if (_tmp18_ == NULL) {
				_g_object_unref0 (_tmp17_);
			}
			copy = _tmp18_;
			_tmp19_ = tr;
			_tmp20_ = valadoc_content_block_content_get_content ((ValadocContentBlockContent*) _tmp19_);
			_tmp21_ = _tmp20_;
			_tmp22_ = copy;
			vala_collection_add ((ValaCollection*) _tmp21_, _tmp22_);
			_g_object_unref0 (copy);
			_g_object_unref0 (element);
		}
	}
	result = (ValadocContentContentElement*) tr;
	return result;
}

ValadocTagletsThrows*
valadoc_taglets_throws_construct (GType object_type)
{
	ValadocTagletsThrows * self = NULL;
	self = (ValadocTagletsThrows*) valadoc_content_block_content_construct (object_type);
	return self;
}

ValadocTagletsThrows*
valadoc_taglets_throws_new (void)
{
	return valadoc_taglets_throws_construct (VALADOC_TAGLETS_TYPE_THROWS);
}

static void
valadoc_taglets_throws_class_init (ValadocTagletsThrowsClass * klass,
                                   gpointer klass_data)
{
	valadoc_taglets_throws_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocTagletsThrows_private_offset);
	((ValadocContentContentElementClass *) klass)->check = (void (*) (ValadocContentContentElement*, ValadocApiTree*, ValadocApiNode*, const gchar*, ValadocErrorReporter*, ValadocSettings*)) valadoc_taglets_throws_real_check;
	((ValadocContentContentElementClass *) klass)->accept = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_taglets_throws_real_accept;
	((ValadocContentContentElementClass *) klass)->copy = (ValadocContentContentElement* (*) (ValadocContentContentElement*, ValadocContentContentElement*)) valadoc_taglets_throws_real_copy;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_taglets_throws_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_valadoc_taglets_throws_set_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_taglets_throws_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_TAGLETS_THROWS_ERROR_DOMAIN_NAME_PROPERTY, valadoc_taglets_throws_properties[VALADOC_TAGLETS_THROWS_ERROR_DOMAIN_NAME_PROPERTY] = g_param_spec_string ("error-domain-name", "error-domain-name", "error-domain-name", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Thrown  Error domain or Error code
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_TAGLETS_THROWS_ERROR_DOMAIN_PROPERTY, valadoc_taglets_throws_properties[VALADOC_TAGLETS_THROWS_ERROR_DOMAIN_PROPERTY] = g_param_spec_object ("error-domain", "error-domain", "error-domain", VALADOC_API_TYPE_NODE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static void
valadoc_taglets_throws_valadoc_content_taglet_interface_init (ValadocContentTagletIface * iface,
                                                              gpointer iface_data)
{
	valadoc_taglets_throws_valadoc_content_taglet_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_parser_rule = (ValadocRule* (*) (ValadocContentTaglet*, ValadocRule*)) valadoc_taglets_throws_real_get_parser_rule;
	iface->get_inheritable_documentation = (ValaList* (*) (ValadocContentTaglet*)) valadoc_taglets_throws_real_get_inheritable_documentation;
	iface->inheritable = (gboolean (*) (ValadocContentTaglet*, ValadocContentTaglet*)) valadoc_taglets_throws_real_inheritable;
}

static void
valadoc_taglets_throws_valadoc_content_block_interface_init (ValadocContentBlockIface * iface,
                                                             gpointer iface_data)
{
	valadoc_taglets_throws_valadoc_content_block_parent_iface = g_type_interface_peek_parent (iface);
}

static void
valadoc_taglets_throws_instance_init (ValadocTagletsThrows * self,
                                      gpointer klass)
{
	self->priv = valadoc_taglets_throws_get_instance_private (self);
}

static void
valadoc_taglets_throws_finalize (GObject * obj)
{
	ValadocTagletsThrows * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_TAGLETS_TYPE_THROWS, ValadocTagletsThrows);
	_g_free0 (self->priv->_error_domain_name);
	_g_object_unref0 (self->priv->_error_domain);
	G_OBJECT_CLASS (valadoc_taglets_throws_parent_class)->finalize (obj);
}

static GType
valadoc_taglets_throws_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocTagletsThrowsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_taglets_throws_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocTagletsThrows), 0, (GInstanceInitFunc) valadoc_taglets_throws_instance_init, NULL };
	static const GInterfaceInfo valadoc_content_taglet_info = { (GInterfaceInitFunc) valadoc_taglets_throws_valadoc_content_taglet_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	static const GInterfaceInfo valadoc_content_block_info = { (GInterfaceInitFunc) valadoc_taglets_throws_valadoc_content_block_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType valadoc_taglets_throws_type_id;
	valadoc_taglets_throws_type_id = g_type_register_static (VALADOC_CONTENT_TYPE_BLOCK_CONTENT, "ValadocTagletsThrows", &g_define_type_info, 0);
	g_type_add_interface_static (valadoc_taglets_throws_type_id, VALADOC_CONTENT_TYPE_TAGLET, &valadoc_content_taglet_info);
	g_type_add_interface_static (valadoc_taglets_throws_type_id, VALADOC_CONTENT_TYPE_BLOCK, &valadoc_content_block_info);
	ValadocTagletsThrows_private_offset = g_type_add_instance_private (valadoc_taglets_throws_type_id, sizeof (ValadocTagletsThrowsPrivate));
	return valadoc_taglets_throws_type_id;
}

GType
valadoc_taglets_throws_get_type (void)
{
	static volatile gsize valadoc_taglets_throws_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_taglets_throws_type_id__volatile)) {
		GType valadoc_taglets_throws_type_id;
		valadoc_taglets_throws_type_id = valadoc_taglets_throws_get_type_once ();
		g_once_init_leave (&valadoc_taglets_throws_type_id__volatile, valadoc_taglets_throws_type_id);
	}
	return valadoc_taglets_throws_type_id__volatile;
}

static void
_vala_valadoc_taglets_throws_get_property (GObject * object,
                                           guint property_id,
                                           GValue * value,
                                           GParamSpec * pspec)
{
	ValadocTagletsThrows * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_TAGLETS_TYPE_THROWS, ValadocTagletsThrows);
	switch (property_id) {
		case VALADOC_TAGLETS_THROWS_ERROR_DOMAIN_NAME_PROPERTY:
		g_value_set_string (value, valadoc_taglets_throws_get_error_domain_name (self));
		break;
		case VALADOC_TAGLETS_THROWS_ERROR_DOMAIN_PROPERTY:
		g_value_set_object (value, valadoc_taglets_throws_get_error_domain (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_valadoc_taglets_throws_set_property (GObject * object,
                                           guint property_id,
                                           const GValue * value,
                                           GParamSpec * pspec)
{
	ValadocTagletsThrows * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_TAGLETS_TYPE_THROWS, ValadocTagletsThrows);
	switch (property_id) {
		case VALADOC_TAGLETS_THROWS_ERROR_DOMAIN_NAME_PROPERTY:
		valadoc_taglets_throws_set_error_domain_name (self, g_value_get_string (value));
		break;
		case VALADOC_TAGLETS_THROWS_ERROR_DOMAIN_PROPERTY:
		valadoc_taglets_throws_set_error_domain (self, g_value_get_object (value));
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

