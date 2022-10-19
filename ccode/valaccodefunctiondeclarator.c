/* valaccodefunctiondeclarator.c generated by valac, the Vala compiler
 * generated from valaccodefunctiondeclarator.vala, do not modify */

/* valaccodefunctiondeclarator.vala
 *
 * Copyright (C) 2006-2007  Jürg Billeter
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
#include <valagee.h>
#include <glib-object.h>
#include <glib.h>
#include <stdlib.h>
#include <string.h>

#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaCCodeFunctionDeclaratorPrivate {
	ValaList* parameters;
};

static gint ValaCCodeFunctionDeclarator_private_offset;
static gpointer vala_ccode_function_declarator_parent_class = NULL;

static void vala_ccode_function_declarator_real_write (ValaCCodeNode* base,
                                                ValaCCodeWriter* writer);
static void vala_ccode_function_declarator_real_write_declaration (ValaCCodeNode* base,
                                                            ValaCCodeWriter* writer);
static void vala_ccode_function_declarator_finalize (ValaCCodeNode * obj);
static GType vala_ccode_function_declarator_get_type_once (void);

static inline gpointer
vala_ccode_function_declarator_get_instance_private (ValaCCodeFunctionDeclarator* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCCodeFunctionDeclarator_private_offset);
}

ValaCCodeFunctionDeclarator*
vala_ccode_function_declarator_construct (GType object_type,
                                          const gchar* name)
{
	ValaCCodeFunctionDeclarator* self = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValaCCodeFunctionDeclarator*) vala_ccode_declarator_construct (object_type);
	vala_ccode_declarator_set_name ((ValaCCodeDeclarator*) self, name);
	return self;
}

ValaCCodeFunctionDeclarator*
vala_ccode_function_declarator_new (const gchar* name)
{
	return vala_ccode_function_declarator_construct (VALA_TYPE_CCODE_FUNCTION_DECLARATOR, name);
}

/**
 * Appends the specified parameter to the list of function parameters.
 *
 * @param param a formal parameter
 */
void
vala_ccode_function_declarator_add_parameter (ValaCCodeFunctionDeclarator* self,
                                              ValaCCodeParameter* param)
{
	ValaList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (param != NULL);
	_tmp0_ = self->priv->parameters;
	vala_collection_add ((ValaCollection*) _tmp0_, param);
}

static void
vala_ccode_function_declarator_real_write (ValaCCodeNode* base,
                                           ValaCCodeWriter* writer)
{
	ValaCCodeFunctionDeclarator * self;
	self = (ValaCCodeFunctionDeclarator*) base;
	g_return_if_fail (writer != NULL);
	vala_ccode_node_write_declaration ((ValaCCodeNode*) self, writer);
}

