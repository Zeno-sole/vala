/* valaintegerliteral.c generated by valac, the Vala compiler
 * generated from valaintegerliteral.vala, do not modify */

/* valaintegerliteral.vala
 *
 * Copyright (C) 2006-2010  Jürg Billeter
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

#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

struct _ValaIntegerLiteralPrivate {
	gchar* _value;
	gchar* _type_suffix;
};

static gint ValaIntegerLiteral_private_offset;
static gpointer vala_integer_literal_parent_class = NULL;

static void vala_integer_literal_set_value (ValaIntegerLiteral* self,
                                     const gchar* value);
static void vala_integer_literal_set_type_suffix (ValaIntegerLiteral* self,
                                           const gchar* value);
static void vala_integer_literal_real_accept (ValaCodeNode* base,
                                       ValaCodeVisitor* visitor);
static gchar* vala_integer_literal_real_to_string (ValaCodeNode* base);
static gboolean vala_integer_literal_real_is_pure (ValaExpression* base);
static gboolean vala_integer_literal_real_check (ValaCodeNode* base,
                                          ValaCodeContext* context);
static void vala_integer_literal_real_emit (ValaCodeNode* base,
                                     ValaCodeGenerator* codegen);
static void vala_integer_literal_finalize (ValaCodeNode * obj);
static GType vala_integer_literal_get_type_once (void);

static inline gpointer
vala_integer_literal_get_instance_private (ValaIntegerLiteral* self)
{
	return G_STRUCT_MEMBER_P (self, ValaIntegerLiteral_private_offset);
}

const gchar*
vala_integer_literal_get_value (ValaIntegerLiteral* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_value;
	result = _tmp0_;
	return result;
}

static void
vala_integer_literal_set_value (ValaIntegerLiteral* self,
                                const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_value);
	self->priv->_value = _tmp0_;
}

const gchar*
vala_integer_literal_get_type_suffix (ValaIntegerLiteral* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_type_suffix;
	result = _tmp0_;
	return result;
}

static void
vala_integer_literal_set_type_suffix (ValaIntegerLiteral* self,
                                      const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_type_suffix);
	self->priv->_type_suffix = _tmp0_;
}

/**
 * Creates a new integer literal.
 *
 * @param i      literal value
 * @param source reference to source code
 * @return       newly created integer literal
 */
ValaIntegerLiteral*
vala_integer_literal_construct (GType object_type,
                                const gchar* i,
                                ValaSourceReference* source)
{
	ValaIntegerLiteral* self = NULL;
	g_return_val_if_fail (i != NULL, NULL);
	self = (ValaIntegerLiteral*) vala_literal_construct (object_type);
	vala_integer_literal_set_value (self, i);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source);
	return self;
}

ValaIntegerLiteral*
vala_integer_literal_new (const gchar* i,
                          ValaSourceReference* source)
{
	return vala_integer_literal_construct (VALA_TYPE_INTEGER_LITERAL, i, source);
}

