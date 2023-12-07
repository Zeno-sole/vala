/* valaattribute.c generated by valac, the Vala compiler
 * generated from valaattribute.vala, do not modify */

/* valaattribute.vala
 *
 * Copyright (C) 2006-2008  Jürg Billeter
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 */

#include "vala.h"
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <valagee.h>
#include <glib-object.h>
#include <float.h>
#include <math.h>

#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_map_unref0(var) ((var == NULL) ? NULL : (var = (vala_map_unref (var), NULL)))
#define _vala_code_context_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_context_unref (var), NULL)))

struct _ValaAttributePrivate {
	gchar* _name;
	ValaMap* _args;
};

static gint ValaAttribute_private_offset;
static gpointer vala_attribute_parent_class = NULL;

static void vala_attribute_set_name (ValaAttribute* self,
                              const gchar* value);
static void vala_attribute_set_args (ValaAttribute* self,
                              ValaMap* value);
static void vala_attribute_finalize (ValaCodeNode * obj);
static GType vala_attribute_get_type_once (void);

static inline gpointer
vala_attribute_get_instance_private (ValaAttribute* self)
{
	return G_STRUCT_MEMBER_P (self, ValaAttribute_private_offset);
}

const gchar*
vala_attribute_get_name (ValaAttribute* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}

static void
vala_attribute_set_name (ValaAttribute* self,
                         const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
}

ValaMap*
vala_attribute_get_args (ValaAttribute* self)
{
	ValaMap* result;
	ValaMap* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_args;
	result = _tmp0_;
	return result;
}

static gpointer
_vala_map_ref0 (gpointer self)
{
	return self ? vala_map_ref (self) : NULL;
}

static void
vala_attribute_set_args (ValaAttribute* self,
                         ValaMap* value)
{
	ValaMap* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_map_ref0 (value);
	_vala_map_unref0 (self->priv->_args);
	self->priv->_args = _tmp0_;
}

/**
 * Creates a new attribute.
 *
 * @param name             attribute type name
 * @param source_reference reference to source code
 * @return                 newly created attribute
 */
ValaAttribute*
vala_attribute_construct (GType object_type,
                          const gchar* name,
                          ValaSourceReference* source_reference)
{
	ValaAttribute* self = NULL;
	GHashFunc _tmp0_;
	GEqualFunc _tmp1_;
	GEqualFunc _tmp2_;
	ValaHashMap* _tmp3_;
	ValaHashMap* _tmp4_;
	ValaCodeContext* _tmp5_;
	ValaCodeContext* _tmp6_;
	gboolean _tmp7_;
	gboolean _tmp8_;
	gboolean _tmp9_;
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValaAttribute*) vala_code_node_construct (object_type);
	vala_attribute_set_name (self, name);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	_tmp0_ = g_str_hash;
	_tmp1_ = g_str_equal;
	_tmp2_ = g_direct_equal;
	_tmp3_ = vala_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, _tmp0_, _tmp1_, _tmp2_);
	_tmp4_ = _tmp3_;
	vala_attribute_set_args (self, (ValaMap*) _tmp4_);
	_vala_map_unref0 (_tmp4_);
	_tmp5_ = vala_code_context_get ();
	_tmp6_ = _tmp5_;
	_tmp7_ = vala_code_context_get_deprecated (_tmp6_);
	_tmp8_ = _tmp7_;
	_tmp9_ = !_tmp8_;
	_vala_code_context_unref0 (_tmp6_);
	if (_tmp9_) {
		if (g_strcmp0 (name, "Deprecated") == 0) {
			vala_report_deprecated (source_reference, "[Deprecated] is deprecated. Use [Version (deprecated = true, deprecate" \
"d_since = \"\", replacement = \"\")]");
		} else {
			if (g_strcmp0 (name, "Experimental") == 0) {
				vala_report_deprecated (source_reference, "[Experimental] is deprecated. Use [Version (experimental = true, exper" \
"imental_until = \"\")]");
			}
		}
	}
	return self;
}

ValaAttribute*
vala_attribute_new (const gchar* name,
                    ValaSourceReference* source_reference)
{
	return vala_attribute_construct (VALA_TYPE_ATTRIBUTE, name, source_reference);
}

