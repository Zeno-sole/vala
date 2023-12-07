/* iterable.c generated by valac, the Vala compiler
 * generated from iterable.vala, do not modify */

/* iterable.vala
 *
 * Copyright (C) 2007-2008  Jürg Billeter
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

#include "valagee.h"
#include <glib-object.h>
#include <glib.h>
#include <gobject/gvaluecollector.h>

typedef struct _ValaParamSpecIterable ValaParamSpecIterable;

struct _ValaIterablePrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
};

struct _ValaParamSpecIterable {
	GParamSpec parent_instance;
};

static gint ValaIterable_private_offset;
static gpointer vala_iterable_parent_class = NULL;

static GType vala_iterable_real_get_element_type (ValaIterable* self);
static ValaIterator* vala_iterable_real_iterator (ValaIterable* self);
static void vala_iterable_finalize (ValaIterable * obj);
static GType vala_iterable_get_type_once (void);

static inline gpointer
vala_iterable_get_instance_private (ValaIterable* self)
{
	return G_STRUCT_MEMBER_P (self, ValaIterable_private_offset);
}

static GType
vala_iterable_real_get_element_type (ValaIterable* self)
{
	GType _tmp0_ = 0UL;
	g_critical ("Type `%s' does not implement abstract method `vala_iterable_get_element_type'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}

GType
vala_iterable_get_element_type (ValaIterable* self)
{
	ValaIterableClass* _klass_;
	g_return_val_if_fail (self != NULL, 0UL);
	_klass_ = VALA_ITERABLE_GET_CLASS (self);
	if (_klass_->get_element_type) {
		return _klass_->get_element_type (self);
	}
	return 0UL;
}

/**
 * Returns a Iterator that can be used for simple iteration over a
 * collection.
 *
 * @return a Iterator that can be used for simple iteration over a
 *         collection
 */
static ValaIterator*
vala_iterable_real_iterator (ValaIterable* self)
{
	g_critical ("Type `%s' does not implement abstract method `vala_iterable_iterator'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

ValaIterator*
vala_iterable_iterator (ValaIterable* self)
{
	ValaIterableClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = VALA_ITERABLE_GET_CLASS (self);
	if (_klass_->iterator) {
		return _klass_->iterator (self);
	}
	return NULL;
}

ValaIterable*
vala_iterable_construct (GType object_type,
                         GType g_type,
                         GBoxedCopyFunc g_dup_func,
                         GDestroyNotify g_destroy_func)
{
	ValaIterable* self = NULL;
	self = (ValaIterable*) g_type_create_instance (object_type);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	return self;
}

static void
vala_value_iterable_init (GValue* value)
{
	value->data[0].v_pointer = NULL;
}

static void
vala_value_iterable_free_value (GValue* value)
{
	if (value->data[0].v_pointer) {
		vala_iterable_unref (value->data[0].v_pointer);
	}
}

static void
vala_value_iterable_copy_value (const GValue* src_value,
                                GValue* dest_value)
{
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = vala_iterable_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}

static gpointer
vala_value_iterable_peek_pointer (const GValue* value)
{
	return value->data[0].v_pointer;
}

static gchar*
vala_value_iterable_collect_value (GValue* value,
                                   guint n_collect_values,
                                   GTypeCValue* collect_values,
                                   guint collect_flags)
{
	if (collect_values[0].v_pointer) {
		ValaIterable * object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = vala_iterable_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}

static gchar*
vala_value_iterable_lcopy_value (const GValue* value,
                                 guint n_collect_values,
                                 GTypeCValue* collect_values,
                                 guint collect_flags)
{
	ValaIterable ** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = vala_iterable_ref (value->data[0].v_pointer);
	}
	return NULL;
}

GParamSpec*
vala_param_spec_iterable (const gchar* name,
                          const gchar* nick,
                          const gchar* blurb,
                          GType object_type,
                          GParamFlags flags)
{
	ValaParamSpecIterable* spec;
	g_return_val_if_fail (g_type_is_a (object_type, VALA_TYPE_ITERABLE), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}

gpointer
vala_value_get_iterable (const GValue* value)
{
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_ITERABLE), NULL);
	return value->data[0].v_pointer;
}

void
vala_value_set_iterable (GValue* value,
                         gpointer v_object)
{
	ValaIterable * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_ITERABLE));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALA_TYPE_ITERABLE));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		vala_iterable_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_iterable_unref (old);
	}
}

void
vala_value_take_iterable (GValue* value,
                          gpointer v_object)
{
	ValaIterable * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_ITERABLE));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALA_TYPE_ITERABLE));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_iterable_unref (old);
	}
}

static void
vala_iterable_class_init (ValaIterableClass * klass,
                          gpointer klass_data)
{
	vala_iterable_parent_class = g_type_class_peek_parent (klass);
	((ValaIterableClass *) klass)->finalize = vala_iterable_finalize;
	g_type_class_adjust_private_offset (klass, &ValaIterable_private_offset);
	((ValaIterableClass *) klass)->get_element_type = (GType (*) (ValaIterable*)) vala_iterable_real_get_element_type;
	((ValaIterableClass *) klass)->iterator = (ValaIterator* (*) (ValaIterable*)) vala_iterable_real_iterator;
}

static void
vala_iterable_instance_init (ValaIterable * self,
                             gpointer klass)
{
	self->priv = vala_iterable_get_instance_private (self);
	self->ref_count = 1;
}

static void
vala_iterable_finalize (ValaIterable * obj)
{
	ValaIterable * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_ITERABLE, ValaIterable);
	g_signal_handlers_destroy (self);
}

/**
 * Implemented by classes that support a simple iteration over instances of the
 * collection.
 */
static GType
vala_iterable_get_type_once (void)
{
	static const GTypeValueTable g_define_type_value_table = { vala_value_iterable_init, vala_value_iterable_free_value, vala_value_iterable_copy_value, vala_value_iterable_peek_pointer, "p", vala_value_iterable_collect_value, "p", vala_value_iterable_lcopy_value };
	static const GTypeInfo g_define_type_info = { sizeof (ValaIterableClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_iterable_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaIterable), 0, (GInstanceInitFunc) vala_iterable_instance_init, &g_define_type_value_table };
	static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
	GType vala_iterable_type_id;
	vala_iterable_type_id = g_type_register_fundamental (g_type_fundamental_next (), "ValaIterable", &g_define_type_info, &g_define_type_fundamental_info, G_TYPE_FLAG_ABSTRACT);
	ValaIterable_private_offset = g_type_add_instance_private (vala_iterable_type_id, sizeof (ValaIterablePrivate));
	return vala_iterable_type_id;
}

GType
vala_iterable_get_type (void)
{
	static volatile gsize vala_iterable_type_id__once = 0;
	if (g_once_init_enter (&vala_iterable_type_id__once)) {
		GType vala_iterable_type_id;
		vala_iterable_type_id = vala_iterable_get_type_once ();
		g_once_init_leave (&vala_iterable_type_id__once, vala_iterable_type_id);
	}
	return vala_iterable_type_id__once;
}

gpointer
vala_iterable_ref (gpointer instance)
{
	ValaIterable * self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}

void
vala_iterable_unref (gpointer instance)
{
	ValaIterable * self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		VALA_ITERABLE_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}

