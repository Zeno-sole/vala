/* text.c generated by valac, the Vala compiler
 * generated from text.vala, do not modify */

/* text.vala
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
	VALADOC_CONTENT_TEXT_0_PROPERTY,
	VALADOC_CONTENT_TEXT_CONTENT_PROPERTY,
	VALADOC_CONTENT_TEXT_NUM_PROPERTIES
};
static GParamSpec* valadoc_content_text_properties[VALADOC_CONTENT_TEXT_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValadocContentTextPrivate {
	gchar* _content;
};

static gint ValadocContentText_private_offset;
static gpointer valadoc_content_text_parent_class = NULL;
static ValadocContentInlineIface * valadoc_content_text_valadoc_content_inline_parent_iface = NULL;

 G_GNUC_INTERNAL ValadocContentText* valadoc_content_text_new (const gchar* text);
 G_GNUC_INTERNAL ValadocContentText* valadoc_content_text_construct (GType object_type,
                                                    const gchar* text);
static void valadoc_content_text_real_check (ValadocContentContentElement* base,
                                      ValadocApiTree* api_root,
                                      ValadocApiNode* container,
                                      const gchar* file_path,
                                      ValadocErrorReporter* reporter,
                                      ValadocSettings* settings);
static void valadoc_content_text_real_accept (ValadocContentContentElement* base,
                                       ValadocContentContentVisitor* visitor);
static gboolean valadoc_content_text_real_is_empty (ValadocContentContentElement* base);
static ValadocContentContentElement* valadoc_content_text_real_copy (ValadocContentContentElement* base,
                                                              ValadocContentContentElement* new_parent);
 G_GNUC_INTERNAL void valadoc_content_content_element_set_parent (ValadocContentContentElement* self,
                                                 ValadocContentContentElement* value);
static GObject * valadoc_content_text_constructor (GType type,
                                            guint n_construct_properties,
                                            GObjectConstructParam * construct_properties);
static void valadoc_content_text_finalize (GObject * obj);
static GType valadoc_content_text_get_type_once (void);
static void _vala_valadoc_content_text_get_property (GObject * object,
                                              guint property_id,
                                              GValue * value,
                                              GParamSpec * pspec);
static void _vala_valadoc_content_text_set_property (GObject * object,
                                              guint property_id,
                                              const GValue * value,
                                              GParamSpec * pspec);

static inline gpointer
valadoc_content_text_get_instance_private (ValadocContentText* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocContentText_private_offset);
}

const gchar*
valadoc_content_text_get_content (ValadocContentText* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_content;
	result = _tmp0_;
	return result;
}

void
valadoc_content_text_set_content (ValadocContentText* self,
                                  const gchar* value)
{
	gchar* old_value;
	g_return_if_fail (self != NULL);
	old_value = valadoc_content_text_get_content (self);
	if (g_strcmp0 (value, old_value) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_content);
		self->priv->_content = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_content_text_properties[VALADOC_CONTENT_TEXT_CONTENT_PROPERTY]);
	}
}

 G_GNUC_INTERNAL ValadocContentText*
valadoc_content_text_construct (GType object_type,
                                const gchar* text)
{
	ValadocContentText * self = NULL;
	self = (ValadocContentText*) valadoc_content_content_element_construct (object_type);
	if (text != NULL) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (text);
		_g_free0 (self->priv->_content);
		self->priv->_content = _tmp0_;
	}
	return self;
}

 G_GNUC_INTERNAL ValadocContentText*
valadoc_content_text_new (const gchar* text)
{
	return valadoc_content_text_construct (VALADOC_CONTENT_TYPE_TEXT, text);
}

static void
valadoc_content_text_real_check (ValadocContentContentElement* base,
                                 ValadocApiTree* api_root,
                                 ValadocApiNode* container,
                                 const gchar* file_path,
                                 ValadocErrorReporter* reporter,
                                 ValadocSettings* settings)
{
	ValadocContentText * self;
	self = (ValadocContentText*) base;
	g_return_if_fail (api_root != NULL);
	g_return_if_fail (container != NULL);
	g_return_if_fail (file_path != NULL);
	g_return_if_fail (reporter != NULL);
	g_return_if_fail (settings != NULL);
}

static void
valadoc_content_text_real_accept (ValadocContentContentElement* base,
                                  ValadocContentContentVisitor* visitor)
{
	ValadocContentText * self;
	self = (ValadocContentText*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_content_content_visitor_visit_text (visitor, self);
}

static gboolean
valadoc_content_text_real_is_empty (ValadocContentContentElement* base)
{
	ValadocContentText * self;
	const gchar* _tmp0_;
	gboolean result;
	self = (ValadocContentText*) base;
	_tmp0_ = self->priv->_content;
	result = g_strcmp0 (_tmp0_, "") == 0;
	return result;
}

static ValadocContentContentElement*
valadoc_content_text_real_copy (ValadocContentContentElement* base,
                                ValadocContentContentElement* new_parent)
{
	ValadocContentText * self;
	ValadocContentText* text = NULL;
	const gchar* _tmp0_;
	ValadocContentText* _tmp1_;
	ValadocContentContentElement* result;
	self = (ValadocContentText*) base;
	_tmp0_ = self->priv->_content;
	_tmp1_ = valadoc_content_text_new (_tmp0_);
	text = _tmp1_;
	valadoc_content_content_element_set_parent ((ValadocContentContentElement*) text, new_parent);
	result = (ValadocContentContentElement*) text;
	return result;
}

static GObject *
valadoc_content_text_constructor (GType type,
                                  guint n_construct_properties,
                                  GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	ValadocContentText * self;
	gchar* _tmp0_;
	parent_class = G_OBJECT_CLASS (valadoc_content_text_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_CONTENT_TYPE_TEXT, ValadocContentText);
	_tmp0_ = g_strdup ("");
	_g_free0 (self->priv->_content);
	self->priv->_content = _tmp0_;
	return obj;
}

static void
valadoc_content_text_class_init (ValadocContentTextClass * klass,
                                 gpointer klass_data)
{
	valadoc_content_text_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocContentText_private_offset);
	((ValadocContentContentElementClass *) klass)->check = (void (*) (ValadocContentContentElement*, ValadocApiTree*, ValadocApiNode*, const gchar*, ValadocErrorReporter*, ValadocSettings*)) valadoc_content_text_real_check;
	((ValadocContentContentElementClass *) klass)->accept = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_content_text_real_accept;
	((ValadocContentContentElementClass *) klass)->is_empty = (gboolean (*) (ValadocContentContentElement*)) valadoc_content_text_real_is_empty;
	((ValadocContentContentElementClass *) klass)->copy = (ValadocContentContentElement* (*) (ValadocContentContentElement*, ValadocContentContentElement*)) valadoc_content_text_real_copy;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_content_text_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_valadoc_content_text_set_property;
	G_OBJECT_CLASS (klass)->constructor = valadoc_content_text_constructor;
	G_OBJECT_CLASS (klass)->finalize = valadoc_content_text_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_TEXT_CONTENT_PROPERTY, valadoc_content_text_properties[VALADOC_CONTENT_TEXT_CONTENT_PROPERTY] = g_param_spec_string ("content", "content", "content", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
}

static void
valadoc_content_text_valadoc_content_inline_interface_init (ValadocContentInlineIface * iface,
                                                            gpointer iface_data)
{
	valadoc_content_text_valadoc_content_inline_parent_iface = g_type_interface_peek_parent (iface);
}

static void
valadoc_content_text_instance_init (ValadocContentText * self,
                                    gpointer klass)
{
	self->priv = valadoc_content_text_get_instance_private (self);
}

static void
valadoc_content_text_finalize (GObject * obj)
{
	ValadocContentText * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_CONTENT_TYPE_TEXT, ValadocContentText);
	_g_free0 (self->priv->_content);
	G_OBJECT_CLASS (valadoc_content_text_parent_class)->finalize (obj);
}

static GType
valadoc_content_text_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocContentTextClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_content_text_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocContentText), 0, (GInstanceInitFunc) valadoc_content_text_instance_init, NULL };
	static const GInterfaceInfo valadoc_content_inline_info = { (GInterfaceInitFunc) valadoc_content_text_valadoc_content_inline_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType valadoc_content_text_type_id;
	valadoc_content_text_type_id = g_type_register_static (VALADOC_CONTENT_TYPE_CONTENT_ELEMENT, "ValadocContentText", &g_define_type_info, 0);
	g_type_add_interface_static (valadoc_content_text_type_id, VALADOC_CONTENT_TYPE_INLINE, &valadoc_content_inline_info);
	ValadocContentText_private_offset = g_type_add_instance_private (valadoc_content_text_type_id, sizeof (ValadocContentTextPrivate));
	return valadoc_content_text_type_id;
}

GType
valadoc_content_text_get_type (void)
{
	static volatile gsize valadoc_content_text_type_id__once = 0;
	if (g_once_init_enter (&valadoc_content_text_type_id__once)) {
		GType valadoc_content_text_type_id;
		valadoc_content_text_type_id = valadoc_content_text_get_type_once ();
		g_once_init_leave (&valadoc_content_text_type_id__once, valadoc_content_text_type_id);
	}
	return valadoc_content_text_type_id__once;
}

static void
_vala_valadoc_content_text_get_property (GObject * object,
                                         guint property_id,
                                         GValue * value,
                                         GParamSpec * pspec)
{
	ValadocContentText * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_TEXT, ValadocContentText);
	switch (property_id) {
		case VALADOC_CONTENT_TEXT_CONTENT_PROPERTY:
		g_value_set_string (value, valadoc_content_text_get_content (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_valadoc_content_text_set_property (GObject * object,
                                         guint property_id,
                                         const GValue * value,
                                         GParamSpec * pspec)
{
	ValadocContentText * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_TEXT, ValadocContentText);
	switch (property_id) {
		case VALADOC_CONTENT_TEXT_CONTENT_PROPERTY:
		valadoc_content_text_set_content (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