/**
 * Adds an attribute argument.
 *
 * @param key    argument name
 * @param value  argument value
 */
void
vala_attribute_add_argument (ValaAttribute* self,
                             const gchar* key,
                             const gchar* value)
{
	ValaMap* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	g_return_if_fail (value != NULL);
	_tmp0_ = self->priv->_args;
	vala_map_set (_tmp0_, key, value);
}

/**
 * Returns whether this attribute has the specified named argument.
 *
 * @param name argument name
 * @return     true if the argument has been found, false otherwise
 */
gboolean
vala_attribute_has_argument (ValaAttribute* self,
                             const gchar* name)
{
	ValaMap* _tmp0_;
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (name != NULL, FALSE);
	_tmp0_ = self->priv->_args;
	result = vala_map_contains (_tmp0_, name);
	return result;
}

/**
 * Returns the string value of the specified named argument.
 *
 * @param name argument name
 * @return     string value
 */
static glong
string_strnlen (gchar* str,
                glong maxlen)
{
	gchar* end = NULL;
	gchar* _tmp0_;
	gchar* _tmp1_;
	glong result;
	_tmp0_ = memchr (str, 0, (gsize) maxlen);
	end = _tmp0_;
	_tmp1_ = end;
	if (_tmp1_ == NULL) {
		result = maxlen;
		return result;
	} else {
		gchar* _tmp2_;
		_tmp2_ = end;
		result = (glong) (_tmp2_ - str);
		return result;
	}
}

static gchar*
string_substring (const gchar* self,
                  glong offset,
                  glong len)
{
	glong string_length = 0L;
	gboolean _tmp0_ = FALSE;
	gchar* _tmp3_;
	gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	if (offset >= ((glong) 0)) {
		_tmp0_ = len >= ((glong) 0);
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		string_length = string_strnlen ((gchar*) self, offset + len);
	} else {
		gint _tmp1_;
		gint _tmp2_;
		_tmp1_ = strlen (self);
		_tmp2_ = _tmp1_;
		string_length = (glong) _tmp2_;
	}
	if (offset < ((glong) 0)) {
		offset = string_length + offset;
		g_return_val_if_fail (offset >= ((glong) 0), NULL);
	} else {
		g_return_val_if_fail (offset <= string_length, NULL);
	}
	if (len < ((glong) 0)) {
		len = string_length - offset;
	}
	g_return_val_if_fail ((offset + len) <= string_length, NULL);
	_tmp3_ = g_strndup (((gchar*) self) + offset, (gsize) len);
	result = _tmp3_;
	return result;
}

gchar*
vala_attribute_get_string (ValaAttribute* self,
                           const gchar* name,
                           const gchar* default_value)
{
	gchar* value = NULL;
	ValaMap* _tmp0_;
	gpointer _tmp1_;
	const gchar* _tmp2_;
	gchar* noquotes = NULL;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	gint _tmp6_;
	gint _tmp7_;
	gchar* _tmp8_;
	const gchar* _tmp9_;
	gchar* _tmp10_;
	gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = self->priv->_args;
	_tmp1_ = vala_map_get (_tmp0_, name);
	value = (gchar*) _tmp1_;
	_tmp2_ = value;
	if (_tmp2_ == NULL) {
		gchar* _tmp3_;
		_tmp3_ = g_strdup (default_value);
		result = _tmp3_;
		_g_free0 (value);
		return result;
	}
	_tmp4_ = value;
	_tmp5_ = value;
	_tmp6_ = strlen (_tmp5_);
	_tmp7_ = _tmp6_;
	_tmp8_ = string_substring (_tmp4_, (glong) 1, (glong) ((guint) (_tmp7_ - 2)));
	noquotes = _tmp8_;
	_tmp9_ = noquotes;
	_tmp10_ = g_strcompress (_tmp9_);
	result = _tmp10_;
	_g_free0 (noquotes);
	_g_free0 (value);
	return result;
}

/**
 * Returns the integer value of the specified named argument.
 *
 * @param name argument name
 * @return     integer value
 */
