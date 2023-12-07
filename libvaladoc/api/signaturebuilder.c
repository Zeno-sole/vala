/* signaturebuilder.c generated by valac, the Vala compiler
 * generated from signaturebuilder.vala, do not modify */

/* signaturebuilder.vala
 *
 * Copyright (C) 2008-2009 Florian Brosch, Didier Villevalois
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
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <valagee.h>
#include <gobject/gvaluecollector.h>

#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _ValadocApiParamSpecSignatureBuilder ValadocApiParamSpecSignatureBuilder;

struct _ValadocApiSignatureBuilderPrivate {
	ValadocContentRun* run;
	ValadocContentInline* last_appended;
};

struct _ValadocApiParamSpecSignatureBuilder {
	GParamSpec parent_instance;
};

static gint ValadocApiSignatureBuilder_private_offset;
static gpointer valadoc_api_signature_builder_parent_class = NULL;

 G_GNUC_INTERNAL ValadocContentRun* valadoc_content_run_new (ValadocContentRunStyle style);
 G_GNUC_INTERNAL ValadocContentRun* valadoc_content_run_construct (GType object_type,
                                                  ValadocContentRunStyle style);
static void valadoc_api_signature_builder_append_text (ValadocApiSignatureBuilder* self,
                                                const gchar* text);
 G_GNUC_INTERNAL ValadocContentText* valadoc_content_text_new (const gchar* text);
 G_GNUC_INTERNAL ValadocContentText* valadoc_content_text_construct (GType object_type,
                                                    const gchar* text);
 G_GNUC_INTERNAL ValadocContentSymbolLink* valadoc_content_symbol_link_new (ValadocApiNode* symbol,
                                                           const gchar* given_symbol_name);
 G_GNUC_INTERNAL ValadocContentSymbolLink* valadoc_content_symbol_link_construct (GType object_type,
                                                                 ValadocApiNode* symbol,
                                                                 const gchar* given_symbol_name);
static void valadoc_api_signature_builder_finalize (ValadocApiSignatureBuilder * obj);
static GType valadoc_api_signature_builder_get_type_once (void);

static inline gpointer
valadoc_api_signature_builder_get_instance_private (ValadocApiSignatureBuilder* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocApiSignatureBuilder_private_offset);
}

/**
 * Creates a new SignatureBuilder
 */
ValadocApiSignatureBuilder*
valadoc_api_signature_builder_construct (GType object_type)
{
	ValadocApiSignatureBuilder* self = NULL;
	ValadocContentRun* _tmp0_;
	self = (ValadocApiSignatureBuilder*) g_type_create_instance (object_type);
	_tmp0_ = valadoc_content_run_new (VALADOC_CONTENT_RUN_STYLE_NONE);
	_g_object_unref0 (self->priv->run);
	self->priv->run = _tmp0_;
	return self;
}

ValadocApiSignatureBuilder*
valadoc_api_signature_builder_new (void)
{
	return valadoc_api_signature_builder_construct (VALADOC_API_TYPE_SIGNATURE_BUILDER);
}

static void
valadoc_api_signature_builder_append_text (ValadocApiSignatureBuilder* self,
                                           const gchar* text)
{
	ValadocContentInline* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (text != NULL);
	_tmp0_ = self->priv->last_appended;
	if (VALADOC_CONTENT_IS_TEXT (_tmp0_)) {
		ValadocContentInline* _tmp1_;
		ValadocContentInline* _tmp2_;
		const gchar* _tmp3_;
		const gchar* _tmp4_;
		gchar* _tmp5_;
		gchar* _tmp6_;
		_tmp1_ = self->priv->last_appended;
		_tmp2_ = self->priv->last_appended;
		_tmp3_ = valadoc_content_text_get_content (G_TYPE_CHECK_INSTANCE_CAST (_tmp2_, VALADOC_CONTENT_TYPE_TEXT, ValadocContentText));
		_tmp4_ = _tmp3_;
		_tmp5_ = g_strconcat (_tmp4_, text, NULL);
		_tmp6_ = _tmp5_;
		valadoc_content_text_set_content (G_TYPE_CHECK_INSTANCE_CAST (_tmp2_, VALADOC_CONTENT_TYPE_TEXT, ValadocContentText), _tmp6_);
		_g_free0 (_tmp6_);
	} else {
		ValadocContentRun* _tmp7_;
		ValaList* _tmp8_;
		ValaList* _tmp9_;
		ValadocContentText* _tmp10_;
		ValadocContentInline* _tmp11_;
		_tmp7_ = self->priv->run;
		_tmp8_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) _tmp7_);
		_tmp9_ = _tmp8_;
		_tmp10_ = valadoc_content_text_new (text);
		_g_object_unref0 (self->priv->last_appended);
		self->priv->last_appended = (ValadocContentInline*) _tmp10_;
		_tmp11_ = self->priv->last_appended;
		vala_collection_add ((ValaCollection*) _tmp9_, _tmp11_);
	}
}

