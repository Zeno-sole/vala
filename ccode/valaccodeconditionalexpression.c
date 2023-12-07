/* valaccodeconditionalexpression.c generated by valac, the Vala compiler
 * generated from valaccodeconditionalexpression.vala, do not modify */

/* valaccodeconditionalexpression.vala
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

#include "valaccode.h"
#include <glib.h>
#include <glib-object.h>

#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

struct _ValaCCodeConditionalExpressionPrivate {
	ValaCCodeExpression* _condition;
	ValaCCodeExpression* _true_expression;
	ValaCCodeExpression* _false_expression;
};

static gint ValaCCodeConditionalExpression_private_offset;
static gpointer vala_ccode_conditional_expression_parent_class = NULL;

static void vala_ccode_conditional_expression_real_write (ValaCCodeNode* base,
                                                   ValaCCodeWriter* writer);
static void vala_ccode_conditional_expression_real_write_inner (ValaCCodeExpression* base,
                                                         ValaCCodeWriter* writer);
static void vala_ccode_conditional_expression_finalize (ValaCCodeNode * obj);
static GType vala_ccode_conditional_expression_get_type_once (void);

static inline gpointer
vala_ccode_conditional_expression_get_instance_private (ValaCCodeConditionalExpression* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCCodeConditionalExpression_private_offset);
}

ValaCCodeExpression*
vala_ccode_conditional_expression_get_condition (ValaCCodeConditionalExpression* self)
{
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_condition;
	result = _tmp0_;
	return result;
}

static gpointer
_vala_ccode_node_ref0 (gpointer self)
{
	return self ? vala_ccode_node_ref (self) : NULL;
}

void
vala_ccode_conditional_expression_set_condition (ValaCCodeConditionalExpression* self,
                                                 ValaCCodeExpression* value)
{
	ValaCCodeExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_ccode_node_ref0 (value);
	_vala_ccode_node_unref0 (self->priv->_condition);
	self->priv->_condition = _tmp0_;
}

ValaCCodeExpression*
vala_ccode_conditional_expression_get_true_expression (ValaCCodeConditionalExpression* self)
{
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_true_expression;
	result = _tmp0_;
	return result;
}

void
vala_ccode_conditional_expression_set_true_expression (ValaCCodeConditionalExpression* self,
                                                       ValaCCodeExpression* value)
{
	ValaCCodeExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_ccode_node_ref0 (value);
	_vala_ccode_node_unref0 (self->priv->_true_expression);
	self->priv->_true_expression = _tmp0_;
}

ValaCCodeExpression*
vala_ccode_conditional_expression_get_false_expression (ValaCCodeConditionalExpression* self)
{
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_false_expression;
	result = _tmp0_;
	return result;
}

void
vala_ccode_conditional_expression_set_false_expression (ValaCCodeConditionalExpression* self,
                                                        ValaCCodeExpression* value)
{
	ValaCCodeExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_ccode_node_ref0 (value);
	_vala_ccode_node_unref0 (self->priv->_false_expression);
	self->priv->_false_expression = _tmp0_;
}

ValaCCodeConditionalExpression*
vala_ccode_conditional_expression_construct (GType object_type,
                                             ValaCCodeExpression* cond,
                                             ValaCCodeExpression* true_expr,
                                             ValaCCodeExpression* false_expr)
{
	ValaCCodeConditionalExpression* self = NULL;
	g_return_val_if_fail (cond != NULL, NULL);
	g_return_val_if_fail (true_expr != NULL, NULL);
	g_return_val_if_fail (false_expr != NULL, NULL);
	self = (ValaCCodeConditionalExpression*) vala_ccode_expression_construct (object_type);
	vala_ccode_conditional_expression_set_condition (self, cond);
	vala_ccode_conditional_expression_set_true_expression (self, true_expr);
	vala_ccode_conditional_expression_set_false_expression (self, false_expr);
	return self;
}

ValaCCodeConditionalExpression*
vala_ccode_conditional_expression_new (ValaCCodeExpression* cond,
                                       ValaCCodeExpression* true_expr,
                                       ValaCCodeExpression* false_expr)
{
	return vala_ccode_conditional_expression_construct (VALA_TYPE_CCODE_CONDITIONAL_EXPRESSION, cond, true_expr, false_expr);
}

static void
vala_ccode_conditional_expression_real_write (ValaCCodeNode* base,
                                              ValaCCodeWriter* writer)
{
	ValaCCodeConditionalExpression * self;
	ValaCCodeExpression* _tmp0_;
	ValaCCodeExpression* _tmp1_;
	ValaCCodeExpression* _tmp2_;
	self = (ValaCCodeConditionalExpression*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->_condition;
	vala_ccode_expression_write_inner (_tmp0_, writer);
	vala_ccode_writer_write_string (writer, " ? ");
	_tmp1_ = self->priv->_true_expression;
	vala_ccode_expression_write_inner (_tmp1_, writer);
	vala_ccode_writer_write_string (writer, " : ");
	_tmp2_ = self->priv->_false_expression;
	vala_ccode_expression_write_inner (_tmp2_, writer);
}

static void
vala_ccode_conditional_expression_real_write_inner (ValaCCodeExpression* base,
                                                    ValaCCodeWriter* writer)
{
	ValaCCodeConditionalExpression * self;
	self = (ValaCCodeConditionalExpression*) base;
	g_return_if_fail (writer != NULL);
	vala_ccode_writer_write_string (writer, "(");
	vala_ccode_node_write ((ValaCCodeNode*) self, writer);
	vala_ccode_writer_write_string (writer, ")");
}

static void
vala_ccode_conditional_expression_class_init (ValaCCodeConditionalExpressionClass * klass,
                                              gpointer klass_data)
{
	vala_ccode_conditional_expression_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_conditional_expression_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCCodeConditionalExpression_private_offset);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_conditional_expression_real_write;
	((ValaCCodeExpressionClass *) klass)->write_inner = (void (*) (ValaCCodeExpression*, ValaCCodeWriter*)) vala_ccode_conditional_expression_real_write_inner;
}

static void
vala_ccode_conditional_expression_instance_init (ValaCCodeConditionalExpression * self,
                                                 gpointer klass)
{
	self->priv = vala_ccode_conditional_expression_get_instance_private (self);
}

static void
vala_ccode_conditional_expression_finalize (ValaCCodeNode * obj)
{
	ValaCCodeConditionalExpression * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_CONDITIONAL_EXPRESSION, ValaCCodeConditionalExpression);
	_vala_ccode_node_unref0 (self->priv->_condition);
	_vala_ccode_node_unref0 (self->priv->_true_expression);
	_vala_ccode_node_unref0 (self->priv->_false_expression);
	VALA_CCODE_NODE_CLASS (vala_ccode_conditional_expression_parent_class)->finalize (obj);
}

/**
 * Represents a conditional expression in C code.
 */