gint
vala_attribute_get_integer (ValaAttribute* self,
                            const gchar* name,
                            gint default_value)
{
	gchar* value = NULL;
	ValaMap* _tmp0_;
	gpointer _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (name != NULL, 0);
	_tmp0_ = self->priv->_args;
	_tmp1_ = vala_map_get (_tmp0_, name);
	value = (gchar*) _tmp1_;
	_tmp2_ = value;
	if (_tmp2_ == NULL) {
		result = default_value;
		_g_free0 (value);
		return result;
	}
	_tmp3_ = value;
	result = atoi (_tmp3_);
	_g_free0 (value);
	return result;
}

/**
 * Returns the double value of the specified named argument.
 *
 * @param name argument name
 * @return     double value
 */
static gdouble
double_parse (const gchar* str)
{
	gdouble result;
	g_return_val_if_fail (str != NULL, 0.0);
	result = g_ascii_strtod (str, NULL);
	return result;
}

gdouble
vala_attribute_get_double (ValaAttribute* self,
                           const gchar* name,
                           gdouble default_value)
{
	gchar* value = NULL;
	ValaMap* _tmp0_;
	gpointer _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	gdouble result;
	g_return_val_if_fail (self != NULL, 0.0);
	g_return_val_if_fail (name != NULL, 0.0);
	_tmp0_ = self->priv->_args;
	_tmp1_ = vala_map_get (_tmp0_, name);
	value = (gchar*) _tmp1_;
	_tmp2_ = value;
	if (_tmp2_ == NULL) {
		result = default_value;
		_g_free0 (value);
		return result;
	}
	_tmp3_ = value;
	result = double_parse (_tmp3_);
	_g_free0 (value);
	return result;
}

/**
 * Returns the boolean value of the specified named argument.
 *
 * @param name argument name
 * @return     boolean value
 */
static gboolean
bool_parse (const gchar* str)
{
	gboolean result;
	g_return_val_if_fail (str != NULL, FALSE);
	if (g_strcmp0 (str, "true") == 0) {
		result = TRUE;
		return result;
	} else {
		result = FALSE;
		return result;
	}
}

gboolean
vala_attribute_get_bool (ValaAttribute* self,
                         const gchar* name,
                         gboolean default_value)
{
	gchar* value = NULL;
	ValaMap* _tmp0_;
	gpointer _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (name != NULL, FALSE);
	_tmp0_ = self->priv->_args;
	_tmp1_ = vala_map_get (_tmp0_, name);
	value = (gchar*) _tmp1_;
	_tmp2_ = value;
	if (_tmp2_ == NULL) {
		result = default_value;
		_g_free0 (value);
		return result;
	}
	_tmp3_ = value;
	result = bool_parse (_tmp3_);
	_g_free0 (value);
	return result;
}

static void
vala_attribute_class_init (ValaAttributeClass * klass,
                           gpointer klass_data)
{
	vala_attribute_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_attribute_finalize;
	g_type_class_adjust_private_offset (klass, &ValaAttribute_private_offset);
}

static void
vala_attribute_instance_init (ValaAttribute * self,
                              gpointer klass)
{
	self->priv = vala_attribute_get_instance_private (self);
}

static void
vala_attribute_finalize (ValaCodeNode * obj)
{
	ValaAttribute * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_ATTRIBUTE, ValaAttribute);
	_g_free0 (self->priv->_name);
	_vala_map_unref0 (self->priv->_args);
	VALA_CODE_NODE_CLASS (vala_attribute_parent_class)->finalize (obj);
}

/**
 * Represents an attribute specified in the source code.
 */
static GType
vala_attribute_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaAttributeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_attribute_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaAttribute), 0, (GInstanceInitFunc) vala_attribute_instance_init, NULL };
	GType vala_attribute_type_id;
	vala_attribute_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaAttribute", &g_define_type_info, 0);
	ValaAttribute_private_offset = g_type_add_instance_private (vala_attribute_type_id, sizeof (ValaAttributePrivate));
	return vala_attribute_type_id;
}

GType
vala_attribute_get_type (void)
{
	static volatile gsize vala_attribute_type_id__once = 0;
	if (g_once_init_enter (&vala_attribute_type_id__once)) {
		GType vala_attribute_type_id;
		vala_attribute_type_id = vala_attribute_get_type_once ();
		g_once_init_leave (&vala_attribute_type_id__once, vala_attribute_type_id);
	}
	return vala_attribute_type_id__once;
}