/**
 * Adds text onto the end of the builder.
 *
 * @param text a string
 * @param spaced add a space at the front of the string if necessary
 * @return this
 */
ValadocApiSignatureBuilder*
valadoc_api_signature_builder_append (ValadocApiSignatureBuilder* self,
                                      const gchar* text,
                                      gboolean spaced)
{
	const gchar* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	ValadocContentInline* _tmp2_;
	gchar* content = NULL;
	gchar* _tmp3_;
	ValadocApiSignatureBuilder* result;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (text != NULL, NULL);
	_tmp2_ = self->priv->last_appended;
	if (_tmp2_ != NULL) {
		_tmp1_ = spaced;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		_tmp0_ = " ";
	} else {
		_tmp0_ = "";
	}
	_tmp3_ = g_strconcat (_tmp0_, text, NULL);
	content = _tmp3_;
	valadoc_api_signature_builder_append_text (self, content);
	result = self;
	_g_free0 (content);
	return result;
}

/**
 * Adds text onto the end of the builder.
 *
 * @param text a string
 * @param spaced add a space at the front of the string if necessary
 * @return this
 */
ValadocApiSignatureBuilder*
valadoc_api_signature_builder_append_attribute (ValadocApiSignatureBuilder* self,
                                                const gchar* text,
                                                gboolean spaced)
{
	const gchar* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	ValadocContentInline* _tmp2_;
	gchar* content = NULL;
	gchar* _tmp3_;
	ValadocApiSignatureBuilder* result;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (text != NULL, NULL);
	_tmp2_ = self->priv->last_appended;
	if (_tmp2_ != NULL) {
		_tmp1_ = spaced;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		_tmp0_ = " ";
	} else {
		_tmp0_ = "";
	}
	_tmp3_ = g_strconcat (_tmp0_, text, NULL);
	content = _tmp3_;
	valadoc_api_signature_builder_append_text (self, content);
	result = self;
	_g_free0 (content);
	return result;
}

/**
 * Adds highlighted text onto the end of the builder.
 *
 * @param text a string
 * @param spaced add a space at the front of the string if necessary
 * @return this
 */
ValadocApiSignatureBuilder*
valadoc_api_signature_builder_append_highlighted (ValadocApiSignatureBuilder* self,
                                                  const gchar* text,
                                                  gboolean spaced)
{
	const gchar* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	ValadocContentInline* _tmp2_;
	gchar* content = NULL;
	gchar* _tmp3_;
	ValadocContentRun* inner = NULL;
	ValadocContentRun* _tmp4_;
	ValaList* _tmp5_;
	ValaList* _tmp6_;
	ValadocContentText* _tmp7_;
	ValadocContentText* _tmp8_;
	ValadocApiSignatureBuilder* _tmp9_;
	ValadocApiSignatureBuilder* result;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (text != NULL, NULL);
	_tmp2_ = self->priv->last_appended;
	if (_tmp2_ != NULL) {
		_tmp1_ = spaced;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		_tmp0_ = " ";
	} else {
		_tmp0_ = "";
	}
	_tmp3_ = g_strconcat (_tmp0_, text, NULL);
	content = _tmp3_;
	_tmp4_ = valadoc_content_run_new (VALADOC_CONTENT_RUN_STYLE_ITALIC);
	inner = _tmp4_;
	_tmp5_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) inner);
	_tmp6_ = _tmp5_;
	_tmp7_ = valadoc_content_text_new (content);
	_tmp8_ = _tmp7_;
	vala_collection_add ((ValaCollection*) _tmp6_, (ValadocContentInline*) _tmp8_);
	_g_object_unref0 (_tmp8_);
	_tmp9_ = valadoc_api_signature_builder_append_content (self, (ValadocContentInline*) inner, spaced);
	result = _tmp9_;
	_g_object_unref0 (inner);
	_g_free0 (content);
	return result;
}

