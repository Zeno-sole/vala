/* valadeletestatement.c generated by valac, the Vala compiler
 * generated from valadeletestatement.vala, do not modify */

/* valadeletestatement.vala
 *
 * Copyright (C) 2008-2011  Jürg Billeter
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
#include <glib.h>
#include <stdlib.h>
#include <string.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaDeleteStatementPrivate {
	ValaExpression* _expression;
};

static gint ValaDeleteStatement_private_offset;
static gpointer vala_delete_statement_parent_class = NULL;
static ValaStatementIface * vala_delete_statement_vala_statement_parent_iface = NULL;

static void vala_delete_statement_set_expression (ValaDeleteStatement* self,
                                           ValaExpression* value);
static void vala_delete_statement_real_accept (ValaCodeNode* base,
                                        ValaCodeVisitor* visitor);
static void vala_delete_statement_real_accept_children (ValaCodeNode* base,
                                                 ValaCodeVisitor* visitor);
static void vala_delete_statement_real_replace_expression (ValaCodeNode* base,
                                                    ValaExpression* old_node,
                                                    ValaExpression* new_node);
static gboolean vala_delete_statement_real_check (ValaCodeNode* base,
                                           ValaCodeContext* context);
static void vala_delete_statement_real_emit (ValaCodeNode* base,
                                      ValaCodeGenerator* codegen);
static void vala_delete_statement_finalize (ValaCodeNode * obj);
static GType vala_delete_statement_get_type_once (void);

static inline gpointer
vala_delete_statement_get_instance_private (ValaDeleteStatement* self)
{
	return G_STRUCT_MEMBER_P (self, ValaDeleteStatement_private_offset);
}

ValaExpression*
vala_delete_statement_get_expression (ValaDeleteStatement* self)
{
	ValaExpression* result;
	ValaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_expression;
	result = _tmp0_;
	return result;
}

static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}

static void
vala_delete_statement_set_expression (ValaDeleteStatement* self,
                                      ValaExpression* value)
{
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_expression);
	self->priv->_expression = _tmp0_;
	_tmp1_ = self->priv->_expression;
	vala_code_node_set_parent_node ((ValaCodeNode*) _tmp1_, (ValaCodeNode*) self);
}

ValaDeleteStatement*
vala_delete_statement_construct (GType object_type,
                                 ValaExpression* expression,
                                 ValaSourceReference* source_reference)
{
	ValaDeleteStatement* self = NULL;
	g_return_val_if_fail (expression != NULL, NULL);
	self = (ValaDeleteStatement*) vala_code_node_construct (object_type);
	vala_delete_statement_set_expression (self, expression);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	return self;
}

ValaDeleteStatement*
vala_delete_statement_new (ValaExpression* expression,
                           ValaSourceReference* source_reference)
{
	return vala_delete_statement_construct (VALA_TYPE_DELETE_STATEMENT, expression, source_reference);
}

static void
vala_delete_statement_real_accept (ValaCodeNode* base,
                                   ValaCodeVisitor* visitor)
{
	ValaDeleteStatement * self;
	self = (ValaDeleteStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_delete_statement (visitor, self);
}

static void
vala_delete_statement_real_accept_children (ValaCodeNode* base,
                                            ValaCodeVisitor* visitor)
{
	ValaDeleteStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaDeleteStatement*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_delete_statement_get_expression (self);
	_tmp1_ = _tmp0_;
	vala_code_node_accept ((ValaCodeNode*) _tmp1_, visitor);
}

static void
vala_delete_statement_real_replace_expression (ValaCodeNode* base,
                                               ValaExpression* old_node,
                                               ValaExpression* new_node)
{
	ValaDeleteStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaDeleteStatement*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	_tmp0_ = vala_delete_statement_get_expression (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_node) {
		vala_delete_statement_set_expression (self, new_node);
	}
}

static gboolean
vala_delete_statement_real_check (ValaCodeNode* base,
                                  ValaCodeContext* context)
{
	ValaDeleteStatement * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaExpression* _tmp4_;
	ValaExpression* _tmp5_;
	gboolean _tmp6_ = FALSE;
	ValaExpression* _tmp7_;
	ValaExpression* _tmp8_;
	ValaDataType* _tmp9_;
	ValaDataType* _tmp10_;
	gboolean _tmp23_;
	gboolean _tmp24_;
	gboolean result = FALSE;
	self = (ValaDeleteStatement*) base;
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
	_tmp4_ = vala_delete_statement_get_expression (self);
	_tmp5_ = _tmp4_;
	if (!vala_code_node_check ((ValaCodeNode*) _tmp5_, context)) {
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		result = FALSE;
		return result;
	}
	_tmp7_ = vala_delete_statement_get_expression (self);
	_tmp8_ = _tmp7_;
	_tmp9_ = vala_expression_get_value_type (_tmp8_);
	_tmp10_ = _tmp9_;
	if (!VALA_IS_POINTER_TYPE (_tmp10_)) {
		ValaExpression* _tmp11_;
		ValaExpression* _tmp12_;
		ValaDataType* _tmp13_;
		ValaDataType* _tmp14_;
		_tmp11_ = vala_delete_statement_get_expression (self);
		_tmp12_ = _tmp11_;
		_tmp13_ = vala_expression_get_value_type (_tmp12_);
		_tmp14_ = _tmp13_;
		_tmp6_ = !VALA_IS_ARRAY_TYPE (_tmp14_);
	} else {
		_tmp6_ = FALSE;
	}
	if (_tmp6_) {
		ValaSourceReference* _tmp15_;
		ValaSourceReference* _tmp16_;
		ValaExpression* _tmp17_;
		ValaExpression* _tmp18_;
		ValaDataType* _tmp19_;
		ValaDataType* _tmp20_;
		gchar* _tmp21_;
		gchar* _tmp22_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp15_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp16_ = _tmp15_;
		_tmp17_ = vala_delete_statement_get_expression (self);
		_tmp18_ = _tmp17_;
		_tmp19_ = vala_expression_get_value_type (_tmp18_);
		_tmp20_ = _tmp19_;
		_tmp21_ = vala_code_node_to_string ((ValaCodeNode*) _tmp20_);
		_tmp22_ = _tmp21_;
		vala_report_error (_tmp16_, "delete operator not supported for `%s'", _tmp22_);
		_g_free0 (_tmp22_);
	}
	_tmp23_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp24_ = _tmp23_;
	result = !_tmp24_;
	return result;
}

static void
vala_delete_statement_real_emit (ValaCodeNode* base,
                                 ValaCodeGenerator* codegen)
{
	ValaDeleteStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaDeleteStatement*) base;
	g_return_if_fail (codegen != NULL);
	_tmp0_ = vala_delete_statement_get_expression (self);
	_tmp1_ = _tmp0_;
	vala_code_node_emit ((ValaCodeNode*) _tmp1_, codegen);
	vala_code_visitor_visit_delete_statement ((ValaCodeVisitor*) codegen, self);
}

static void
vala_delete_statement_class_init (ValaDeleteStatementClass * klass,
                                  gpointer klass_data)
{
	vala_delete_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_delete_statement_finalize;
	g_type_class_adjust_private_offset (klass, &ValaDeleteStatement_private_offset);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_delete_statement_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_delete_statement_real_accept_children;
	((ValaCodeNodeClass *) klass)->replace_expression = (void (*) (ValaCodeNode*, ValaExpression*, ValaExpression*)) vala_delete_statement_real_replace_expression;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_delete_statement_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) vala_delete_statement_real_emit;
}

static void
vala_delete_statement_vala_statement_interface_init (ValaStatementIface * iface,
                                                     gpointer iface_data)
{
	vala_delete_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}

static void
vala_delete_statement_instance_init (ValaDeleteStatement * self,
                                     gpointer klass)
{
	self->priv = vala_delete_statement_get_instance_private (self);
}

static void
vala_delete_statement_finalize (ValaCodeNode * obj)
{
	ValaDeleteStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_DELETE_STATEMENT, ValaDeleteStatement);
	_vala_code_node_unref0 (self->priv->_expression);
	VALA_CODE_NODE_CLASS (vala_delete_statement_parent_class)->finalize (obj);
}

/**
 * Represents a delete statement.
 *
 * {{{ delete foo; }}}
 */
static GType
vala_delete_statement_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaDeleteStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_delete_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaDeleteStatement), 0, (GInstanceInitFunc) vala_delete_statement_instance_init, NULL };
	static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_delete_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType vala_delete_statement_type_id;
	vala_delete_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaDeleteStatement", &g_define_type_info, 0);
	g_type_add_interface_static (vala_delete_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
	ValaDeleteStatement_private_offset = g_type_add_instance_private (vala_delete_statement_type_id, sizeof (ValaDeleteStatementPrivate));
	return vala_delete_statement_type_id;
}

GType
vala_delete_statement_get_type (void)
{
	static volatile gsize vala_delete_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_delete_statement_type_id__volatile)) {
		GType vala_delete_statement_type_id;
		vala_delete_statement_type_id = vala_delete_statement_get_type_once ();
		g_once_init_leave (&vala_delete_statement_type_id__volatile, vala_delete_statement_type_id);
	}
	return vala_delete_statement_type_id__volatile;
}