static void
vala_integer_literal_real_accept (ValaCodeNode* base,
                                  ValaCodeVisitor* visitor)
{
	ValaIntegerLiteral * self;
	self = (ValaIntegerLiteral*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_integer_literal (visitor, self);
	vala_code_visitor_visit_expression (visitor, (ValaExpression*) self);
}

static gchar*
vala_integer_literal_real_to_string (ValaCodeNode* base)
{
	ValaIntegerLiteral * self;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	self = (ValaIntegerLiteral*) base;
	_tmp0_ = self->priv->_value;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

static gboolean
vala_integer_literal_real_is_pure (ValaExpression* base)
{
	ValaIntegerLiteral * self;
	gboolean result = FALSE;
	self = (ValaIntegerLiteral*) base;
	result = TRUE;
	return result;
}

static glong
string_strnlen (gchar* str,
                glong maxlen)
{
	gchar* end = NULL;
	gchar* _tmp0_;
	gchar* _tmp1_;
	glong result = 0L;
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
	gchar* result = NULL;
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

static gint64
int64_parse (const gchar* str,
             guint _base)
{
	gint64 result = 0LL;
	g_return_val_if_fail (str != NULL, 0LL);
	result = g_ascii_strtoll (str, NULL, _base);
	return result;
}

static gboolean
vala_integer_literal_real_check (ValaCodeNode* base,
                                 ValaCodeContext* context)
{
	ValaIntegerLiteral * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	gint l = 0;
	gboolean u = FALSE;
	gboolean _tmp14_ = FALSE;
	const gchar* _tmp15_;
	gint64 n = 0LL;
	const gchar* _tmp23_;
	gboolean _tmp24_ = FALSE;
	gchar* type_name = NULL;
	ValaStruct* st = NULL;
	ValaNamespace* _tmp33_;
	ValaNamespace* _tmp34_;
	ValaScope* _tmp35_;
	ValaScope* _tmp36_;
	const gchar* _tmp37_;
	ValaSymbol* _tmp38_;
	ValaStruct* _tmp39_;
	ValaStruct* _tmp40_;
	const gchar* _tmp41_;
	const gchar* _tmp42_;
	ValaIntegerType* _tmp43_;
	ValaIntegerType* _tmp44_;
	gboolean _tmp45_;
	gboolean _tmp46_;
	gboolean result = FALSE;
	self = (ValaIntegerLiteral*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = vala_code_node_get_checked ((ValaCodeNode*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		gboolean _tmp2_;
		gboolean _tmp3_;
		_tmp2_ = vala_code_node_get_error ((ValaCodeNode*) self);
		_tmp3_ = _tmp2_;
		result = !_tmp3_;
		return result;
	}
	vala_code_node_set_checked ((ValaCodeNode*) self, TRUE);
	l = 0;
	while (TRUE) {
		gboolean _tmp4_ = FALSE;
		const gchar* _tmp5_;
		gint _tmp7_;
		const gchar* _tmp8_;
		const gchar* _tmp9_;
		gint _tmp10_;
		gint _tmp11_;
		gchar* _tmp12_;
		gchar* _tmp13_;
		_tmp5_ = self->priv->_value;
		if (g_str_has_suffix (_tmp5_, "l")) {
			_tmp4_ = TRUE;
		} else {
			const gchar* _tmp6_;
			_tmp6_ = self->priv->_value;
			_tmp4_ = g_str_has_suffix (_tmp6_, "L");
		}
		if (!_tmp4_) {
			break;
		}
		_tmp7_ = l;
		l = _tmp7_ + 1;
		_tmp8_ = self->priv->_value;
		_tmp9_ = self->priv->_value;
		_tmp10_ = strlen (_tmp9_);
		_tmp11_ = _tmp10_;
		_tmp12_ = string_substring (_tmp8_, (glong) 0, (glong) (_tmp11_ - 1));
		_tmp13_ = _tmp12_;
		vala_integer_literal_set_value (self, _tmp13_);
		_g_free0 (_tmp13_);
	}
	u = FALSE;
	_tmp15_ = self->priv->_value;
	if (g_str_has_suffix (_tmp15_, "u")) {
		_tmp14_ = TRUE;
	} else {
		const gchar* _tmp16_;
		_tmp16_ = self->priv->_value;
		_tmp14_ = g_str_has_suffix (_tmp16_, "U");
	}
	if (_tmp14_) {
		const gchar* _tmp17_;
		const gchar* _tmp18_;
		gint _tmp19_;
		gint _tmp20_;
		gchar* _tmp21_;
		gchar* _tmp22_;
		u = TRUE;
		_tmp17_ = self->priv->_value;
		_tmp18_ = self->priv->_value;
		_tmp19_ = strlen (_tmp18_);
		_tmp20_ = _tmp19_;
		_tmp21_ = string_substring (_tmp17_, (glong) 0, (glong) (_tmp20_ - 1));
		_tmp22_ = _tmp21_;
		vala_integer_literal_set_value (self, _tmp22_);
		_g_free0 (_tmp22_);
	}
	_tmp23_ = self->priv->_value;
	n = int64_parse (_tmp23_, (guint) 0);
	if (!u) {
		gboolean _tmp25_ = FALSE;
		if (n > ((gint64) G_MAXINT)) {
			_tmp25_ = TRUE;
		} else {
			_tmp25_ = n < ((gint64) G_MININT);
		}
		_tmp24_ = _tmp25_;
	} else {
		_tmp24_ = FALSE;
	}
	if (_tmp24_) {
		l = 2;
	} else {
		gboolean _tmp26_ = FALSE;
		if (u) {
			_tmp26_ = n > ((gint64) G_MAXUINT);
		} else {
			_tmp26_ = FALSE;
		}
		if (_tmp26_) {
			l = 2;
		}
	}
	if (l == 0) {
		if (u) {
			gchar* _tmp27_;
			vala_integer_literal_set_type_suffix (self, "U");
			_tmp27_ = g_strdup ("uint");
			_g_free0 (type_name);
			type_name = _tmp27_;
		} else {
			gchar* _tmp28_;
			vala_integer_literal_set_type_suffix (self, "");
			_tmp28_ = g_strdup ("int");
			_g_free0 (type_name);
			type_name = _tmp28_;
		}
	} else {
		if (l == 1) {
			if (u) {
				gchar* _tmp29_;
				vala_integer_literal_set_type_suffix (self, "UL");
				_tmp29_ = g_strdup ("ulong");
				_g_free0 (type_name);
				type_name = _tmp29_;
			} else {
				gchar* _tmp30_;
				vala_integer_literal_set_type_suffix (self, "L");
				_tmp30_ = g_strdup ("long");
				_g_free0 (type_name);
				type_name = _tmp30_;
			}
		} else {
			if (u) {
				gchar* _tmp31_;
				vala_integer_literal_set_type_suffix (self, "ULL");
				_tmp31_ = g_strdup ("uint64");
				_g_free0 (type_name);
				type_name = _tmp31_;
			} else {
				gchar* _tmp32_;
				vala_integer_literal_set_type_suffix (self, "LL");
				_tmp32_ = g_strdup ("int64");
				_g_free0 (type_name);
				type_name = _tmp32_;
			}
		}
	}
	_tmp33_ = vala_code_context_get_root (context);
	_tmp34_ = _tmp33_;
	_tmp35_ = vala_symbol_get_scope ((ValaSymbol*) _tmp34_);
	_tmp36_ = _tmp35_;
	_tmp37_ = type_name;
	_tmp38_ = vala_scope_lookup (_tmp36_, _tmp37_);
	st = G_TYPE_CHECK_INSTANCE_CAST (_tmp38_, VALA_TYPE_STRUCT, ValaStruct);
	_tmp39_ = st;
	vala_code_node_check ((ValaCodeNode*) _tmp39_, context);
	_tmp40_ = st;
	_tmp41_ = self->priv->_value;
	_tmp42_ = type_name;
	_tmp43_ = vala_integer_type_new (_tmp40_, _tmp41_, _tmp42_);
	_tmp44_ = _tmp43_;
	vala_expression_set_value_type ((ValaExpression*) self, (ValaDataType*) _tmp44_);
	_vala_code_node_unref0 (_tmp44_);
	_tmp45_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp46_ = _tmp45_;
	result = !_tmp46_;
	_vala_code_node_unref0 (st);
	_g_free0 (type_name);
	return result;
}

static void
vala_integer_literal_real_emit (ValaCodeNode* base,
                                ValaCodeGenerator* codegen)
{
	ValaIntegerLiteral * self;
	self = (ValaIntegerLiteral*) base;
	g_return_if_fail (codegen != NULL);
	vala_code_visitor_visit_integer_literal ((ValaCodeVisitor*) codegen, self);
	vala_code_visitor_visit_expression ((ValaCodeVisitor*) codegen, (ValaExpression*) self);
}

static void
vala_integer_literal_class_init (ValaIntegerLiteralClass * klass,
                                 gpointer klass_data)
{
	vala_integer_literal_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_integer_literal_finalize;
	g_type_class_adjust_private_offset (klass, &ValaIntegerLiteral_private_offset);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_integer_literal_real_accept;
	((ValaCodeNodeClass *) klass)->to_string = (gchar* (*) (ValaCodeNode*)) vala_integer_literal_real_to_string;
	((ValaExpressionClass *) klass)->is_pure = (gboolean (*) (ValaExpression*)) vala_integer_literal_real_is_pure;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_integer_literal_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) vala_integer_literal_real_emit;
}

static void
vala_integer_literal_instance_init (ValaIntegerLiteral * self,
                                    gpointer klass)
{
	self->priv = vala_integer_literal_get_instance_private (self);
}

static void
vala_integer_literal_finalize (ValaCodeNode * obj)
{
	ValaIntegerLiteral * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_INTEGER_LITERAL, ValaIntegerLiteral);
	_g_free0 (self->priv->_value);
	_g_free0 (self->priv->_type_suffix);
	VALA_CODE_NODE_CLASS (vala_integer_literal_parent_class)->finalize (obj);
}

/**
 * Represents an integer literal in the source code.
 */
static GType
vala_integer_literal_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaIntegerLiteralClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_integer_literal_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaIntegerLiteral), 0, (GInstanceInitFunc) vala_integer_literal_instance_init, NULL };
	GType vala_integer_literal_type_id;
	vala_integer_literal_type_id = g_type_register_static (VALA_TYPE_LITERAL, "ValaIntegerLiteral", &g_define_type_info, 0);
	ValaIntegerLiteral_private_offset = g_type_add_instance_private (vala_integer_literal_type_id, sizeof (ValaIntegerLiteralPrivate));
	return vala_integer_literal_type_id;
}

GType
vala_integer_literal_get_type (void)
{
	static volatile gsize vala_integer_literal_type_id__volatile = 0;
	if (g_once_init_enter (&vala_integer_literal_type_id__volatile)) {
		GType vala_integer_literal_type_id;
		vala_integer_literal_type_id = vala_integer_literal_get_type_once ();
		g_once_init_leave (&vala_integer_literal_type_id__volatile, vala_integer_literal_type_id);
	}
	return vala_integer_literal_type_id__volatile;
}

