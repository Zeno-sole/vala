/* valaerrordomain.c generated by valac, the Vala compiler
 * generated from valaerrordomain.vala, do not modify */

/* valaerrordomain.vala
 *
 * Copyright (C) 2008-2010  Jürg Billeter
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
#include <stdlib.h>
#include <string.h>

#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaErrorDomainPrivate {
	ValaList* codes;
	ValaList* methods;
};

static gint ValaErrorDomain_private_offset;
static gpointer vala_error_domain_parent_class = NULL;

static void vala_error_domain_real_add_method (ValaSymbol* base,
                                        ValaMethod* m);
static void vala_error_domain_real_accept (ValaCodeNode* base,
                                    ValaCodeVisitor* visitor);
static void vala_error_domain_real_accept_children (ValaCodeNode* base,
                                             ValaCodeVisitor* visitor);
static gboolean vala_error_domain_real_is_reference_type (ValaTypeSymbol* base);
static gboolean vala_error_domain_real_check (ValaCodeNode* base,
                                       ValaCodeContext* context);
static void vala_error_domain_finalize (ValaCodeNode * obj);
static GType vala_error_domain_get_type_once (void);

static inline gpointer
vala_error_domain_get_instance_private (ValaErrorDomain* self)
{
	return G_STRUCT_MEMBER_P (self, ValaErrorDomain_private_offset);
}

/**
 * Creates a new error domain.
 *
 * @param name             type name
 * @param source_reference reference to source code
 * @return                 newly created error domain
 */
ValaErrorDomain*
vala_error_domain_construct (GType object_type,
                             const gchar* name,
                             ValaSourceReference* source_reference,
                             ValaComment* comment)
{
	ValaErrorDomain* self = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValaErrorDomain*) vala_typesymbol_construct (object_type, name, source_reference, comment);
	return self;
}

ValaErrorDomain*
vala_error_domain_new (const gchar* name,
                       ValaSourceReference* source_reference,
                       ValaComment* comment)
{
	return vala_error_domain_construct (VALA_TYPE_ERROR_DOMAIN, name, source_reference, comment);
}

/**
 * Appends the specified code to the list of error codes.
 *
 * @param ecode an error code
 */
void
vala_error_domain_add_code (ValaErrorDomain* self,
                            ValaErrorCode* ecode)
{
	ValaList* _tmp0_;
	ValaScope* _tmp1_;
	ValaScope* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (ecode != NULL);
	_tmp0_ = self->priv->codes;
	vala_collection_add ((ValaCollection*) _tmp0_, ecode);
	_tmp1_ = vala_symbol_get_scope ((ValaSymbol*) self);
	_tmp2_ = _tmp1_;
	_tmp3_ = vala_symbol_get_name ((ValaSymbol*) ecode);
	_tmp4_ = _tmp3_;
	vala_scope_add (_tmp2_, _tmp4_, (ValaSymbol*) ecode);
}

/**
 * Adds the specified method as a member to this error domain.
 *
 * @param m a method
 */
