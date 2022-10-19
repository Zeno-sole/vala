/* valaunlockstatement.c generated by valac, the Vala compiler
 * generated from valaunlockstatement.vala, do not modify */

/* valaunlockstatement.vala
 *
 * Copyright (C) 2009-2010  Jürg Billeter
 * Copyright (C) 2009  Jiří Zárevúcky
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
 * 	Jiří Zárevúcky <zarevucky.jiri@gmail.com>
 */

#include "vala.h"
#include <glib.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

struct _ValaUnlockStatementPrivate {
	ValaExpression* _resource;
};

static gint ValaUnlockStatement_private_offset;
static gpointer vala_unlock_statement_parent_class = NULL;
static ValaStatementIface * vala_unlock_statement_vala_statement_parent_iface = NULL;

static void vala_unlock_statement_set_resource (ValaUnlockStatement* self,
                                         ValaExpression* value);
static void vala_unlock_statement_real_accept (ValaCodeNode* base,
                                        ValaCodeVisitor* visitor);
static void vala_unlock_statement_real_replace_expression (ValaCodeNode* base,
                                                    ValaExpression* old_node,
                                                    ValaExpression* new_node);
static gboolean vala_unlock_statement_real_check (ValaCodeNode* base,
                                           ValaCodeContext* context);
static void vala_unlock_statement_real_emit (ValaCodeNode* base,
                                      ValaCodeGenerator* codegen);
static void vala_unlock_statement_finalize (ValaCodeNode * obj);
static GType vala_unlock_statement_get_type_once (void);

static inline gpointer
vala_unlock_statement_get_instance_private (ValaUnlockStatement* self)
{
	return G_STRUCT_MEMBER_P (self, ValaUnlockStatement_private_offset);
}

ValaExpression*
vala_unlock_statement_get_resource (ValaUnlockStatement* self)
{
	ValaExpression* result;
	ValaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_resource;
	result = _tmp0_;
	return result;
}

static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}

static void
vala_unlock_statement_set_resource (ValaUnlockStatement* self,
                                    ValaExpression* value)
{
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_resource);
	self->priv->_resource = _tmp0_;
	_tmp1_ = self->priv->_resource;
	vala_code_node_set_parent_node ((ValaCodeNode*) _tmp1_, (ValaCodeNode*) self);
}

ValaUnlockStatement*
vala_unlock_statement_construct (GType object_type,
                                 ValaExpression* resource,
                                 ValaSourceReference* source_reference)
{
	ValaUnlockStatement* self = NULL;
	g_return_val_if_fail (resource != NULL, NULL);
	self = (ValaUnlockStatement*) vala_code_node_construct (object_type);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	vala_unlock_statement_set_resource (self, resource);
	return self;
}

ValaUnlockStatement*
vala_unlock_statement_new (ValaExpression* resource,
                           ValaSourceReference* source_reference)
{
	return vala_unlock_statement_construct (VALA_TYPE_UNLOCK_STATEMENT, resource, source_reference);
}

static void
vala_unlock_statement_real_accept (ValaCodeNode* base,
                                   ValaCodeVisitor* visitor)
{
	ValaUnlockStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaUnlockStatement*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_unlock_statement_get_resource (self);
	_tmp1_ = _tmp0_;
	vala_code_node_accept ((ValaCodeNode*) _tmp1_, visitor);
	vala_code_visitor_visit_unlock_statement (visitor, self);
}

static void
vala_unlock_statement_real_replace_expression (ValaCodeNode* base,
                                               ValaExpression* old_node,
                                               ValaExpression* new_node)
{
	ValaUnlockStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaUnlockStatement*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	_tmp0_ = vala_unlock_statement_get_resource (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_node) {
		vala_unlock_statement_set_resource (self, new_node);
	}
}