static void
vala_ccode_function_declarator_real_write_declaration (ValaCCodeNode* base,
                                                       ValaCCodeWriter* writer)
{
	ValaCCodeFunctionDeclarator * self;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	gboolean _tmp2_ = FALSE;
	ValaCCodeModifiers _tmp3_;
	ValaCCodeModifiers _tmp4_;
	gboolean has_args = FALSE;
	gint i = 0;
	gint format_arg_index = 0;
	gint args_index = 0;
	ValaCCodeModifiers _tmp29_;
	ValaCCodeModifiers _tmp30_;
	ValaCCodeModifiers _tmp32_;
	ValaCCodeModifiers _tmp33_;
	self = (ValaCCodeFunctionDeclarator*) base;
	g_return_if_fail (writer != NULL);
	vala_ccode_writer_write_string (writer, "(*");
	_tmp0_ = vala_ccode_declarator_get_name ((ValaCCodeDeclarator*) self);
	_tmp1_ = _tmp0_;
	vala_ccode_writer_write_string (writer, _tmp1_);
	vala_ccode_writer_write_string (writer, ") (");
	_tmp3_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp4_ = _tmp3_;
	if ((_tmp4_ & VALA_CCODE_MODIFIERS_PRINTF) == VALA_CCODE_MODIFIERS_PRINTF) {
		_tmp2_ = TRUE;
	} else {
		ValaCCodeModifiers _tmp5_;
		ValaCCodeModifiers _tmp6_;
		_tmp5_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
		_tmp6_ = _tmp5_;
		_tmp2_ = (_tmp6_ & VALA_CCODE_MODIFIERS_SCANF) == VALA_CCODE_MODIFIERS_SCANF;
	}
	has_args = _tmp2_;
	i = 0;
	format_arg_index = -1;
	args_index = -1;
	{
		ValaList* _param_list = NULL;
		ValaList* _tmp7_;
		gint _param_size = 0;
		ValaList* _tmp8_;
		gint _tmp9_;
		gint _tmp10_;
		gint _param_index = 0;
		_tmp7_ = self->priv->parameters;
		_param_list = _tmp7_;
		_tmp8_ = _param_list;
		_tmp9_ = vala_collection_get_size ((ValaCollection*) _tmp8_);
		_tmp10_ = _tmp9_;
		_param_size = _tmp10_;
		_param_index = -1;
		while (TRUE) {
			gint _tmp11_;
			gint _tmp12_;
			ValaCCodeParameter* param = NULL;
			ValaList* _tmp13_;
			gpointer _tmp14_;
			ValaCCodeParameter* _tmp15_;
			ValaCCodeParameter* _tmp16_;
			ValaCCodeModifiers _tmp17_;
			ValaCCodeModifiers _tmp18_;
			gboolean _tmp19_ = FALSE;
			gint _tmp28_;
			_param_index = _param_index + 1;
			_tmp11_ = _param_index;
			_tmp12_ = _param_size;
			if (!(_tmp11_ < _tmp12_)) {
				break;
			}
			_tmp13_ = _param_list;
			_tmp14_ = vala_list_get (_tmp13_, _param_index);
			param = (ValaCCodeParameter*) _tmp14_;
			if (i > 0) {
				vala_ccode_writer_write_string (writer, ", ");
			}
			_tmp15_ = param;
			vala_ccode_node_write ((ValaCCodeNode*) _tmp15_, writer);
			_tmp16_ = param;
			_tmp17_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) _tmp16_);
			_tmp18_ = _tmp17_;
			if ((_tmp18_ & VALA_CCODE_MODIFIERS_FORMAT_ARG) == VALA_CCODE_MODIFIERS_FORMAT_ARG) {
				format_arg_index = i;
			}
			if (has_args) {
				ValaCCodeParameter* _tmp20_;
				gboolean _tmp21_;
				gboolean _tmp22_;
				_tmp20_ = param;
				_tmp21_ = vala_ccode_parameter_get_ellipsis (_tmp20_);
				_tmp22_ = _tmp21_;
				_tmp19_ = _tmp22_;
			} else {
				_tmp19_ = FALSE;
			}
			if (_tmp19_) {
				args_index = i;
			} else {
				gboolean _tmp23_ = FALSE;
				gboolean _tmp24_ = FALSE;
				if (has_args) {
					ValaCCodeParameter* _tmp25_;
					const gchar* _tmp26_;
					const gchar* _tmp27_;
					_tmp25_ = param;
					_tmp26_ = vala_ccode_parameter_get_type_name (_tmp25_);
					_tmp27_ = _tmp26_;
					_tmp24_ = g_strcmp0 (_tmp27_, "va_list") == 0;
				} else {
					_tmp24_ = FALSE;
				}
				if (_tmp24_) {
					_tmp23_ = format_arg_index < 0;
				} else {
					_tmp23_ = FALSE;
				}
				if (_tmp23_) {
					format_arg_index = i - 1;
				}
			}
			_tmp28_ = i;
			i = _tmp28_ + 1;
			_vala_ccode_node_unref0 (param);
		}
	}
	if (i == 0) {
		vala_ccode_writer_write_string (writer, "void");
	}
	vala_ccode_writer_write_string (writer, ")");
	_tmp29_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp30_ = _tmp29_;
	if ((_tmp30_ & VALA_CCODE_MODIFIERS_DEPRECATED) == VALA_CCODE_MODIFIERS_DEPRECATED) {
		const gchar* _tmp31_;
		_tmp31_ = vala_GNUC_DEPRECATED;
		vala_ccode_writer_write_string (writer, _tmp31_);
	}
	_tmp32_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp33_ = _tmp32_;
	if ((_tmp33_ & VALA_CCODE_MODIFIERS_PRINTF) == VALA_CCODE_MODIFIERS_PRINTF) {
		gint _tmp34_ = 0;
		const gchar* _tmp35_;
		gchar* _tmp36_;
		gchar* _tmp37_;
		if (format_arg_index >= 0) {
			_tmp34_ = format_arg_index + 1;
		} else {
			_tmp34_ = args_index;
		}
		format_arg_index = _tmp34_;
		_tmp35_ = vala_GNUC_PRINTF;
		_tmp36_ = g_strdup_printf (_tmp35_, format_arg_index, args_index + 1);
		_tmp37_ = _tmp36_;
		vala_ccode_writer_write_string (writer, _tmp37_);
		_g_free0 (_tmp37_);
	} else {
		ValaCCodeModifiers _tmp38_;
		ValaCCodeModifiers _tmp39_;
		_tmp38_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
		_tmp39_ = _tmp38_;
		if ((_tmp39_ & VALA_CCODE_MODIFIERS_SCANF) == VALA_CCODE_MODIFIERS_SCANF) {
			gint _tmp40_ = 0;
			const gchar* _tmp41_;
			gchar* _tmp42_;
			gchar* _tmp43_;
			if (format_arg_index >= 0) {
				_tmp40_ = format_arg_index + 1;
			} else {
				_tmp40_ = args_index;
			}
			format_arg_index = _tmp40_;
			_tmp41_ = vala_GNUC_SCANF;
			_tmp42_ = g_strdup_printf (_tmp41_, format_arg_index, args_index + 1);
			_tmp43_ = _tmp42_;
			vala_ccode_writer_write_string (writer, _tmp43_);
			_g_free0 (_tmp43_);
		} else {
			if (format_arg_index >= 0) {
				const gchar* _tmp44_;
				gchar* _tmp45_;
				gchar* _tmp46_;
				_tmp44_ = vala_GNUC_FORMAT;
				_tmp45_ = g_strdup_printf (_tmp44_, format_arg_index + 1);
				_tmp46_ = _tmp45_;
				vala_ccode_writer_write_string (writer, _tmp46_);
				_g_free0 (_tmp46_);
			}
		}
	}
}

