/* valapointertype.c generated by valac, the Vala compiler
 * generated from valapointertype.vala, do not modify */

/* valapointertype.vala
 *
 * Copyright (C) 2007-2009  Jürg Billeter
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

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_code_context_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_context_unref (var), NULL)))

struct _ValaPointerTypePrivate {
	ValaDataType* _base_type;
};

static gint ValaPointerType_private_offset;
static gpointer vala_pointer_type_parent_class = NULL;

static gchar* vala_pointer_type_real_to_qualified_string (ValaDataType* base,
                                                   ValaScope* scope);
static ValaDataType* vala_pointer_type_real_copy (ValaDataType* base);
static gboolean vala_pointer_type_real_compatible (ValaDataType* base,
                                            ValaDataType* target_type);
static ValaSymbol* vala_pointer_type_real_get_member (ValaDataType* base,
                                               const gchar* member_name);
static ValaSymbol* vala_pointer_type_real_get_pointer_member (ValaDataType* base,
                                                       const gchar* member_name);
static gboolean vala_pointer_type_real_is_accessible (ValaDataType* base,
                                               ValaSymbol* sym);
static void vala_pointer_type_real_accept_children (ValaCodeNode* base,
                                             ValaCodeVisitor* visitor);
static gboolean vala_pointer_type_real_stricter (ValaDataType* base,
                                          ValaDataType* type2);
static void vala_pointer_type_real_replace_type (ValaCodeNode* base,
                                          ValaDataType* old_type,
                                          ValaDataType* new_type);
static gboolean vala_pointer_type_real_is_disposable (ValaDataType* base);
static ValaDataType* vala_pointer_type_real_get_actual_type (ValaDataType* base,
                                                      ValaDataType* derived_instance_type,
                                                      ValaList* method_type_arguments,
                                                      ValaCodeNode* node_reference);
static ValaDataType* vala_pointer_type_real_infer_type_argument (ValaDataType* base,
                                                          ValaTypeParameter* type_param,
                                                          ValaDataType* value_type);
static gboolean vala_pointer_type_real_check (ValaCodeNode* base,
                                       ValaCodeContext* context);
static void vala_pointer_type_finalize (ValaCodeNode * obj);
static GType vala_pointer_type_get_type_once (void);

static inline gpointer
vala_pointer_type_get_instance_private (ValaPointerType* self)
{
	return G_STRUCT_MEMBER_P (self, ValaPointerType_private_offset);
}

ValaDataType*
vala_pointer_type_get_base_type (ValaPointerType* self)
{
	ValaDataType* result;
	ValaDataType* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_base_type;
	result = _tmp0_;
	return result;
}

static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}

void
vala_pointer_type_set_base_type (ValaPointerType* self,
                                 ValaDataType* value)
{
	ValaDataType* _tmp0_;
	ValaDataType* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_base_type);
	self->priv->_base_type = _tmp0_;
	_tmp1_ = self->priv->_base_type;
	vala_code_node_set_parent_node ((ValaCodeNode*) _tmp1_, (ValaCodeNode*) self);
}

ValaPointerType*
vala_pointer_type_construct (GType object_type,
                             ValaDataType* base_type,
                             ValaSourceReference* source_reference)
{
	ValaPointerType* self = NULL;
	g_return_val_if_fail (base_type != NULL, NULL);
	self = (ValaPointerType*) vala_data_type_construct (object_type);
	vala_pointer_type_set_base_type (self, base_type);
	vala_data_type_set_nullable ((ValaDataType*) self, TRUE);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	return self;
}

ValaPointerType*
vala_pointer_type_new (ValaDataType* base_type,
                       ValaSourceReference* source_reference)
{
	return vala_pointer_type_construct (VALA_TYPE_POINTER_TYPE, base_type, source_reference);
}

static gchar*
vala_pointer_type_real_to_qualified_string (ValaDataType* base,
                                            ValaScope* scope)
{
	ValaPointerType * self;
	ValaDataType* _tmp0_;
	ValaDataType* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	gchar* result;
	self = (ValaPointerType*) base;
	_tmp0_ = vala_pointer_type_get_base_type (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_data_type_to_qualified_string (_tmp1_, scope);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strconcat (_tmp3_, "*", NULL);
	_tmp5_ = _tmp4_;
	_g_free0 (_tmp3_);
	result = _tmp5_;
	return result;
}

static ValaDataType*
vala_pointer_type_real_copy (ValaDataType* base)
{
	ValaPointerType * self;
	ValaDataType* _tmp0_;
	ValaDataType* _tmp1_;
	ValaDataType* _tmp2_;
	ValaDataType* _tmp3_;
	ValaSourceReference* _tmp4_;
	ValaSourceReference* _tmp5_;
	ValaPointerType* _tmp6_;
	ValaDataType* _tmp7_;
	ValaDataType* result;
	self = (ValaPointerType*) base;
	_tmp0_ = vala_pointer_type_get_base_type (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_data_type_copy (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp5_ = _tmp4_;
	_tmp6_ = vala_pointer_type_new (_tmp3_, _tmp5_);
	_tmp7_ = (ValaDataType*) _tmp6_;
	_vala_code_node_unref0 (_tmp3_);
	result = _tmp7_;
	return result;
}

static gboolean
vala_pointer_type_real_compatible (ValaDataType* base,
                                   ValaDataType* target_type)
{
	ValaPointerType * self;
	gboolean _tmp16_ = FALSE;
	ValaTypeSymbol* _tmp17_;
	ValaTypeSymbol* _tmp18_;
	ValaDataType* _tmp21_;
	ValaDataType* _tmp22_;
	ValaCodeContext* context = NULL;
	ValaCodeContext* _tmp25_;
	gboolean _tmp26_ = FALSE;
	gboolean _tmp27_ = FALSE;
	ValaCodeContext* _tmp28_;
	ValaProfile _tmp29_;
	ValaProfile _tmp30_;
	gboolean result;
	self = (ValaPointerType*) base;
	g_return_val_if_fail (target_type != NULL, FALSE);
	if (VALA_IS_POINTER_TYPE (target_type)) {
		ValaPointerType* tt = NULL;
		gboolean _tmp0_ = FALSE;
		ValaPointerType* _tmp1_;
		ValaDataType* _tmp2_;
		ValaDataType* _tmp3_;
		ValaDataType* _tmp6_;
		ValaDataType* _tmp7_;
		ValaPointerType* _tmp8_;
		ValaDataType* _tmp9_;
		ValaDataType* _tmp10_;
		ValaDataType* _tmp11_;
		ValaDataType* _tmp12_;
		ValaPointerType* _tmp13_;
		ValaDataType* _tmp14_;
		ValaDataType* _tmp15_;
		tt = VALA_IS_POINTER_TYPE (target_type) ? ((ValaPointerType*) target_type) : NULL;
		_tmp1_ = tt;
		_tmp2_ = vala_pointer_type_get_base_type (_tmp1_);
		_tmp3_ = _tmp2_;
		if (VALA_IS_VOID_TYPE (_tmp3_)) {
			_tmp0_ = TRUE;
		} else {
			ValaDataType* _tmp4_;
			ValaDataType* _tmp5_;
			_tmp4_ = vala_pointer_type_get_base_type (self);
			_tmp5_ = _tmp4_;
			_tmp0_ = VALA_IS_VOID_TYPE (_tmp5_);
		}
		if (_tmp0_) {
			result = TRUE;
			return result;
		}
		_tmp6_ = vala_pointer_type_get_base_type (self);
		_tmp7_ = _tmp6_;
		_tmp8_ = tt;
		_tmp9_ = vala_pointer_type_get_base_type (_tmp8_);
		_tmp10_ = _tmp9_;
		if (vala_data_type_is_reference_type_or_type_parameter (_tmp7_) != vala_data_type_is_reference_type_or_type_parameter (_tmp10_)) {
			result = FALSE;
			return result;
		}
		_tmp11_ = vala_pointer_type_get_base_type (self);
		_tmp12_ = _tmp11_;
		_tmp13_ = tt;
		_tmp14_ = vala_pointer_type_get_base_type (_tmp13_);
		_tmp15_ = _tmp14_;
		result = vala_data_type_compatible (_tmp12_, _tmp15_);
		return result;
	}
	_tmp17_ = vala_data_type_get_type_symbol (target_type);
	_tmp18_ = _tmp17_;
	if (_tmp18_ != NULL) {
		ValaTypeSymbol* _tmp19_;
		ValaTypeSymbol* _tmp20_;
		_tmp19_ = vala_data_type_get_type_symbol (target_type);
		_tmp20_ = _tmp19_;
		_tmp16_ = vala_code_node_has_attribute ((ValaCodeNode*) _tmp20_, "PointerType");
	} else {
		_tmp16_ = FALSE;
	}
	if (_tmp16_) {
		result = TRUE;
		return result;
	}
	if (VALA_IS_GENERIC_TYPE (target_type)) {
		result = TRUE;
		return result;
	}
	_tmp21_ = vala_pointer_type_get_base_type (self);
	_tmp22_ = _tmp21_;
	if (vala_data_type_is_reference_type_or_type_parameter (_tmp22_)) {
		ValaDataType* _tmp23_;
		ValaDataType* _tmp24_;
		_tmp23_ = vala_pointer_type_get_base_type (self);
		_tmp24_ = _tmp23_;
		result = vala_data_type_compatible (_tmp24_, target_type);
		return result;
	}
	_tmp25_ = vala_code_context_get ();
	context = _tmp25_;
	_tmp28_ = context;
	_tmp29_ = vala_code_context_get_profile (_tmp28_);
	_tmp30_ = _tmp29_;
	if (_tmp30_ == VALA_PROFILE_GOBJECT) {
		ValaTypeSymbol* _tmp31_;
		ValaTypeSymbol* _tmp32_;
		_tmp31_ = vala_data_type_get_type_symbol (target_type);
		_tmp32_ = _tmp31_;
		_tmp27_ = _tmp32_ != NULL;
	} else {
		_tmp27_ = FALSE;
	}
	if (_tmp27_) {
		ValaTypeSymbol* _tmp33_;
		ValaTypeSymbol* _tmp34_;
		ValaCodeContext* _tmp35_;
		ValaSemanticAnalyzer* _tmp36_;
		ValaSemanticAnalyzer* _tmp37_;
		ValaStructValueType* _tmp38_;
		ValaTypeSymbol* _tmp39_;
		ValaTypeSymbol* _tmp40_;
		_tmp33_ = vala_data_type_get_type_symbol (target_type);
		_tmp34_ = _tmp33_;
		_tmp35_ = context;
		_tmp36_ = vala_code_context_get_analyzer (_tmp35_);
		_tmp37_ = _tmp36_;
		_tmp38_ = _tmp37_->gvalue_type;
		_tmp39_ = vala_data_type_get_type_symbol ((ValaDataType*) _tmp38_);
		_tmp40_ = _tmp39_;
		_tmp26_ = vala_typesymbol_is_subtype_of (_tmp34_, _tmp40_);
	} else {
		_tmp26_ = FALSE;
	}
	if (_tmp26_) {
		result = TRUE;
		_vala_code_context_unref0 (context);
		return result;
	}
	result = FALSE;
	_vala_code_context_unref0 (context);
	return result;
}

static ValaSymbol*
vala_pointer_type_real_get_member (ValaDataType* base,
                                   const gchar* member_name)
{
	ValaPointerType * self;
	ValaSymbol* result;
	self = (ValaPointerType*) base;
	g_return_val_if_fail (member_name != NULL, NULL);
	result = NULL;
	return result;
}

static ValaSymbol*
vala_pointer_type_real_get_pointer_member (ValaDataType* base,
                                           const gchar* member_name)
{
	ValaPointerType * self;
	ValaSymbol* base_symbol = NULL;
	ValaDataType* _tmp0_;
	ValaDataType* _tmp1_;
	ValaTypeSymbol* _tmp2_;
	ValaTypeSymbol* _tmp3_;
	ValaSymbol* _tmp4_;
	ValaSymbol* _tmp5_;
	ValaSymbol* _tmp6_;
	ValaSymbol* result;
	self = (ValaPointerType*) base;
	g_return_val_if_fail (member_name != NULL, NULL);
	_tmp0_ = vala_pointer_type_get_base_type (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_data_type_get_type_symbol (_tmp1_);
	_tmp3_ = _tmp2_;
	base_symbol = (ValaSymbol*) _tmp3_;
	_tmp4_ = base_symbol;
	if (_tmp4_ == NULL) {
		result = NULL;
		return result;
	}
	_tmp5_ = base_symbol;
	_tmp6_ = vala_semantic_analyzer_symbol_lookup_inherited (_tmp5_, member_name);
	result = _tmp6_;
	return result;
}

static gboolean
vala_pointer_type_real_is_accessible (ValaDataType* base,
                                      ValaSymbol* sym)
{
	ValaPointerType * self;
	ValaDataType* _tmp0_;
	ValaDataType* _tmp1_;
	gboolean result;
	self = (ValaPointerType*) base;
	g_return_val_if_fail (sym != NULL, FALSE);
	_tmp0_ = vala_pointer_type_get_base_type (self);
	_tmp1_ = _tmp0_;
	result = vala_data_type_is_accessible (_tmp1_, sym);
	return result;
}

static void
vala_pointer_type_real_accept_children (ValaCodeNode* base,
                                        ValaCodeVisitor* visitor)
{
	ValaPointerType * self;
	ValaDataType* _tmp0_;
	ValaDataType* _tmp1_;
	self = (ValaPointerType*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_pointer_type_get_base_type (self);
	_tmp1_ = _tmp0_;
	vala_code_node_accept ((ValaCodeNode*) _tmp1_, visitor);
}

static gboolean
vala_pointer_type_real_stricter (ValaDataType* base,
                                 ValaDataType* type2)
{
	ValaPointerType * self;
	ValaDataType* _tmp0_;
	ValaDataType* _tmp1_;
	ValaDataType* _tmp2_;
	ValaDataType* _tmp3_;
	gboolean result;
	self = (ValaPointerType*) base;
	g_return_val_if_fail (type2 != NULL, FALSE);
	if (VALA_IS_POINTER_TYPE (type2)) {
		result = vala_data_type_compatible ((ValaDataType*) self, type2);
		return result;
	}
	_tmp0_ = vala_pointer_type_get_base_type (self);
	_tmp1_ = _tmp0_;
	if (VALA_IS_VOID_TYPE (_tmp1_)) {
		result = VALA_IS_REFERENCE_TYPE (type2);
		return result;
	}
	_tmp2_ = vala_pointer_type_get_base_type (self);
	_tmp3_ = _tmp2_;
	result = vala_data_type_stricter (_tmp3_, type2);
	return result;
}

static void
vala_pointer_type_real_replace_type (ValaCodeNode* base,
                                     ValaDataType* old_type,
                                     ValaDataType* new_type)
{
	ValaPointerType * self;
	ValaDataType* _tmp0_;
	ValaDataType* _tmp1_;
	self = (ValaPointerType*) base;
	g_return_if_fail (old_type != NULL);
	g_return_if_fail (new_type != NULL);
	_tmp0_ = vala_pointer_type_get_base_type (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_type) {
		vala_pointer_type_set_base_type (self, new_type);
	}
}

static gboolean
vala_pointer_type_real_is_disposable (ValaDataType* base)
{
	ValaPointerType * self;
	gboolean result;
	self = (ValaPointerType*) base;
	result = FALSE;
	return result;
}

static ValaDataType*
vala_pointer_type_real_get_actual_type (ValaDataType* base,
                                        ValaDataType* derived_instance_type,
                                        ValaList* method_type_arguments,
                                        ValaCodeNode* node_reference)
{
	ValaPointerType * self;
	ValaPointerType* _result_ = NULL;
	ValaDataType* _tmp0_;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	ValaDataType* _tmp3_;
	ValaDataType* _tmp4_;
	ValaDataType* result;
	self = (ValaPointerType*) base;
	_tmp0_ = vala_data_type_copy ((ValaDataType*) self);
	_result_ = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, VALA_TYPE_POINTER_TYPE, ValaPointerType);
	if (derived_instance_type == NULL) {
		_tmp1_ = method_type_arguments == NULL;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		result = (ValaDataType*) _result_;
		return result;
	}
	_tmp3_ = vala_pointer_type_get_base_type (self);
	_tmp4_ = _tmp3_;
	if (VALA_IS_GENERIC_TYPE (_tmp4_)) {
		_tmp2_ = TRUE;
	} else {
		ValaDataType* _tmp5_;
		ValaDataType* _tmp6_;
		_tmp5_ = vala_pointer_type_get_base_type (self);
		_tmp6_ = _tmp5_;
		_tmp2_ = vala_data_type_has_type_arguments (_tmp6_);
	}
	if (_tmp2_) {
		ValaPointerType* _tmp7_;
		ValaPointerType* _tmp8_;
		ValaDataType* _tmp9_;
		ValaDataType* _tmp10_;
		ValaDataType* _tmp11_;
		ValaDataType* _tmp12_;
		_tmp7_ = _result_;
		_tmp8_ = _result_;
		_tmp9_ = vala_pointer_type_get_base_type (_tmp8_);
		_tmp10_ = _tmp9_;
		_tmp11_ = vala_data_type_get_actual_type (_tmp10_, derived_instance_type, method_type_arguments, node_reference);
		_tmp12_ = _tmp11_;
		vala_pointer_type_set_base_type (_tmp7_, _tmp12_);
		_vala_code_node_unref0 (_tmp12_);
	}
	result = (ValaDataType*) _result_;
	return result;
}

static ValaDataType*
vala_pointer_type_real_infer_type_argument (ValaDataType* base,
                                            ValaTypeParameter* type_param,
                                            ValaDataType* value_type)
{
	ValaPointerType * self;
	ValaPointerType* pointer_type = NULL;
	ValaPointerType* _tmp0_;
	ValaDataType* result;
	self = (ValaPointerType*) base;
	g_return_val_if_fail (type_param != NULL, NULL);
	g_return_val_if_fail (value_type != NULL, NULL);
	pointer_type = VALA_IS_POINTER_TYPE (value_type) ? ((ValaPointerType*) value_type) : NULL;
	_tmp0_ = pointer_type;
	if (_tmp0_ != NULL) {
		ValaDataType* _tmp1_;
		ValaDataType* _tmp2_;
		ValaPointerType* _tmp3_;
		ValaDataType* _tmp4_;
		ValaDataType* _tmp5_;
		ValaDataType* _tmp6_;
		_tmp1_ = vala_pointer_type_get_base_type (self);
		_tmp2_ = _tmp1_;
		_tmp3_ = pointer_type;
		_tmp4_ = vala_pointer_type_get_base_type (_tmp3_);
		_tmp5_ = _tmp4_;
		_tmp6_ = vala_data_type_infer_type_argument (_tmp2_, type_param, _tmp5_);
		result = _tmp6_;
		return result;
	}
	result = NULL;
	return result;
}

static gboolean
vala_pointer_type_real_check (ValaCodeNode* base,
                              ValaCodeContext* context)
{
	ValaPointerType * self;
	ValaDataType* _tmp0_;
	ValaDataType* _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
	gboolean result;
	self = (ValaPointerType*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = vala_pointer_type_get_base_type (self);
	_tmp1_ = _tmp0_;
	vala_code_node_set_error ((ValaCodeNode*) self, !vala_code_node_check ((ValaCodeNode*) _tmp1_, context));
	_tmp2_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp3_ = _tmp2_;
	result = !_tmp3_;
	return result;
}

static void
vala_pointer_type_class_init (ValaPointerTypeClass * klass,
                              gpointer klass_data)
{
	vala_pointer_type_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_pointer_type_finalize;
	g_type_class_adjust_private_offset (klass, &ValaPointerType_private_offset);
	((ValaDataTypeClass *) klass)->to_qualified_string = (gchar* (*) (ValaDataType*, ValaScope*)) vala_pointer_type_real_to_qualified_string;
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*) (ValaDataType*)) vala_pointer_type_real_copy;
	((ValaDataTypeClass *) klass)->compatible = (gboolean (*) (ValaDataType*, ValaDataType*)) vala_pointer_type_real_compatible;
	((ValaDataTypeClass *) klass)->get_member = (ValaSymbol* (*) (ValaDataType*, const gchar*)) vala_pointer_type_real_get_member;
	((ValaDataTypeClass *) klass)->get_pointer_member = (ValaSymbol* (*) (ValaDataType*, const gchar*)) vala_pointer_type_real_get_pointer_member;
	((ValaDataTypeClass *) klass)->is_accessible = (gboolean (*) (ValaDataType*, ValaSymbol*)) vala_pointer_type_real_is_accessible;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_pointer_type_real_accept_children;
	((ValaDataTypeClass *) klass)->stricter = (gboolean (*) (ValaDataType*, ValaDataType*)) vala_pointer_type_real_stricter;
	((ValaCodeNodeClass *) klass)->replace_type = (void (*) (ValaCodeNode*, ValaDataType*, ValaDataType*)) vala_pointer_type_real_replace_type;
	((ValaDataTypeClass *) klass)->is_disposable = (gboolean (*) (ValaDataType*)) vala_pointer_type_real_is_disposable;
	((ValaDataTypeClass *) klass)->get_actual_type = (ValaDataType* (*) (ValaDataType*, ValaDataType*, ValaList*, ValaCodeNode*)) vala_pointer_type_real_get_actual_type;
	((ValaDataTypeClass *) klass)->infer_type_argument = (ValaDataType* (*) (ValaDataType*, ValaTypeParameter*, ValaDataType*)) vala_pointer_type_real_infer_type_argument;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_pointer_type_real_check;
}

static void
vala_pointer_type_instance_init (ValaPointerType * self,
                                 gpointer klass)
{
	self->priv = vala_pointer_type_get_instance_private (self);
}

static void
vala_pointer_type_finalize (ValaCodeNode * obj)
{
	ValaPointerType * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_POINTER_TYPE, ValaPointerType);
	_vala_code_node_unref0 (self->priv->_base_type);
	VALA_CODE_NODE_CLASS (vala_pointer_type_parent_class)->finalize (obj);
}

/**
 * A pointer type.
 */
static GType
vala_pointer_type_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaPointerTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_pointer_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaPointerType), 0, (GInstanceInitFunc) vala_pointer_type_instance_init, NULL };
	GType vala_pointer_type_type_id;
	vala_pointer_type_type_id = g_type_register_static (VALA_TYPE_DATA_TYPE, "ValaPointerType", &g_define_type_info, 0);
	ValaPointerType_private_offset = g_type_add_instance_private (vala_pointer_type_type_id, sizeof (ValaPointerTypePrivate));
	return vala_pointer_type_type_id;
}

GType
vala_pointer_type_get_type (void)
{
	static volatile gsize vala_pointer_type_type_id__once = 0;
	if (g_once_init_enter (&vala_pointer_type_type_id__once)) {
		GType vala_pointer_type_type_id;
		vala_pointer_type_type_id = vala_pointer_type_get_type_once ();
		g_once_init_leave (&vala_pointer_type_type_id__once, vala_pointer_type_type_id);
	}
	return vala_pointer_type_type_id__once;
}