/**
 * Adds a Inline onto the end of the builder.
 *
 * @param content a content
 * @param spaced add a space at the front of the inline if necessary
 * @return this
 */
static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

ValadocApiSignatureBuilder*
valadoc_api_signature_builder_append_content (ValadocApiSignatureBuilder* self,
                                              ValadocContentInline* content,
                                              gboolean spaced)
{
	gboolean _tmp0_ = FALSE;
	ValadocContentInline* _tmp1_;
	ValadocContentRun* _tmp2_;
	ValaList* _tmp3_;
	ValaList* _tmp4_;
	ValadocContentInline* _tmp5_;
	ValadocContentInline* _tmp6_;
	ValadocApiSignatureBuilder* result;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (content != NULL, NULL);
	_tmp1_ = self->priv->last_appended;
	if (_tmp1_ != NULL) {
		_tmp0_ = spaced;
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		valadoc_api_signature_builder_append_text (self, " ");
	}
	_tmp2_ = self->priv->run;
	_tmp3_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) _tmp2_);
	_tmp4_ = _tmp3_;
	_tmp5_ = _g_object_ref0 (content);
	_g_object_unref0 (self->priv->last_appended);
	self->priv->last_appended = _tmp5_;
	_tmp6_ = self->priv->last_appended;
	vala_collection_add ((ValaCollection*) _tmp4_, _tmp6_);
	result = self;
	return result;
}

/**
 * Adds a keyword onto the end of the builder.
 *
 * @param keyword a keyword
 * @param spaced add a space at the front of the keyword if necessary
 * @return this
 */
ValadocApiSignatureBuilder*
valadoc_api_signature_builder_append_keyword (ValadocApiSignatureBuilder* self,
                                              const gchar* keyword,
                                              gboolean spaced)
{
	ValadocContentRun* inner = NULL;
	ValadocContentRun* _tmp0_;
	ValaList* _tmp1_;
	ValaList* _tmp2_;
	ValadocContentText* _tmp3_;
	ValadocContentText* _tmp4_;
	ValadocApiSignatureBuilder* _tmp5_;
	ValadocApiSignatureBuilder* result;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (keyword != NULL, NULL);
	_tmp0_ = valadoc_content_run_new (VALADOC_CONTENT_RUN_STYLE_LANG_KEYWORD);
	inner = _tmp0_;
	_tmp1_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) inner);
	_tmp2_ = _tmp1_;
	_tmp3_ = valadoc_content_text_new (keyword);
	_tmp4_ = _tmp3_;
	vala_collection_add ((ValaCollection*) _tmp2_, (ValadocContentInline*) _tmp4_);
	_g_object_unref0 (_tmp4_);
	_tmp5_ = valadoc_api_signature_builder_append_content (self, (ValadocContentInline*) inner, spaced);
	result = _tmp5_;
	_g_object_unref0 (inner);
	return result;
}

/**
 * Adds a symbol onto the end of the builder.
 *
 * @param node a node
 * @param spaced add a space at the front of the node if necessary
 * @return this
 */