static gboolean
vala_unlock_statement_real_check (ValaCodeNode* base,
                                  ValaCodeContext* context)
{
	ValaUnlockStatement * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaExpression* _tmp4_;
	ValaExpression* _tmp5_;
	gboolean _tmp6_ = FALSE;
	ValaExpression* _tmp7_;
	ValaExpression* _tmp8_;
	ValaExpression* _tmp19_;
	ValaExpression* _tmp20_;
	ValaSymbol* _tmp21_;
	ValaSymbol* _tmp22_;
	ValaSymbol* _tmp23_;
	ValaSymbol* _tmp24_;
	ValaSemanticAnalyzer* _tmp25_;
	ValaSemanticAnalyzer* _tmp26_;
	ValaClass* _tmp27_;
	ValaClass* _tmp28_;
	ValaSemanticAnalyzer* _tmp35_;
	ValaSemanticAnalyzer* _tmp36_;
	ValaClass* _tmp37_;
	ValaClass* _tmp38_;
	gboolean _tmp39_;
	gboolean _tmp40_;
	ValaExpression* _tmp47_;
	ValaExpression* _tmp48_;
	ValaSymbol* _tmp49_;
	ValaSymbol* _tmp50_;
	gboolean _tmp51_;
	gboolean _tmp52_;
	gboolean result = FALSE;
	self = (ValaUnlockStatement*) base;
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
	_tmp4_ = vala_unlock_statement_get_resource (self);
	_tmp5_ = _tmp4_;
	vala_code_node_check ((ValaCodeNode*) _tmp5_, context);
	_tmp7_ = vala_unlock_statement_get_resource (self);
	_tmp8_ = _tmp7_;
	if (VALA_IS_MEMBER_ACCESS (_tmp8_)) {
		ValaExpression* _tmp9_;
		ValaExpression* _tmp10_;
		ValaSymbol* _tmp11_;
		ValaSymbol* _tmp12_;
		_tmp9_ = vala_unlock_statement_get_resource (self);
		_tmp10_ = _tmp9_;
		_tmp11_ = vala_expression_get_symbol_reference (_tmp10_);
		_tmp12_ = _tmp11_;
		_tmp6_ = VALA_IS_LOCKABLE (_tmp12_);
	} else {
		_tmp6_ = FALSE;
	}
	if (!_tmp6_) {
		ValaExpression* _tmp13_;
		ValaExpression* _tmp14_;
		ValaExpression* _tmp15_;
		ValaExpression* _tmp16_;
		ValaSourceReference* _tmp17_;
		ValaSourceReference* _tmp18_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp13_ = vala_unlock_statement_get_resource (self);
		_tmp14_ = _tmp13_;
		vala_code_node_set_error ((ValaCodeNode*) _tmp14_, TRUE);
		_tmp15_ = vala_unlock_statement_get_resource (self);
		_tmp16_ = _tmp15_;
		_tmp17_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp16_);
		_tmp18_ = _tmp17_;
		vala_report_error (_tmp18_, "Expression is either not a member access or does not denote a lockable" \
" member");
		result = FALSE;
		return result;
	}
	_tmp19_ = vala_unlock_statement_get_resource (self);
	_tmp20_ = _tmp19_;
	_tmp21_ = vala_expression_get_symbol_reference (_tmp20_);
	_tmp22_ = _tmp21_;
	_tmp23_ = vala_symbol_get_parent_symbol (_tmp22_);
	_tmp24_ = _tmp23_;
	_tmp25_ = vala_code_context_get_analyzer (context);
	_tmp26_ = _tmp25_;
	_tmp27_ = vala_semantic_analyzer_get_current_class (_tmp26_);
	_tmp28_ = _tmp27_;
	if (_tmp24_ != G_TYPE_CHECK_INSTANCE_CAST (_tmp28_, VALA_TYPE_SYMBOL, ValaSymbol)) {
		ValaExpression* _tmp29_;
		ValaExpression* _tmp30_;
		ValaExpression* _tmp31_;
		ValaExpression* _tmp32_;
		ValaSourceReference* _tmp33_;
		ValaSourceReference* _tmp34_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp29_ = vala_unlock_statement_get_resource (self);
		_tmp30_ = _tmp29_;
		vala_code_node_set_error ((ValaCodeNode*) _tmp30_, TRUE);
		_tmp31_ = vala_unlock_statement_get_resource (self);
		_tmp32_ = _tmp31_;
		_tmp33_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp32_);
		_tmp34_ = _tmp33_;
		vala_report_error (_tmp34_, "Only members of the current class are lockable");
		result = FALSE;
		return result;
	}
	_tmp35_ = vala_code_context_get_analyzer (context);
	_tmp36_ = _tmp35_;
	_tmp37_ = vala_semantic_analyzer_get_current_class (_tmp36_);
	_tmp38_ = _tmp37_;
	_tmp39_ = vala_class_get_is_compact (_tmp38_);
	_tmp40_ = _tmp39_;
	if (_tmp40_) {
		ValaExpression* _tmp41_;
		ValaExpression* _tmp42_;
		ValaExpression* _tmp43_;
		ValaExpression* _tmp44_;
		ValaSourceReference* _tmp45_;
		ValaSourceReference* _tmp46_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp41_ = vala_unlock_statement_get_resource (self);
		_tmp42_ = _tmp41_;
		vala_code_node_set_error ((ValaCodeNode*) _tmp42_, TRUE);
		_tmp43_ = vala_unlock_statement_get_resource (self);
		_tmp44_ = _tmp43_;
		_tmp45_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp44_);
		_tmp46_ = _tmp45_;
		vala_report_error (_tmp46_, "Only members of the non-compact classes are lockable");
		result = FALSE;
		return result;
	}
	_tmp47_ = vala_unlock_statement_get_resource (self);
	_tmp48_ = _tmp47_;
	_tmp49_ = vala_expression_get_symbol_reference (_tmp48_);
	_tmp50_ = _tmp49_;
	vala_lockable_set_lock_used (G_TYPE_CHECK_INSTANCE_CAST (_tmp50_, VALA_TYPE_LOCKABLE, ValaLockable), TRUE);
	_tmp51_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp52_ = _tmp51_;
	result = !_tmp52_;
	return result;
}

