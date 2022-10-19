/* valastatementlist.c generated by valac, the Vala compiler
 * generated from valastatementlist.vala, do not modify */

/* valastatementlist.vala
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

#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

struct _ValaStatementListPrivate {
	ValaList* list;
};

static gint ValaStatementList_private_offset;
static gpointer vala_statement_list_parent_class = NULL;
static ValaStatementIface * vala_statement_list_vala_statement_parent_iface = NULL;

static void vala_statement_list_real_get_error_types (ValaCodeNode* base,
                                               ValaCollection* collection,
                                               ValaSourceReference* source_reference);
static void vala_statement_list_real_accept (ValaCodeNode* base,
                                      ValaCodeVisitor* visitor);
static gboolean vala_statement_list_real_check (ValaCodeNode* base,
                                         ValaCodeContext* context);
static void vala_statement_list_real_emit (ValaCodeNode* base,
                                    ValaCodeGenerator* codegen);
static void vala_statement_list_finalize (ValaCodeNode * obj);
static GType vala_statement_list_get_type_once (void);

static inline gpointer
vala_statement_list_get_instance_private (ValaStatementList* self)
{
	return G_STRUCT_MEMBER_P (self, ValaStatementList_private_offset);
}

gint
vala_statement_list_get_length (ValaStatementList* self)
{
	gint result;
	ValaList* _tmp0_;
	gint _tmp1_;
	gint _tmp2_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->list;
	_tmp1_ = vala_collection_get_size ((ValaCollection*) _tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}

ValaStatementList*
vala_statement_list_construct (GType object_type,
                               ValaSourceReference* source_reference)
{
	ValaStatementList* self = NULL;
	self = (ValaStatementList*) vala_code_node_construct (object_type);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	return self;
}

ValaStatementList*
vala_statement_list_new (ValaSourceReference* source_reference)
{
	return vala_statement_list_construct (VALA_TYPE_STATEMENT_LIST, source_reference);
}

ValaStatement*
vala_statement_list_get (ValaStatementList* self,
                         gint index)
{
	ValaList* _tmp0_;
	gpointer _tmp1_;
	ValaStatement* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->list;
	_tmp1_ = vala_list_get (_tmp0_, index);
	result = (ValaStatement*) _tmp1_;
	return result;
}

void
vala_statement_list_set (ValaStatementList* self,
                         gint index,
                         ValaStatement* stmt)
{
	ValaList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (stmt != NULL);
	_tmp0_ = self->priv->list;
	vala_list_set (_tmp0_, index, stmt);
}

void
vala_statement_list_add (ValaStatementList* self,
                         ValaStatement* stmt)
{
	ValaList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (stmt != NULL);
	_tmp0_ = self->priv->list;
	vala_collection_add ((ValaCollection*) _tmp0_, stmt);
}

void
vala_statement_list_insert (ValaStatementList* self,
                            gint index,
                            ValaStatement* stmt)
{
	ValaList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (stmt != NULL);
	_tmp0_ = self->priv->list;
	vala_list_insert (_tmp0_, index, stmt);
}

static void
vala_statement_list_real_get_error_types (ValaCodeNode* base,
                                          ValaCollection* collection,
                                          ValaSourceReference* source_reference)
{
	ValaStatementList * self;
	self = (ValaStatementList*) base;
	g_return_if_fail (collection != NULL);
	{
		ValaList* _stmt_list = NULL;
		ValaList* _tmp0_;
		gint _stmt_size = 0;
		ValaList* _tmp1_;
		gint _tmp2_;
		gint _tmp3_;
		gint _stmt_index = 0;
		_tmp0_ = self->priv->list;
		_stmt_list = _tmp0_;
		_tmp1_ = _stmt_list;
		_tmp2_ = vala_collection_get_size ((ValaCollection*) _tmp1_);
		_tmp3_ = _tmp2_;
		_stmt_size = _tmp3_;
		_stmt_index = -1;
		while (TRUE) {
			gint _tmp4_;
			gint _tmp5_;
			ValaStatement* stmt = NULL;
			ValaList* _tmp6_;
			gpointer _tmp7_;
			ValaStatement* _tmp8_;
			_stmt_index = _stmt_index + 1;
			_tmp4_ = _stmt_index;
			_tmp5_ = _stmt_size;
			if (!(_tmp4_ < _tmp5_)) {
				break;
			}
			_tmp6_ = _stmt_list;
			_tmp7_ = vala_list_get (_tmp6_, _stmt_index);
			stmt = (ValaStatement*) _tmp7_;
			_tmp8_ = stmt;
			vala_code_node_get_error_types ((ValaCodeNode*) _tmp8_, collection, source_reference);
			_vala_code_node_unref0 (stmt);
		}
	}
}

static void
vala_statement_list_real_accept (ValaCodeNode* base,
                                 ValaCodeVisitor* visitor)
{
	ValaStatementList * self;
	self = (ValaStatementList*) base;
	g_return_if_fail (visitor != NULL);
	{
		ValaList* _stmt_list = NULL;
		ValaList* _tmp0_;
		gint _stmt_size = 0;
		ValaList* _tmp1_;
		gint _tmp2_;
		gint _tmp3_;
		gint _stmt_index = 0;
		_tmp0_ = self->priv->list;
		_stmt_list = _tmp0_;
		_tmp1_ = _stmt_list;
		_tmp2_ = vala_collection_get_size ((ValaCollection*) _tmp1_);
		_tmp3_ = _tmp2_;
		_stmt_size = _tmp3_;
		_stmt_index = -1;
		while (TRUE) {
			gint _tmp4_;
			gint _tmp5_;
			ValaStatement* stmt = NULL;
			ValaList* _tmp6_;
			gpointer _tmp7_;
			ValaStatement* _tmp8_;
			_stmt_index = _stmt_index + 1;
			_tmp4_ = _stmt_index;
			_tmp5_ = _stmt_size;
			if (!(_tmp4_ < _tmp5_)) {
				break;
			}
			_tmp6_ = _stmt_list;
			_tmp7_ = vala_list_get (_tmp6_, _stmt_index);
			stmt = (ValaStatement*) _tmp7_;
			_tmp8_ = stmt;
			vala_code_node_accept ((ValaCodeNode*) _tmp8_, visitor);
			_vala_code_node_unref0 (stmt);
		}
	}
}

static gboolean
vala_statement_list_real_check (ValaCodeNode* base,
                                ValaCodeContext* context)
{
	ValaStatementList * self;
	gboolean result = FALSE;
	self = (ValaStatementList*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	{
		ValaList* _stmt_list = NULL;
		ValaList* _tmp0_;
		gint _stmt_size = 0;
		ValaList* _tmp1_;
		gint _tmp2_;
		gint _tmp3_;
		gint _stmt_index = 0;
		_tmp0_ = self->priv->list;
		_stmt_list = _tmp0_;
		_tmp1_ = _stmt_list;
		_tmp2_ = vala_collection_get_size ((ValaCollection*) _tmp1_);
		_tmp3_ = _tmp2_;
		_stmt_size = _tmp3_;
		_stmt_index = -1;
		while (TRUE) {
			gint _tmp4_;
			gint _tmp5_;
			ValaStatement* stmt = NULL;
			ValaList* _tmp6_;
			gpointer _tmp7_;
			ValaStatement* _tmp8_;
			_stmt_index = _stmt_index + 1;
			_tmp4_ = _stmt_index;
			_tmp5_ = _stmt_size;
			if (!(_tmp4_ < _tmp5_)) {
				break;
			}
			_tmp6_ = _stmt_list;
			_tmp7_ = vala_list_get (_tmp6_, _stmt_index);
			stmt = (ValaStatement*) _tmp7_;
			_tmp8_ = stmt;
			if (!vala_code_node_check ((ValaCodeNode*) _tmp8_, context)) {
				result = FALSE;
				_vala_code_node_unref0 (stmt);
				return result;
			}
			_vala_code_node_unref0 (stmt);
		}
	}
	result = TRUE;
	return result;
}

static void
vala_statement_list_real_emit (ValaCodeNode* base,
                               ValaCodeGenerator* codegen)
{
	ValaStatementList * self;
	self = (ValaStatementList*) base;
	g_return_if_fail (codegen != NULL);
	{
		ValaList* _stmt_list = NULL;
		ValaList* _tmp0_;
		gint _stmt_size = 0;
		ValaList* _tmp1_;
		gint _tmp2_;
		gint _tmp3_;
		gint _stmt_index = 0;
		_tmp0_ = self->priv->list;
		_stmt_list = _tmp0_;
		_tmp1_ = _stmt_list;
		_tmp2_ = vala_collection_get_size ((ValaCollection*) _tmp1_);
		_tmp3_ = _tmp2_;
		_stmt_size = _tmp3_;
		_stmt_index = -1;
		while (TRUE) {
			gint _tmp4_;
			gint _tmp5_;
			ValaStatement* stmt = NULL;
			ValaList* _tmp6_;
			gpointer _tmp7_;
			ValaStatement* _tmp8_;
			_stmt_index = _stmt_index + 1;
			_tmp4_ = _stmt_index;
			_tmp5_ = _stmt_size;
			if (!(_tmp4_ < _tmp5_)) {
				break;
			}
			_tmp6_ = _stmt_list;
			_tmp7_ = vala_list_get (_tmp6_, _stmt_index);
			stmt = (ValaStatement*) _tmp7_;
			_tmp8_ = stmt;
			vala_code_node_emit ((ValaCodeNode*) _tmp8_, codegen);
			_vala_code_node_unref0 (stmt);
		}
	}
}

static void
vala_statement_list_class_init (ValaStatementListClass * klass,
                                gpointer klass_data)
{
	vala_statement_list_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_statement_list_finalize;
	g_type_class_adjust_private_offset (klass, &ValaStatementList_private_offset);
	((ValaCodeNodeClass *) klass)->get_error_types = (void (*) (ValaCodeNode*, ValaCollection*, ValaSourceReference*)) vala_statement_list_real_get_error_types;
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_statement_list_real_accept;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_statement_list_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) vala_statement_list_real_emit;
}

static void
vala_statement_list_vala_statement_interface_init (ValaStatementIface * iface,
                                                   gpointer iface_data)
{
	vala_statement_list_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}

static void
vala_statement_list_instance_init (ValaStatementList * self,
                                   gpointer klass)
{
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	self->priv = vala_statement_list_get_instance_private (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_STATEMENT, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp0_);
	self->priv->list = (ValaList*) _tmp1_;
}

static void
vala_statement_list_finalize (ValaCodeNode * obj)
{
	ValaStatementList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_STATEMENT_LIST, ValaStatementList);
	_vala_iterable_unref0 (self->priv->list);
	VALA_CODE_NODE_CLASS (vala_statement_list_parent_class)->finalize (obj);
}

static GType
vala_statement_list_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaStatementListClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_statement_list_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaStatementList), 0, (GInstanceInitFunc) vala_statement_list_instance_init, NULL };
	static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_statement_list_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType vala_statement_list_type_id;
	vala_statement_list_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaStatementList", &g_define_type_info, 0);
	g_type_add_interface_static (vala_statement_list_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
	ValaStatementList_private_offset = g_type_add_instance_private (vala_statement_list_type_id, sizeof (ValaStatementListPrivate));
	return vala_statement_list_type_id;
}

GType
vala_statement_list_get_type (void)
{
	static volatile gsize vala_statement_list_type_id__volatile = 0;
	if (g_once_init_enter (&vala_statement_list_type_id__volatile)) {
		GType vala_statement_list_type_id;
		vala_statement_list_type_id = vala_statement_list_get_type_once ();
		g_once_init_leave (&vala_statement_list_type_id__volatile, vala_statement_list_type_id);
	}
	return vala_statement_list_type_id__volatile;
}