ValadocApiSignatureBuilder*
valadoc_api_signature_builder_append_symbol (ValadocApiSignatureBuilder* self,
                                             ValadocApiNode* node,
                                             gboolean spaced)
{
	ValadocContentRun* inner = NULL;
	ValadocContentRun* _tmp0_;
	ValaList* _tmp1_;
	ValaList* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	ValadocContentSymbolLink* _tmp5_;
	ValadocContentSymbolLink* _tmp6_;
	ValadocApiSignatureBuilder* _tmp7_;
	ValadocApiSignatureBuilder* result;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (node != NULL, NULL);
	_tmp0_ = valadoc_content_run_new (VALADOC_CONTENT_RUN_STYLE_BOLD);
	inner = _tmp0_;
	_tmp1_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) inner);
	_tmp2_ = _tmp1_;
	_tmp3_ = valadoc_api_node_get_name (node);
	_tmp4_ = _tmp3_;
	_tmp5_ = valadoc_content_symbol_link_new (node, _tmp4_);
	_tmp6_ = _tmp5_;
	vala_collection_add ((ValaCollection*) _tmp2_, (ValadocContentInline*) _tmp6_);
	_g_object_unref0 (_tmp6_);
	_tmp7_ = valadoc_api_signature_builder_append_content (self, (ValadocContentInline*) inner, spaced);
	result = _tmp7_;
	_g_object_unref0 (inner);
	return result;
}

/**
 * Adds a type onto the end of the builder.
 *
 * @param node a node
 * @param spaced add a space at the front of the node if necessary
 * @return this
 */
ValadocApiSignatureBuilder*
valadoc_api_signature_builder_append_type (ValadocApiSignatureBuilder* self,
                                           ValadocApiNode* node,
                                           gboolean spaced)
{
	ValadocContentRunStyle style = 0;
	gboolean _tmp0_ = FALSE;
	ValadocContentRun* inner = NULL;
	ValadocContentRun* _tmp3_;
	ValaList* _tmp4_;
	ValaList* _tmp5_;
	const gchar* _tmp6_;
	const gchar* _tmp7_;
	ValadocContentSymbolLink* _tmp8_;
	ValadocContentSymbolLink* _tmp9_;
	ValadocApiSignatureBuilder* _tmp10_;
	ValadocApiSignatureBuilder* result;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (node != NULL, NULL);
	style = VALADOC_CONTENT_RUN_STYLE_LANG_TYPE;
	if (VALADOC_API_IS_TYPESYMBOL (node)) {
		gboolean _tmp1_;
		gboolean _tmp2_;
		_tmp1_ = valadoc_api_typesymbol_get_is_basic_type (G_TYPE_CHECK_INSTANCE_CAST (node, VALADOC_API_TYPE_TYPESYMBOL, ValadocApiTypeSymbol));
		_tmp2_ = _tmp1_;
		_tmp0_ = _tmp2_;
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		style = VALADOC_CONTENT_RUN_STYLE_LANG_BASIC_TYPE;
	}
	_tmp3_ = valadoc_content_run_new (style);
	inner = _tmp3_;
	_tmp4_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) inner);
	_tmp5_ = _tmp4_;
	_tmp6_ = valadoc_api_node_get_name (node);
	_tmp7_ = _tmp6_;
	_tmp8_ = valadoc_content_symbol_link_new (node, _tmp7_);
	_tmp9_ = _tmp8_;
	vala_collection_add ((ValaCollection*) _tmp5_, (ValadocContentInline*) _tmp9_);
	_g_object_unref0 (_tmp9_);
	_tmp10_ = valadoc_api_signature_builder_append_content (self, (ValadocContentInline*) inner, spaced);
	result = _tmp10_;
	_g_object_unref0 (inner);
	return result;
}

/**
 * Adds a type name onto the end of the builder.
 *
 * @param name a type name
 * @param spaced add a space at the front of the type name if necessary
 * @return this
 */
ValadocApiSignatureBuilder*
valadoc_api_signature_builder_append_type_name (ValadocApiSignatureBuilder* self,
                                                const gchar* name,
                                                gboolean spaced)
{
	ValadocContentRun* inner = NULL;
	ValadocContentRun* _tmp0_;
	ValaList* _tmp1_;
	ValaList* _tmp2_;
	ValadocContentText* _tmp3_;
	ValadocContentText* _tmp4_;
	ValadocApiSignatureBuilder* _tmp5_;
	ValadocApiSignatureBuilder* result;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = valadoc_content_run_new (VALADOC_CONTENT_RUN_STYLE_LANG_TYPE);
	inner = _tmp0_;
	_tmp1_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) inner);
	_tmp2_ = _tmp1_;
	_tmp3_ = valadoc_content_text_new (name);
	_tmp4_ = _tmp3_;
	vala_collection_add ((ValaCollection*) _tmp2_, (ValadocContentInline*) _tmp4_);
	_g_object_unref0 (_tmp4_);
	_tmp5_ = valadoc_api_signature_builder_append_content (self, (ValadocContentInline*) inner, spaced);
	result = _tmp5_;
	_g_object_unref0 (inner);
	return result;
}