static void
vala_unlock_statement_real_emit (ValaCodeNode* base,
                                 ValaCodeGenerator* codegen)
{
	ValaUnlockStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaUnlockStatement*) base;
	g_return_if_fail (codegen != NULL);
	_tmp0_ = vala_unlock_statement_get_resource (self);
	_tmp1_ = _tmp0_;
	vala_code_node_emit ((ValaCodeNode*) _tmp1_, codegen);
	vala_code_visitor_visit_unlock_statement ((ValaCodeVisitor*) codegen, self);
}

static void
vala_unlock_statement_class_init (ValaUnlockStatementClass * klass,
                                  gpointer klass_data)
{
	vala_unlock_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_unlock_statement_finalize;
	g_type_class_adjust_private_offset (klass, &ValaUnlockStatement_private_offset);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_unlock_statement_real_accept;
	((ValaCodeNodeClass *) klass)->replace_expression = (void (*) (ValaCodeNode*, ValaExpression*, ValaExpression*)) vala_unlock_statement_real_replace_expression;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_unlock_statement_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) vala_unlock_statement_real_emit;
}

static void
vala_unlock_statement_vala_statement_interface_init (ValaStatementIface * iface,
                                                     gpointer iface_data)
{
	vala_unlock_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}

static void
vala_unlock_statement_instance_init (ValaUnlockStatement * self,
                                     gpointer klass)
{
	self->priv = vala_unlock_statement_get_instance_private (self);
}

static void
vala_unlock_statement_finalize (ValaCodeNode * obj)
{
	ValaUnlockStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_UNLOCK_STATEMENT, ValaUnlockStatement);
	_vala_code_node_unref0 (self->priv->_resource);
	VALA_CODE_NODE_CLASS (vala_unlock_statement_parent_class)->finalize (obj);
}

/**
 * Represents an unlock statement.
 *
 * {{{ unlock (foo); }}}
 */
static GType
vala_unlock_statement_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaUnlockStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_unlock_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaUnlockStatement), 0, (GInstanceInitFunc) vala_unlock_statement_instance_init, NULL };
	static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_unlock_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType vala_unlock_statement_type_id;
	vala_unlock_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaUnlockStatement", &g_define_type_info, 0);
	g_type_add_interface_static (vala_unlock_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
	ValaUnlockStatement_private_offset = g_type_add_instance_private (vala_unlock_statement_type_id, sizeof (ValaUnlockStatementPrivate));
	return vala_unlock_statement_type_id;
}

GType
vala_unlock_statement_get_type (void)
{
	static volatile gsize vala_unlock_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_unlock_statement_type_id__volatile)) {
		GType vala_unlock_statement_type_id;
		vala_unlock_statement_type_id = vala_unlock_statement_get_type_once ();
		g_once_init_leave (&vala_unlock_statement_type_id__volatile, vala_unlock_statement_type_id);
	}
	return vala_unlock_statement_type_id__volatile;
}