static GType
vala_ccode_conditional_expression_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeConditionalExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_conditional_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeConditionalExpression), 0, (GInstanceInitFunc) vala_ccode_conditional_expression_instance_init, NULL };
	GType vala_ccode_conditional_expression_type_id;
	vala_ccode_conditional_expression_type_id = g_type_register_static (VALA_TYPE_CCODE_EXPRESSION, "ValaCCodeConditionalExpression", &g_define_type_info, 0);
	ValaCCodeConditionalExpression_private_offset = g_type_add_instance_private (vala_ccode_conditional_expression_type_id, sizeof (ValaCCodeConditionalExpressionPrivate));
	return vala_ccode_conditional_expression_type_id;
}

GType
vala_ccode_conditional_expression_get_type (void)
{
	static volatile gsize vala_ccode_conditional_expression_type_id__once = 0;
	if (g_once_init_enter (&vala_ccode_conditional_expression_type_id__once)) {
		GType vala_ccode_conditional_expression_type_id;
		vala_ccode_conditional_expression_type_id = vala_ccode_conditional_expression_get_type_once ();
		g_once_init_leave (&vala_ccode_conditional_expression_type_id__once, vala_ccode_conditional_expression_type_id);
	}
	return vala_ccode_conditional_expression_type_id__once;
}