static void
vala_error_domain_real_add_method (ValaSymbol* base,
                                   ValaMethod* m)
{
	ValaErrorDomain * self;
	ValaMemberBinding _tmp2_;
	ValaMemberBinding _tmp3_;
	ValaList* _tmp18_;
	ValaScope* _tmp19_;
	ValaScope* _tmp20_;
	const gchar* _tmp21_;
	const gchar* _tmp22_;
	self = (ValaErrorDomain*) base;
	g_return_if_fail (m != NULL);
	if (VALA_IS_CREATION_METHOD (m)) {
		ValaSourceReference* _tmp0_;
		ValaSourceReference* _tmp1_;
		_tmp0_ = vala_code_node_get_source_reference ((ValaCodeNode*) m);
		_tmp1_ = _tmp0_;
		vala_report_error (_tmp1_, "construction methods may only be declared within classes and structs");
		vala_code_node_set_error ((ValaCodeNode*) m, TRUE);
		return;
	}
	_tmp2_ = vala_method_get_binding (m);
	_tmp3_ = _tmp2_;
	if (_tmp3_ == VALA_MEMBER_BINDING_INSTANCE) {
		ValaErrorType* _tmp4_;
		ValaErrorType* _tmp5_;
		ValaSourceReference* _tmp6_;
		ValaSourceReference* _tmp7_;
		ValaParameter* _tmp8_;
		ValaParameter* _tmp9_;
		ValaScope* _tmp10_;
		ValaScope* _tmp11_;
		ValaParameter* _tmp12_;
		ValaParameter* _tmp13_;
		const gchar* _tmp14_;
		const gchar* _tmp15_;
		ValaParameter* _tmp16_;
		ValaParameter* _tmp17_;
		_tmp4_ = vala_error_type_new (self, NULL, NULL);
		_tmp5_ = _tmp4_;
		_tmp6_ = vala_code_node_get_source_reference ((ValaCodeNode*) m);
		_tmp7_ = _tmp6_;
		_tmp8_ = vala_parameter_new ("this", (ValaDataType*) _tmp5_, _tmp7_);
		_tmp9_ = _tmp8_;
		vala_method_set_this_parameter (m, _tmp9_);
		_vala_code_node_unref0 (_tmp9_);
		_vala_code_node_unref0 (_tmp5_);
		_tmp10_ = vala_symbol_get_scope ((ValaSymbol*) m);
		_tmp11_ = _tmp10_;
		_tmp12_ = vala_method_get_this_parameter (m);
		_tmp13_ = _tmp12_;
		_tmp14_ = vala_symbol_get_name ((ValaSymbol*) _tmp13_);
		_tmp15_ = _tmp14_;
		_tmp16_ = vala_method_get_this_parameter (m);
		_tmp17_ = _tmp16_;
		vala_scope_add (_tmp11_, _tmp15_, (ValaSymbol*) _tmp17_);
	}
	_tmp18_ = self->priv->methods;
	vala_collection_add ((ValaCollection*) _tmp18_, m);
	_tmp19_ = vala_symbol_get_scope ((ValaSymbol*) self);
	_tmp20_ = _tmp19_;
	_tmp21_ = vala_symbol_get_name ((ValaSymbol*) m);
	_tmp22_ = _tmp21_;
	vala_scope_add (_tmp20_, _tmp22_, (ValaSymbol*) m);
}

/**
 * Returns the list of error codes.
 *
 * @return list of error codes
 */
ValaList*
vala_error_domain_get_codes (ValaErrorDomain* self)
{
	ValaList* _tmp0_;
	ValaList* result;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->codes;
	result = _tmp0_;
	return result;
}

/**
 * Returns the list of methods.
 *
 * @return list of methods
 */
ValaList*
vala_error_domain_get_methods (ValaErrorDomain* self)
{
	ValaList* _tmp0_;
	ValaList* result;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->methods;
	result = _tmp0_;
	return result;
}

