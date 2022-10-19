/* tagletsince.c generated by valac, the Vala compiler
 * generated from tagletsince.vala, do not modify */

/* tagletsince.vala
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

enum  {
	VALADOC_TAGLETS_SINCE_0_PROPERTY,
	VALADOC_TAGLETS_SINCE_VERSION_PROPERTY,
	VALADOC_TAGLETS_SINCE_NUM_PROPERTIES
};
static GParamSpec* valadoc_taglets_since_properties[VALADOC_TAGLETS_SINCE_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ValadocTagletsSincePrivate {
	gchar* _version;
};

static gint ValadocTagletsSince_private_offset;
static gpointer valadoc_taglets_since_parent_class = NULL;
static ValadocContentTagletIface * valadoc_taglets_since_valadoc_content_taglet_parent_iface = NULL;
static ValadocContentBlockIface * valadoc_taglets_since_valadoc_content_block_parent_iface = NULL;

 G_GNUC_INTERNAL void valadoc_taglets_since_set_version (ValadocTagletsSince* self,
                                        const gchar* value);
static ValadocRule* valadoc_taglets_since_real_get_parser_rule (ValadocContentTaglet* base,
                                                         ValadocRule* run_rule);
static void __lambda129_ (ValadocTagletsSince* self,
                   ValadocToken* token,
                   GError** error);
static void ___lambda129__valadoc_token_type_action (ValadocToken* token,
                                              gpointer self,
                                              GError** error);
static void valadoc_taglets_since_real_check (ValadocContentContentElement* base,
                                       ValadocApiTree* api_root,
                                       ValadocApiNode* container,
                                       const gchar* file_path,
                                       ValadocErrorReporter* reporter,
                                       ValadocSettings* settings);
static void valadoc_taglets_since_real_accept (ValadocContentContentElement* base,
                                        ValadocContentContentVisitor* visitor);
static gboolean valadoc_taglets_since_real_is_empty (ValadocContentContentElement* base);
static ValadocContentContentElement* valadoc_taglets_since_real_copy (ValadocContentContentElement* base,
                                                               ValadocContentContentElement* new_parent);
 G_GNUC_INTERNAL void valadoc_content_content_element_set_parent (ValadocContentContentElement* self,
                                                 ValadocContentContentElement* value);
static void valadoc_taglets_since_finalize (GObject * obj);
static GType valadoc_taglets_since_get_type_once (void);
static void _vala_valadoc_taglets_since_get_property (GObject * object,
                                               guint property_id,
                                               GValue * value,
                                               GParamSpec * pspec);
static void _vala_valadoc_taglets_since_set_property (GObject * object,
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
valadoc_taglets_since_get_instance_private (ValadocTagletsSince* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocTagletsSince_private_offset);
}

const gchar*
valadoc_taglets_since_get_version (ValadocTagletsSince* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_version;
	result = _tmp0_;
	return result;
}

 G_GNUC_INTERNAL void
valadoc_taglets_since_set_version (ValadocTagletsSince* self,
                                   const gchar* value)
{
	gchar* old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_taglets_since_get_version (self);
	if (g_strcmp0 (value, old_value) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_version);
		self->priv->_version = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_taglets_since_properties[VALADOC_TAGLETS_SINCE_VERSION_PROPERTY]);
	}
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static void
__lambda129_ (ValadocTagletsSince* self,
              ValadocToken* token,
              GError** error)
{
	const gchar* _tmp0_;
	g_return_if_fail (token != NULL);
	_tmp0_ = valadoc_token_to_string (token);
	valadoc_taglets_since_set_version (self, _tmp0_);
}

static void
___lambda129__valadoc_token_type_action (ValadocToken* token,
                                         gpointer self,
                                         GError** error)
{
	__lambda129_ ((ValadocTagletsSince*) self, token, error);
}

static ValadocRule*
valadoc_taglets_since_real_get_parser_rule (ValadocContentTaglet* base,
                                            ValadocRule* run_rule)
{
	ValadocTagletsSince * self;
	ValadocRule* optional_spaces = NULL;
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
	ValadocRule* _tmp8_;
	GObject* _tmp9_;
	ValadocTokenType* _tmp10_;
	ValadocTokenType* _tmp11_;
	ValadocTokenType* _tmp12_;
	GObject* _tmp13_;
	GObject** _tmp14_;
	GObject** _tmp15_;
	gint _tmp15__length1;
	ValadocRule* _tmp16_;
	ValadocRule* _tmp17_;
	ValadocRule* result = NULL;
	self = (ValadocTagletsSince*) base;
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
	_tmp8_ = _tmp7_;
	_tmp6_ = (_vala_array_free (_tmp6_, _tmp6__length1, (GDestroyNotify) g_object_unref), NULL);
	_tmp3_ = (_vala_array_free (_tmp3_, _tmp3__length1, (GDestroyNotify) g_object_unref), NULL);
	optional_spaces = _tmp8_;
	_tmp9_ = _g_object_ref0 ((GObject*) optional_spaces);
	_tmp10_ = valadoc_token_type_any_word ();
	_tmp11_ = _tmp10_;
	_tmp12_ = valadoc_token_type_action (_tmp11_, ___lambda129__valadoc_token_type_action, self);
	_tmp13_ = _g_object_ref0 ((GObject*) optional_spaces);
	_tmp14_ = g_new0 (GObject*, 3 + 1);
	_tmp14_[0] = _tmp9_;
	_tmp14_[1] = (GObject*) _tmp12_;
	_tmp14_[2] = _tmp13_;
	_tmp15_ = _tmp14_;
	_tmp15__length1 = 3;
	_tmp16_ = valadoc_rule_seq (_tmp15_, (gint) 3);
	_tmp17_ = _tmp16_;
	_tmp15_ = (_vala_array_free (_tmp15_, _tmp15__length1, (GDestroyNotify) g_object_unref), NULL);
	_g_object_unref0 (_tmp11_);
	result = _tmp17_;
	_g_object_unref0 (optional_spaces);
	return result;
}

static void
valadoc_taglets_since_real_check (ValadocContentContentElement* base,
                                  ValadocApiTree* api_root,
                                  ValadocApiNode* container,
                                  const gchar* file_path,
                                  ValadocErrorReporter* reporter,
                                  ValadocSettings* settings)
{
	ValadocTagletsSince * self;
	self = (ValadocTagletsSince*) base;
	g_return_if_fail (api_root != NULL);
	g_return_if_fail (container != NULL);
	g_return_if_fail (file_path != NULL);
	g_return_if_fail (reporter != NULL);
	g_return_if_fail (settings != NULL);
}

static void
valadoc_taglets_since_real_accept (ValadocContentContentElement* base,
                                   ValadocContentContentVisitor* visitor)
{
	ValadocTagletsSince * self;
	self = (ValadocTagletsSince*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_content_content_visitor_visit_taglet (visitor, (ValadocContentTaglet*) self);
}

static gboolean
valadoc_taglets_since_real_is_empty (ValadocContentContentElement* base)
{
	ValadocTagletsSince * self;
	gboolean result = FALSE;
	self = (ValadocTagletsSince*) base;
	result = FALSE;
	return result;
}

static ValadocContentContentElement*
valadoc_taglets_since_real_copy (ValadocContentContentElement* base,
                                 ValadocContentContentElement* new_parent)
{
	ValadocTagletsSince * self;
	ValadocTagletsSince* since = NULL;
	ValadocTagletsSince* _tmp0_;
	const gchar* _tmp1_;
	ValadocContentContentElement* result = NULL;
	self = (ValadocTagletsSince*) base;
	_tmp0_ = valadoc_taglets_since_new ();
	since = _tmp0_;
	valadoc_content_content_element_set_parent ((ValadocContentContentElement*) since, new_parent);
	_tmp1_ = self->priv->_version;
	valadoc_taglets_since_set_version (since, _tmp1_);
	result = (ValadocContentContentElement*) since;
	return result;
}

ValadocTagletsSince*
valadoc_taglets_since_construct (GType object_type)
{
	ValadocTagletsSince * self = NULL;
	self = (ValadocTagletsSince*) valadoc_content_content_element_construct (object_type);
	return self;
}

ValadocTagletsSince*
valadoc_taglets_since_new (void)
{
	return valadoc_taglets_since_construct (VALADOC_TAGLETS_TYPE_SINCE);
}

static void
valadoc_taglets_since_class_init (ValadocTagletsSinceClass * klass,
                                  gpointer klass_data)
{
	valadoc_taglets_since_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocTagletsSince_private_offset);
	((ValadocContentContentElementClass *) klass)->check = (void (*) (ValadocContentContentElement*, ValadocApiTree*, ValadocApiNode*, const gchar*, ValadocErrorReporter*, ValadocSettings*)) valadoc_taglets_since_real_check;
	((ValadocContentContentElementClass *) klass)->accept = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_taglets_since_real_accept;
	((ValadocContentContentElementClass *) klass)->is_empty = (gboolean (*) (ValadocContentContentElement*)) valadoc_taglets_since_real_is_empty;
	((ValadocContentContentElementClass *) klass)->copy = (ValadocContentContentElement* (*) (ValadocContentContentElement*, ValadocContentContentElement*)) valadoc_taglets_since_real_copy;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_taglets_since_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_valadoc_taglets_since_set_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_taglets_since_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_TAGLETS_SINCE_VERSION_PROPERTY, valadoc_taglets_since_properties[VALADOC_TAGLETS_SINCE_VERSION_PROPERTY] = g_param_spec_string ("version", "version", "version", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
}

static void
valadoc_taglets_since_valadoc_content_taglet_interface_init (ValadocContentTagletIface * iface,
                                                             gpointer iface_data)
{
	valadoc_taglets_since_valadoc_content_taglet_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_parser_rule = (ValadocRule* (*) (ValadocContentTaglet*, ValadocRule*)) valadoc_taglets_since_real_get_parser_rule;
}

static void
valadoc_taglets_since_valadoc_content_block_interface_init (ValadocContentBlockIface * iface,
                                                            gpointer iface_data)
{
	valadoc_taglets_since_valadoc_content_block_parent_iface = g_type_interface_peek_parent (iface);
}

static void
valadoc_taglets_since_instance_init (ValadocTagletsSince * self,
                                     gpointer klass)
{
	self->priv = valadoc_taglets_since_get_instance_private (self);
}

static void
valadoc_taglets_since_finalize (GObject * obj)
{
	ValadocTagletsSince * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_TAGLETS_TYPE_SINCE, ValadocTagletsSince);
	_g_free0 (self->priv->_version);
	G_OBJECT_CLASS (valadoc_taglets_since_parent_class)->finalize (obj);
}

static GType
valadoc_taglets_since_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocTagletsSinceClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_taglets_since_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocTagletsSince), 0, (GInstanceInitFunc) valadoc_taglets_since_instance_init, NULL };
	static const GInterfaceInfo valadoc_content_taglet_info = { (GInterfaceInitFunc) valadoc_taglets_since_valadoc_content_taglet_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	static const GInterfaceInfo valadoc_content_block_info = { (GInterfaceInitFunc) valadoc_taglets_since_valadoc_content_block_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType valadoc_taglets_since_type_id;
	valadoc_taglets_since_type_id = g_type_register_static (VALADOC_CONTENT_TYPE_CONTENT_ELEMENT, "ValadocTagletsSince", &g_define_type_info, 0);
	g_type_add_interface_static (valadoc_taglets_since_type_id, VALADOC_CONTENT_TYPE_TAGLET, &valadoc_content_taglet_info);
	g_type_add_interface_static (valadoc_taglets_since_type_id, VALADOC_CONTENT_TYPE_BLOCK, &valadoc_content_block_info);
	ValadocTagletsSince_private_offset = g_type_add_instance_private (valadoc_taglets_since_type_id, sizeof (ValadocTagletsSincePrivate));
	return valadoc_taglets_since_type_id;
}

GType
valadoc_taglets_since_get_type (void)
{
	static volatile gsize valadoc_taglets_since_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_taglets_since_type_id__volatile)) {
		GType valadoc_taglets_since_type_id;
		valadoc_taglets_since_type_id = valadoc_taglets_since_get_type_once ();
		g_once_init_leave (&valadoc_taglets_since_type_id__volatile, valadoc_taglets_since_type_id);
	}
	return valadoc_taglets_since_type_id__volatile;
}

static void
_vala_valadoc_taglets_since_get_property (GObject * object,
                                          guint property_id,
                                          GValue * value,
                                          GParamSpec * pspec)
{
	ValadocTagletsSince * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_TAGLETS_TYPE_SINCE, ValadocTagletsSince);
	switch (property_id) {
		case VALADOC_TAGLETS_SINCE_VERSION_PROPERTY:
		g_value_set_string (value, valadoc_taglets_since_get_version (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_valadoc_taglets_since_set_property (GObject * object,
                                          guint property_id,
                                          const GValue * value,
                                          GParamSpec * pspec)
{
	ValadocTagletsSince * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_TAGLETS_TYPE_SINCE, ValadocTagletsSince);
	switch (property_id) {
		case VALADOC_TAGLETS_SINCE_VERSION_PROPERTY:
		valadoc_taglets_since_set_version (self, g_value_get_string (value));
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

