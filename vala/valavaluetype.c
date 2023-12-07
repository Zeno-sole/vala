/* valavaluetype.c generated by valac, the Vala compiler
 * generated from valavaluetype.vala, do not modify */

/* valavaluetype.vala
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
#include <glib.h>
#include <glib-object.h>

static gpointer vala_value_type_parent_class = NULL;

static gboolean vala_value_type_real_is_disposable (ValaDataType* base);
static gboolean vala_value_type_real_check (ValaCodeNode* base,
                                     ValaCodeContext* context);
static GType vala_value_type_get_type_once (void);

ValaValueType*
vala_value_type_construct (GType object_type,
                           ValaTypeSymbol* type_symbol,
                           ValaSourceReference* source_reference)
{
	ValaValueType* self = NULL;
	g_return_val_if_fail (type_symbol != NULL, NULL);
	self = (ValaValueType*) vala_data_type_construct_with_symbol (object_type, (ValaSymbol*) type_symbol, source_reference);
	return self;
}

static gboolean
vala_value_type_real_is_disposable (ValaDataType* base)
{
	ValaValueType * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
	ValaStruct* st = NULL;
	ValaTypeSymbol* _tmp4_;
	ValaTypeSymbol* _tmp5_;
	gboolean _tmp6_ = FALSE;
	ValaStruct* _tmp7_;
	gboolean result;
	self = (ValaValueType*) base;
	_tmp0_ = vala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	if (!_tmp1_) {
		result = FALSE;
		return result;
	}
	_tmp2_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp3_ = _tmp2_;
	if (_tmp3_) {
		result = TRUE;
		return result;
	}
	_tmp4_ = vala_data_type_get_type_symbol ((ValaDataType*) self);
	_tmp5_ = _tmp4_;
	st = VALA_IS_STRUCT (_tmp5_) ? ((ValaStruct*) _tmp5_) : NULL;
	_tmp7_ = st;
	if (_tmp7_ != NULL) {
		ValaStruct* _tmp8_;
		gboolean _tmp9_;
		gboolean _tmp10_;
		_tmp8_ = st;
		_tmp9_ = vala_code_node_get_error ((ValaCodeNode*) _tmp8_);
		_tmp10_ = _tmp9_;
		_tmp6_ = !_tmp10_;
	} else {
		_tmp6_ = FALSE;
	}
	if (_tmp6_) {
		ValaStruct* _tmp11_;
		_tmp11_ = st;
		result = vala_struct_is_disposable (_tmp11_);
		return result;
	}
	result = FALSE;
	return result;
}

static gboolean
vala_value_type_real_check (ValaCodeNode* base,
                            ValaCodeContext* context)
{
	ValaValueType * self;
	ValaTypeSymbol* _tmp0_;
	ValaTypeSymbol* _tmp1_;
	gboolean result;
	self = (ValaValueType*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = vala_data_type_get_type_symbol ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	if (!vala_code_node_check ((ValaCodeNode*) _tmp1_, context)) {
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		result = FALSE;
		return result;
	}
	if (!vala_data_type_check_type_arguments ((ValaDataType*) self, context, TRUE)) {
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		result = FALSE;
		return result;
	}
	result = TRUE;
	return result;
}

static void
vala_value_type_class_init (ValaValueTypeClass * klass,
                            gpointer klass_data)
{
	vala_value_type_parent_class = g_type_class_peek_parent (klass);
	((ValaDataTypeClass *) klass)->is_disposable = (gboolean (*) (ValaDataType*)) vala_value_type_real_is_disposable;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_value_type_real_check;
}

static void
vala_value_type_instance_init (ValaValueType * self,
                               gpointer klass)
{
}

/**
 * A value type, i.e. a struct or an enum type.
 */
static GType
vala_value_type_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaValueTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_value_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaValueType), 0, (GInstanceInitFunc) vala_value_type_instance_init, NULL };
	GType vala_value_type_type_id;
	vala_value_type_type_id = g_type_register_static (VALA_TYPE_DATA_TYPE, "ValaValueType", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	return vala_value_type_type_id;
}

GType
vala_value_type_get_type (void)
{
	static volatile gsize vala_value_type_type_id__once = 0;
	if (g_once_init_enter (&vala_value_type_type_id__once)) {
		GType vala_value_type_type_id;
		vala_value_type_type_id = vala_value_type_get_type_once ();
		g_once_init_leave (&vala_value_type_type_id__once, vala_value_type_type_id);
	}
	return vala_value_type_type_id__once;
}