static void
vala_error_domain_real_accept (ValaCodeNode* base,
                               ValaCodeVisitor* visitor)
{
	ValaErrorDomain * self;
	self = (ValaErrorDomain*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_error_domain (visitor, self);
}

static void
vala_error_domain_real_accept_children (ValaCodeNode* base,
                                        ValaCodeVisitor* visitor)
{
	ValaErrorDomain * self;
	self = (ValaErrorDomain*) base;
	g_return_if_fail (visitor != NULL);
	{
		ValaList* _ecode_list = NULL;
		ValaList* _tmp0_;
		gint _ecode_size = 0;
		ValaList* _tmp1_;
		gint _tmp2_;
		gint _tmp3_;
		gint _ecode_index = 0;
		_tmp0_ = self->priv->codes;
		_ecode_list = _tmp0_;
		_tmp1_ = _ecode_list;
		_tmp2_ = vala_collection_get_size ((ValaCollection*) _tmp1_);
		_tmp3_ = _tmp2_;
		_ecode_size = _tmp3_;
		_ecode_index = -1;
		while (TRUE) {
			gint _tmp4_;
			gint _tmp5_;
			ValaErrorCode* ecode = NULL;
			ValaList* _tmp6_;
			gpointer _tmp7_;
			ValaErrorCode* _tmp8_;
			_ecode_index = _ecode_index + 1;
			_tmp4_ = _ecode_index;
			_tmp5_ = _ecode_size;
			if (!(_tmp4_ < _tmp5_)) {
				break;
			}
			_tmp6_ = _ecode_list;
			_tmp7_ = vala_list_get (_tmp6_, _ecode_index);
			ecode = (ValaErrorCode*) _tmp7_;
			_tmp8_ = ecode;
			vala_code_node_accept ((ValaCodeNode*) _tmp8_, visitor);
			_vala_code_node_unref0 (ecode);
		}
	}
	{
		ValaList* _m_list = NULL;
		ValaList* _tmp9_;
		gint _m_size = 0;
		ValaList* _tmp10_;
		gint _tmp11_;
		gint _tmp12_;
		gint _m_index = 0;
		_tmp9_ = self->priv->methods;
		_m_list = _tmp9_;
		_tmp10_ = _m_list;
		_tmp11_ = vala_collection_get_size ((ValaCollection*) _tmp10_);
		_tmp12_ = _tmp11_;
		_m_size = _tmp12_;
		_m_index = -1;
		while (TRUE) {
			gint _tmp13_;
			gint _tmp14_;
			ValaMethod* m = NULL;
			ValaList* _tmp15_;
			gpointer _tmp16_;
			ValaMethod* _tmp17_;
			_m_index = _m_index + 1;
			_tmp13_ = _m_index;
			_tmp14_ = _m_size;
			if (!(_tmp13_ < _tmp14_)) {
				break;
			}
			_tmp15_ = _m_list;
			_tmp16_ = vala_list_get (_tmp15_, _m_index);
			m = (ValaMethod*) _tmp16_;
			_tmp17_ = m;
			vala_code_node_accept ((ValaCodeNode*) _tmp17_, visitor);
			_vala_code_node_unref0 (m);
		}
	}
}

static gboolean
vala_error_domain_real_is_reference_type (ValaTypeSymbol* base)
{
	ValaErrorDomain * self;
	gboolean result;
	self = (ValaErrorDomain*) base;
	result = FALSE;
	return result;
}

static gboolean
vala_error_domain_real_check (ValaCodeNode* base,
                              ValaCodeContext* context)
{
	ValaErrorDomain * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaList* _tmp4_;
	gint _tmp5_;
	gint _tmp6_;
	gboolean _tmp40_;
	gboolean _tmp41_;
	gboolean result;
	self = (ValaErrorDomain*) base;
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
	_tmp4_ = self->priv->codes;
	_tmp5_ = vala_collection_get_size ((ValaCollection*) _tmp4_);
	_tmp6_ = _tmp5_;
	if (_tmp6_ <= 0) {
		ValaSourceReference* _tmp7_;
		ValaSourceReference* _tmp8_;
		gchar* _tmp9_;
		gchar* _tmp10_;
		_tmp7_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp8_ = _tmp7_;
		_tmp9_ = vala_symbol_get_full_name ((ValaSymbol*) self);
		_tmp10_ = _tmp9_;
		vala_report_error (_tmp8_, "Error domain `%s' requires at least one code", _tmp10_);
		_g_free0 (_tmp10_);
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		result = FALSE;
		return result;
	}
	{
		ValaList* _ecode_list = NULL;
		ValaList* _tmp11_;
		gint _ecode_size = 0;
		ValaList* _tmp12_;
		gint _tmp13_;
		gint _tmp14_;
		gint _ecode_index = 0;
		_tmp11_ = self->priv->codes;
		_ecode_list = _tmp11_;
		_tmp12_ = _ecode_list;
		_tmp13_ = vala_collection_get_size ((ValaCollection*) _tmp12_);
		_tmp14_ = _tmp13_;
		_ecode_size = _tmp14_;
		_ecode_index = -1;
		while (TRUE) {
			gint _tmp15_;
			gint _tmp16_;
			ValaErrorCode* ecode = NULL;
			ValaList* _tmp17_;
			gpointer _tmp18_;
			ValaErrorCode* _tmp19_;
			_ecode_index = _ecode_index + 1;
			_tmp15_ = _ecode_index;
			_tmp16_ = _ecode_size;
			if (!(_tmp15_ < _tmp16_)) {
				break;
			}
			_tmp17_ = _ecode_list;
			_tmp18_ = vala_list_get (_tmp17_, _ecode_index);
			ecode = (ValaErrorCode*) _tmp18_;
			_tmp19_ = ecode;
			vala_code_node_check ((ValaCodeNode*) _tmp19_, context);
			_vala_code_node_unref0 (ecode);
		}
	}
	{
		ValaList* _m_list = NULL;
		ValaList* _tmp20_;
		gint _m_size = 0;
		ValaList* _tmp21_;
		gint _tmp22_;
		gint _tmp23_;
		gint _m_index = 0;
		_tmp20_ = self->priv->methods;
		_m_list = _tmp20_;
		_tmp21_ = _m_list;
		_tmp22_ = vala_collection_get_size ((ValaCollection*) _tmp21_);
		_tmp23_ = _tmp22_;
		_m_size = _tmp23_;
		_m_index = -1;
		while (TRUE) {
			gint _tmp24_;
			gint _tmp25_;
			ValaMethod* m = NULL;
			ValaList* _tmp26_;
			gpointer _tmp27_;
			ValaMethod* _tmp28_;
			ValaMemberBinding _tmp29_;
			ValaMemberBinding _tmp30_;
			ValaMethod* _tmp39_;
			_m_index = _m_index + 1;
			_tmp24_ = _m_index;
			_tmp25_ = _m_size;
			if (!(_tmp24_ < _tmp25_)) {
				break;
			}
			_tmp26_ = _m_list;
			_tmp27_ = vala_list_get (_tmp26_, _m_index);
			m = (ValaMethod*) _tmp27_;
			_tmp28_ = m;
			_tmp29_ = vala_method_get_binding (_tmp28_);
			_tmp30_ = _tmp29_;
			if (_tmp30_ == VALA_MEMBER_BINDING_INSTANCE) {
				gboolean _tmp31_;
				gboolean _tmp32_;
				_tmp31_ = vala_symbol_get_external_package ((ValaSymbol*) self);
				_tmp32_ = _tmp31_;
				if (_tmp32_) {
					ValaMethod* _tmp33_;
					ValaSourceReference* _tmp34_;
					ValaSourceReference* _tmp35_;
					_tmp33_ = m;
					_tmp34_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp33_);
					_tmp35_ = _tmp34_;
					vala_report_warning (_tmp35_, "Instance methods are not supported in error domains yet");
				} else {
					ValaMethod* _tmp36_;
					ValaSourceReference* _tmp37_;
					ValaSourceReference* _tmp38_;
					_tmp36_ = m;
					_tmp37_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp36_);
					_tmp38_ = _tmp37_;
					vala_report_error (_tmp38_, "Instance methods are not supported in error domains yet");
				}
				vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			}
			_tmp39_ = m;
			vala_code_node_check ((ValaCodeNode*) _tmp39_, context);
			_vala_code_node_unref0 (m);
		}
	}
	_tmp40_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp41_ = _tmp40_;
	result = !_tmp41_;
	return result;
}

