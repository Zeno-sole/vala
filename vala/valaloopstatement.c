/* valaloopstatement.c generated by valac, the Vala compiler
 * generated from valaloopstatement.vala, do not modify */

/* valaloopstatement.vala
 *
 * Copyright (C) 2009-2010  Jürg Billeter
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
#include <valagee.h>
#include <glib-object.h>
#include <glib.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

static gpointer vala_loop_statement_parent_class = NULL;
static ValaStatementIface * vala_loop_statement_vala_statement_parent_iface = NULL;

static void vala_loop_statement_real_accept (ValaCodeNode* base,
                                      ValaCodeVisitor* visitor);
static void vala_loop_statement_real_accept_children (ValaCodeNode* base,
                                               ValaCodeVisitor* visitor);
static void vala_loop_statement_real_get_error_types (ValaCodeNode* base,
                                               ValaCollection* collection,
                                               ValaSourceReference* source_reference);
static gboolean vala_loop_statement_real_check (ValaCodeNode* base,
                                         ValaCodeContext* context);
static void vala_loop_statement_real_emit (ValaCodeNode* base,
                                    ValaCodeGenerator* codegen);
static GType vala_loop_statement_get_type_once (void);

/**
 * Creates a new loop.
 *
 * @param body             loop body
 * @param source_reference reference to source code
 * @return                 newly created while statement
 */
ValaLoopStatement*
vala_loop_statement_construct (GType object_type,
                               ValaBlock* body,
                               ValaSourceReference* source_reference)
{
	ValaLoopStatement* self = NULL;
	ValaBooleanLiteral* _tmp0_;
	ValaBooleanLiteral* _tmp1_;
	g_return_val_if_fail (body != NULL, NULL);
	_tmp0_ = vala_boolean_literal_new (TRUE, source_reference);
	_tmp1_ = _tmp0_;
	self = (ValaLoopStatement*) vala_loop_construct (object_type, (ValaExpression*) _tmp1_, body, source_reference);
	_vala_code_node_unref0 (_tmp1_);
	return self;
}

ValaLoopStatement*
vala_loop_statement_new (ValaBlock* body,
                         ValaSourceReference* source_reference)
{
	return vala_loop_statement_construct (VALA_TYPE_LOOP_STATEMENT, body, source_reference);
}

static void
vala_loop_statement_real_accept (ValaCodeNode* base,
                                 ValaCodeVisitor* visitor)
{
	ValaLoopStatement * self;
	self = (ValaLoopStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_loop_statement (visitor, self);
}

static void
vala_loop_statement_real_accept_children (ValaCodeNode* base,
                                          ValaCodeVisitor* visitor)
{
	ValaLoopStatement * self;
	ValaBlock* _tmp0_;
	ValaBlock* _tmp1_;
	self = (ValaLoopStatement*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_loop_get_body ((ValaLoop*) self);
	_tmp1_ = _tmp0_;
	vala_code_node_accept ((ValaCodeNode*) _tmp1_, visitor);
}

static void
vala_loop_statement_real_get_error_types (ValaCodeNode* base,
                                          ValaCollection* collection,
                                          ValaSourceReference* source_reference)
{
	ValaLoopStatement * self;
	ValaBlock* _tmp0_;
	ValaBlock* _tmp1_;
	self = (ValaLoopStatement*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = vala_loop_get_body ((ValaLoop*) self);
	_tmp1_ = _tmp0_;
	vala_code_node_get_error_types ((ValaCodeNode*) _tmp1_, collection, source_reference);
}

static gboolean
vala_loop_statement_real_check (ValaCodeNode* base,
                                ValaCodeContext* context)
{
	ValaLoopStatement * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaExpression* _tmp4_;
	ValaExpression* _tmp5_;
	ValaBlock* _tmp6_;
	ValaBlock* _tmp7_;
	gboolean _tmp8_;
	gboolean _tmp9_;
	gboolean result;
	self = (ValaLoopStatement*) base;
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
	_tmp4_ = vala_loop_get_condition ((ValaLoop*) self);
	_tmp5_ = _tmp4_;
	vala_code_node_check ((ValaCodeNode*) _tmp5_, context);
	_tmp6_ = vala_loop_get_body ((ValaLoop*) self);
	_tmp7_ = _tmp6_;
	vala_code_node_check ((ValaCodeNode*) _tmp7_, context);
	_tmp8_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp9_ = _tmp8_;
	result = !_tmp9_;
	return result;
}

static void
vala_loop_statement_real_emit (ValaCodeNode* base,
                               ValaCodeGenerator* codegen)
{
	ValaLoopStatement * self;
	self = (ValaLoopStatement*) base;
	g_return_if_fail (codegen != NULL);
	vala_code_visitor_visit_loop_statement ((ValaCodeVisitor*) codegen, self);
}

static void
vala_loop_statement_class_init (ValaLoopStatementClass * klass,
                                gpointer klass_data)
{
	vala_loop_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_loop_statement_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_loop_statement_real_accept_children;
	((ValaCodeNodeClass *) klass)->get_error_types = (void (*) (ValaCodeNode*, ValaCollection*, ValaSourceReference*)) vala_loop_statement_real_get_error_types;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_loop_statement_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) vala_loop_statement_real_emit;
}

static void
vala_loop_statement_vala_statement_interface_init (ValaStatementIface * iface,
                                                   gpointer iface_data)
{
	vala_loop_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}

static void
vala_loop_statement_instance_init (ValaLoopStatement * self,
                                   gpointer klass)
{
}

/**
 * Represents an endless loop.
 */
static GType
vala_loop_statement_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaLoopStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_loop_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaLoopStatement), 0, (GInstanceInitFunc) vala_loop_statement_instance_init, NULL };
	static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_loop_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType vala_loop_statement_type_id;
	vala_loop_statement_type_id = g_type_register_static (VALA_TYPE_LOOP, "ValaLoopStatement", &g_define_type_info, 0);
	g_type_add_interface_static (vala_loop_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
	return vala_loop_statement_type_id;
}

GType
vala_loop_statement_get_type (void)
{
	static volatile gsize vala_loop_statement_type_id__once = 0;
	if (g_once_init_enter (&vala_loop_statement_type_id__once)) {
		GType vala_loop_statement_type_id;
		vala_loop_statement_type_id = vala_loop_statement_get_type_once ();
		g_once_init_leave (&vala_loop_statement_type_id__once, vala_loop_statement_type_id);
	}
	return vala_loop_statement_type_id__once;
}