/**
 * Adds a literal onto the end of the builder.
 *
 * @param literal a literal
 * @param spaced add a space at the front of the literal if necessary
 * @return this
 */
ValadocApiSignatureBuilder*
valadoc_api_signature_builder_append_literal (ValadocApiSignatureBuilder* self,
                                              const gchar* literal,
                                              gboolean spaced)
{
	ValadocContentRun* inner = NULL;
	ValadocContentRun* _tmp0_;
	ValaList* _tmp1_;
	ValaList* _tmp2_;
	ValadocContentText* _tmp3_;
	ValadocContentText* _tmp4_;
	ValadocApiSignatureBuilder* _tmp5_;
	ValadocApiSignatureBuilder* result;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (literal != NULL, NULL);
	_tmp0_ = valadoc_content_run_new (VALADOC_CONTENT_RUN_STYLE_LANG_LITERAL);
	inner = _tmp0_;
	_tmp1_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) inner);
	_tmp2_ = _tmp1_;
	_tmp3_ = valadoc_content_text_new (literal);
	_tmp4_ = _tmp3_;
	vala_collection_add ((ValaCollection*) _tmp2_, (ValadocContentInline*) _tmp4_);
	_g_object_unref0 (_tmp4_);
	_tmp5_ = valadoc_api_signature_builder_append_content (self, (ValadocContentInline*) inner, spaced);
	result = _tmp5_;
	_g_object_unref0 (inner);
	return result;
}

/**
 * The content
 */
ValadocContentRun*
valadoc_api_signature_builder_get (ValadocApiSignatureBuilder* self)
{
	ValadocContentRun* _tmp0_;
	ValadocContentRun* _tmp1_;
	ValadocContentRun* result;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->run;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}

static void
valadoc_api_value_signature_builder_init (GValue* value)
{
	value->data[0].v_pointer = NULL;
}

static void
valadoc_api_value_signature_builder_free_value (GValue* value)
{
	if (value->data[0].v_pointer) {
		valadoc_api_signature_builder_unref (value->data[0].v_pointer);
	}
}

static void
valadoc_api_value_signature_builder_copy_value (const GValue* src_value,
                                                GValue* dest_value)
{
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = valadoc_api_signature_builder_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}

static gpointer
valadoc_api_value_signature_builder_peek_pointer (const GValue* value)
{
	return value->data[0].v_pointer;
}

static gchar*
valadoc_api_value_signature_builder_collect_value (GValue* value,
                                                   guint n_collect_values,
                                                   GTypeCValue* collect_values,
                                                   guint collect_flags)
{
	if (collect_values[0].v_pointer) {
		ValadocApiSignatureBuilder * object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = valadoc_api_signature_builder_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}

static gchar*
valadoc_api_value_signature_builder_lcopy_value (const GValue* value,
                                                 guint n_collect_values,
                                                 GTypeCValue* collect_values,
                                                 guint collect_flags)
{
	ValadocApiSignatureBuilder ** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = valadoc_api_signature_builder_ref (value->data[0].v_pointer);
	}
	return NULL;
}

GParamSpec*
valadoc_api_param_spec_signature_builder (const gchar* name,
                                          const gchar* nick,
                                          const gchar* blurb,
                                          GType object_type,
                                          GParamFlags flags)
{
	ValadocApiParamSpecSignatureBuilder* spec;
	g_return_val_if_fail (g_type_is_a (object_type, VALADOC_API_TYPE_SIGNATURE_BUILDER), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}

gpointer
valadoc_api_value_get_signature_builder (const GValue* value)
{
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALADOC_API_TYPE_SIGNATURE_BUILDER), NULL);
	return value->data[0].v_pointer;
}