static void
vala_error_domain_class_init (ValaErrorDomainClass * klass,
                              gpointer klass_data)
{
	vala_error_domain_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_error_domain_finalize;
	g_type_class_adjust_private_offset (klass, &ValaErrorDomain_private_offset);
	((ValaSymbolClass *) klass)->add_method = (void (*) (ValaSymbol*, ValaMethod*)) vala_error_domain_real_add_method;
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_error_domain_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_error_domain_real_accept_children;
	((ValaTypeSymbolClass *) klass)->is_reference_type = (gboolean (*) (ValaTypeSymbol*)) vala_error_domain_real_is_reference_type;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_error_domain_real_check;
}

static void
vala_error_domain_instance_init (ValaErrorDomain * self,
                                 gpointer klass)
{
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	GEqualFunc _tmp2_;
	ValaArrayList* _tmp3_;
	self->priv = vala_error_domain_get_instance_private (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_ERROR_CODE, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp0_);
	self->priv->codes = (ValaList*) _tmp1_;
	_tmp2_ = g_direct_equal;
	_tmp3_ = vala_array_list_new (VALA_TYPE_METHOD, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp2_);
	self->priv->methods = (ValaList*) _tmp3_;
}

static void
vala_error_domain_finalize (ValaCodeNode * obj)
{
	ValaErrorDomain * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_ERROR_DOMAIN, ValaErrorDomain);
	_vala_iterable_unref0 (self->priv->codes);
	_vala_iterable_unref0 (self->priv->methods);
	VALA_CODE_NODE_CLASS (vala_error_domain_parent_class)->finalize (obj);
}

/**
 * Represents an error domain declaration in the source code.
 */
static GType
vala_error_domain_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaErrorDomainClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_error_domain_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaErrorDomain), 0, (GInstanceInitFunc) vala_error_domain_instance_init, NULL };
	GType vala_error_domain_type_id;
	vala_error_domain_type_id = g_type_register_static (VALA_TYPE_TYPESYMBOL, "ValaErrorDomain", &g_define_type_info, 0);
	ValaErrorDomain_private_offset = g_type_add_instance_private (vala_error_domain_type_id, sizeof (ValaErrorDomainPrivate));
	return vala_error_domain_type_id;
}

GType
vala_error_domain_get_type (void)
{
	static volatile gsize vala_error_domain_type_id__once = 0;
	if (g_once_init_enter (&vala_error_domain_type_id__once)) {
		GType vala_error_domain_type_id;
		vala_error_domain_type_id = vala_error_domain_get_type_once ();
		g_once_init_leave (&vala_error_domain_type_id__once, vala_error_domain_type_id);
	}
	return vala_error_domain_type_id__once;
}