static void
vala_ccode_function_declarator_class_init (ValaCCodeFunctionDeclaratorClass * klass,
                                           gpointer klass_data)
{
	vala_ccode_function_declarator_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_function_declarator_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCCodeFunctionDeclarator_private_offset);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_function_declarator_real_write;
	((ValaCCodeNodeClass *) klass)->write_declaration = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_function_declarator_real_write_declaration;
}

static void
vala_ccode_function_declarator_instance_init (ValaCCodeFunctionDeclarator * self,
                                              gpointer klass)
{
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	self->priv = vala_ccode_function_declarator_get_instance_private (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_CCODE_PARAMETER, (GBoxedCopyFunc) vala_ccode_node_ref, (GDestroyNotify) vala_ccode_node_unref, _tmp0_);
	self->priv->parameters = (ValaList*) _tmp1_;
}

static void
vala_ccode_function_declarator_finalize (ValaCCodeNode * obj)
{
	ValaCCodeFunctionDeclarator * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_FUNCTION_DECLARATOR, ValaCCodeFunctionDeclarator);
	_vala_iterable_unref0 (self->priv->parameters);
	VALA_CCODE_NODE_CLASS (vala_ccode_function_declarator_parent_class)->finalize (obj);
}

/**
 * Represents a function pointer declarator in the C code.
 */
static GType
vala_ccode_function_declarator_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeFunctionDeclaratorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_function_declarator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeFunctionDeclarator), 0, (GInstanceInitFunc) vala_ccode_function_declarator_instance_init, NULL };
	GType vala_ccode_function_declarator_type_id;
	vala_ccode_function_declarator_type_id = g_type_register_static (VALA_TYPE_CCODE_DECLARATOR, "ValaCCodeFunctionDeclarator", &g_define_type_info, 0);
	ValaCCodeFunctionDeclarator_private_offset = g_type_add_instance_private (vala_ccode_function_declarator_type_id, sizeof (ValaCCodeFunctionDeclaratorPrivate));
	return vala_ccode_function_declarator_type_id;
}

GType
vala_ccode_function_declarator_get_type (void)
{
	static volatile gsize vala_ccode_function_declarator_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_function_declarator_type_id__volatile)) {
		GType vala_ccode_function_declarator_type_id;
		vala_ccode_function_declarator_type_id = vala_ccode_function_declarator_get_type_once ();
		g_once_init_leave (&vala_ccode_function_declarator_type_id__volatile, vala_ccode_function_declarator_type_id);
	}
	return vala_ccode_function_declarator_type_id__volatile;
}