void
valadoc_api_value_set_signature_builder (GValue* value,
                                         gpointer v_object)
{
	ValadocApiSignatureBuilder * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALADOC_API_TYPE_SIGNATURE_BUILDER));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALADOC_API_TYPE_SIGNATURE_BUILDER));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		valadoc_api_signature_builder_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		valadoc_api_signature_builder_unref (old);
	}
}

void
valadoc_api_value_take_signature_builder (GValue* value,
                                          gpointer v_object)
{
	ValadocApiSignatureBuilder * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALADOC_API_TYPE_SIGNATURE_BUILDER));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALADOC_API_TYPE_SIGNATURE_BUILDER));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		valadoc_api_signature_builder_unref (old);
	}
}

static void
valadoc_api_signature_builder_class_init (ValadocApiSignatureBuilderClass * klass,
                                          gpointer klass_data)
{
	valadoc_api_signature_builder_parent_class = g_type_class_peek_parent (klass);
	((ValadocApiSignatureBuilderClass *) klass)->finalize = valadoc_api_signature_builder_finalize;
	g_type_class_adjust_private_offset (klass, &ValadocApiSignatureBuilder_private_offset);
}

static void
valadoc_api_signature_builder_instance_init (ValadocApiSignatureBuilder * self,
                                             gpointer klass)
{
	self->priv = valadoc_api_signature_builder_get_instance_private (self);
	self->ref_count = 1;
}

static void
valadoc_api_signature_builder_finalize (ValadocApiSignatureBuilder * obj)
{
	ValadocApiSignatureBuilder * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_API_TYPE_SIGNATURE_BUILDER, ValadocApiSignatureBuilder);
	g_signal_handlers_destroy (self);
	_g_object_unref0 (self->priv->run);
	_g_object_unref0 (self->priv->last_appended);
}

/**
 * Builds up a signature from the given items.
 */
static GType
valadoc_api_signature_builder_get_type_once (void)
{
	static const GTypeValueTable g_define_type_value_table = { valadoc_api_value_signature_builder_init, valadoc_api_value_signature_builder_free_value, valadoc_api_value_signature_builder_copy_value, valadoc_api_value_signature_builder_peek_pointer, "p", valadoc_api_value_signature_builder_collect_value, "p", valadoc_api_value_signature_builder_lcopy_value };
	static const GTypeInfo g_define_type_info = { sizeof (ValadocApiSignatureBuilderClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_api_signature_builder_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocApiSignatureBuilder), 0, (GInstanceInitFunc) valadoc_api_signature_builder_instance_init, &g_define_type_value_table };
	static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
	GType valadoc_api_signature_builder_type_id;
	valadoc_api_signature_builder_type_id = g_type_register_fundamental (g_type_fundamental_next (), "ValadocApiSignatureBuilder", &g_define_type_info, &g_define_type_fundamental_info, 0);
	ValadocApiSignatureBuilder_private_offset = g_type_add_instance_private (valadoc_api_signature_builder_type_id, sizeof (ValadocApiSignatureBuilderPrivate));
	return valadoc_api_signature_builder_type_id;
}

GType
valadoc_api_signature_builder_get_type (void)
{
	static volatile gsize valadoc_api_signature_builder_type_id__once = 0;
	if (g_once_init_enter (&valadoc_api_signature_builder_type_id__once)) {
		GType valadoc_api_signature_builder_type_id;
		valadoc_api_signature_builder_type_id = valadoc_api_signature_builder_get_type_once ();
		g_once_init_leave (&valadoc_api_signature_builder_type_id__once, valadoc_api_signature_builder_type_id);
	}
	return valadoc_api_signature_builder_type_id__once;
}

gpointer
valadoc_api_signature_builder_ref (gpointer instance)
{
	ValadocApiSignatureBuilder * self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}

void
valadoc_api_signature_builder_unref (gpointer instance)
{
	ValadocApiSignatureBuilder * self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		VALADOC_API_SIGNATURE_BUILDER_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}

