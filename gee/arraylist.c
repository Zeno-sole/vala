/* arraylist.c generated by valac, the Vala compiler
 * generated from arraylist.vala, do not modify */

/* arraylist.vala
 *
 * Copyright (C) 2004-2005  Novell, Inc
 * Copyright (C) 2005  David Waite
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
#include <glib.h>
#include <glib-object.h>
#include <string.h>

#define VALA_ARRAY_LIST_TYPE_ITERATOR (vala_array_list_iterator_get_type ())
#define VALA_ARRAY_LIST_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_ARRAY_LIST_TYPE_ITERATOR, ValaArrayListIterator))
#define VALA_ARRAY_LIST_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_ARRAY_LIST_TYPE_ITERATOR, ValaArrayListIteratorClass))
#define VALA_ARRAY_LIST_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_ARRAY_LIST_TYPE_ITERATOR))
#define VALA_ARRAY_LIST_IS_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_ARRAY_LIST_TYPE_ITERATOR))
#define VALA_ARRAY_LIST_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_ARRAY_LIST_TYPE_ITERATOR, ValaArrayListIteratorClass))

typedef struct _ValaArrayListIterator ValaArrayListIterator;
typedef struct _ValaArrayListIteratorClass ValaArrayListIteratorClass;
typedef struct _ValaArrayListIteratorPrivate ValaArrayListIteratorPrivate;
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _ValaArrayListPrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
	GEqualFunc _equal_func;
	gint _stamp;
};

struct _ValaArrayListIterator {
	ValaIterator parent_instance;
	gboolean _removed;
	gint _stamp;
	ValaArrayListIteratorPrivate * priv;
};

struct _ValaArrayListIteratorClass {
	ValaIteratorClass parent_class;
};

struct _ValaArrayListIteratorPrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
	ValaArrayList* _list;
	gint _index;
};

static gint ValaArrayList_private_offset;
static gpointer vala_array_list_parent_class = NULL;
static gint ValaArrayListIterator_private_offset;
static gpointer vala_array_list_iterator_parent_class = NULL;

static GType vala_array_list_real_get_element_type (ValaIterable* base);
static ValaIterator* vala_array_list_real_iterator (ValaIterable* base);
static ValaArrayListIterator* vala_array_list_iterator_new (GType g_type,
                                                     GBoxedCopyFunc g_dup_func,
                                                     GDestroyNotify g_destroy_func,
                                                     ValaArrayList* list);
static ValaArrayListIterator* vala_array_list_iterator_construct (GType object_type,
                                                           GType g_type,
                                                           GBoxedCopyFunc g_dup_func,
                                                           GDestroyNotify g_destroy_func,
                                                           ValaArrayList* list);
static GType vala_array_list_iterator_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
static gboolean vala_array_list_real_contains (ValaCollection* base,
                                        gconstpointer item);
static gint vala_array_list_real_index_of (ValaList* base,
                                    gconstpointer item);
static gpointer vala_array_list_real_get (ValaList* base,
                                   gint index);
static void vala_array_list_real_set (ValaList* base,
                               gint index,
                               gconstpointer item);
static gboolean vala_array_list_real_add (ValaCollection* base,
                                   gconstpointer item);
static void vala_array_list_grow_if_needed (ValaArrayList* self,
                                     gint new_count);
static void vala_array_list_real_insert (ValaList* base,
                                  gint index,
                                  gconstpointer item);
static void vala_array_list_shift (ValaArrayList* self,
                            gint start,
                            gint delta);
static gboolean vala_array_list_real_remove (ValaCollection* base,
                                      gconstpointer item);
static gpointer vala_array_list_real_remove_at (ValaList* base,
                                         gint index);
static void vala_array_list_real_clear (ValaCollection* base);
static void vala_array_list_set_capacity (ValaArrayList* self,
                                   gint value);
static void vala_array_list_iterator_set_list (ValaArrayListIterator* self,
                                        ValaArrayList* value);
static gboolean vala_array_list_iterator_real_next (ValaIterator* base);
static gboolean vala_array_list_iterator_real_has_next (ValaIterator* base);
static gpointer vala_array_list_iterator_real_get (ValaIterator* base);
static void vala_array_list_iterator_real_remove (ValaIterator* base);
static void vala_array_list_iterator_finalize (ValaIterator * obj);
static GType vala_array_list_iterator_get_type_once (void);
static void vala_array_list_finalize (ValaIterable * obj);
static GType vala_array_list_get_type_once (void);
static void _vala_array_destroy (gpointer array,
                          gssize array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gssize array_length,
                       GDestroyNotify destroy_func);
static void _vala_array_move (gpointer array,
                       gsize element_size,
                       gssize src,
                       gssize dest,
                       gssize length);

static inline gpointer
vala_array_list_get_instance_private (ValaArrayList* self)
{
	return G_STRUCT_MEMBER_P (self, ValaArrayList_private_offset);
}

static gint
vala_array_list_real_get_size (ValaCollection* base)
{
	gint result;
	ValaArrayList* self;
	self = (ValaArrayList*) base;
	result = self->_size;
	return result;
}

void
vala_array_list_set_equal_func (ValaArrayList* self,
                                GEqualFunc value)
{
	g_return_if_fail (self != NULL);
	self->priv->_equal_func = value;
}

ValaArrayList*
vala_array_list_construct (GType object_type,
                           GType g_type,
                           GBoxedCopyFunc g_dup_func,
                           GDestroyNotify g_destroy_func,
                           GEqualFunc equal_func)
{
	ValaArrayList* self = NULL;
	self = (ValaArrayList*) vala_list_construct (object_type, g_type, (GBoxedCopyFunc) g_dup_func, (GDestroyNotify) g_destroy_func);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	vala_array_list_set_equal_func (self, equal_func);
	return self;
}

ValaArrayList*
vala_array_list_new (GType g_type,
                     GBoxedCopyFunc g_dup_func,
                     GDestroyNotify g_destroy_func,
                     GEqualFunc equal_func)
{
	return vala_array_list_construct (VALA_TYPE_ARRAY_LIST, g_type, g_dup_func, g_destroy_func, equal_func);
}

static GType
vala_array_list_real_get_element_type (ValaIterable* base)
{
	ValaArrayList * self;
	GType result;
	self = (ValaArrayList*) base;
	result = self->priv->g_type;
	return result;
}

static ValaIterator*
vala_array_list_real_iterator (ValaIterable* base)
{
	ValaArrayList * self;
	ValaArrayListIterator* _tmp0_;
	ValaIterator* result;
	self = (ValaArrayList*) base;
	_tmp0_ = vala_array_list_iterator_new (self->priv->g_type, (GBoxedCopyFunc) self->priv->g_dup_func, (GDestroyNotify) self->priv->g_destroy_func, self);
	result = (ValaIterator*) _tmp0_;
	return result;
}

static gboolean
vala_array_list_real_contains (ValaCollection* base,
                               gconstpointer item)
{
	ValaArrayList * self;
	gboolean result;
	self = (ValaArrayList*) base;
	result = vala_list_index_of ((ValaList*) self, item) != -1;
	return result;
}

static gint
vala_array_list_real_index_of (ValaList* base,
                               gconstpointer item)
{
	ValaArrayList * self;
	gint result;
	self = (ValaArrayList*) base;
	{
		gint index = 0;
		index = 0;
		{
			gboolean _tmp0_ = FALSE;
			_tmp0_ = TRUE;
			while (TRUE) {
				GEqualFunc _tmp2_;
				gpointer* _tmp3_;
				gint _tmp3__length1;
				gconstpointer _tmp4_;
				if (!_tmp0_) {
					gint _tmp1_;
					_tmp1_ = index;
					index = _tmp1_ + 1;
				}
				_tmp0_ = FALSE;
				if (!(index < self->_size)) {
					break;
				}
				_tmp2_ = self->priv->_equal_func;
				_tmp3_ = self->_items;
				_tmp3__length1 = self->_items_length1;
				_tmp4_ = _tmp3_[index];
				if (_tmp2_ (_tmp4_, item)) {
					result = index;
					return result;
				}
			}
		}
	}
	result = -1;
	return result;
}

static gpointer
vala_array_list_real_get (ValaList* base,
                          gint index)
{
	ValaArrayList * self;
	gboolean _tmp0_ = FALSE;
	gpointer* _tmp1_;
	gint _tmp1__length1;
	gconstpointer _tmp2_;
	gpointer _tmp3_;
	gpointer result;
	self = (ValaArrayList*) base;
	if (index >= 0) {
		_tmp0_ = index < self->_size;
	} else {
		_tmp0_ = FALSE;
	}
	_vala_assert (_tmp0_, "index >= 0 && index < _size");
	_tmp1_ = self->_items;
	_tmp1__length1 = self->_items_length1;
	_tmp2_ = _tmp1_[index];
	_tmp3_ = ((_tmp2_ != NULL) && (self->priv->g_dup_func != NULL)) ? self->priv->g_dup_func ((gpointer) _tmp2_) : ((gpointer) _tmp2_);
	result = _tmp3_;
	return result;
}

static void
vala_array_list_real_set (ValaList* base,
                          gint index,
                          gconstpointer item)
{
	ValaArrayList * self;
	gboolean _tmp0_ = FALSE;
	gpointer* _tmp1_;
	gint _tmp1__length1;
	gpointer _tmp2_;
	self = (ValaArrayList*) base;
	if (index >= 0) {
		_tmp0_ = index < self->_size;
	} else {
		_tmp0_ = FALSE;
	}
	_vala_assert (_tmp0_, "index >= 0 && index < _size");
	_tmp1_ = self->_items;
	_tmp1__length1 = self->_items_length1;
	_tmp2_ = ((item != NULL) && (self->priv->g_dup_func != NULL)) ? self->priv->g_dup_func ((gpointer) item) : ((gpointer) item);
	((_tmp1_[index] == NULL) || (self->priv->g_destroy_func == NULL)) ? NULL : (_tmp1_[index] = (self->priv->g_destroy_func (_tmp1_[index]), NULL));
	_tmp1_[index] = _tmp2_;
}

static gboolean
vala_array_list_real_add (ValaCollection* base,
                          gconstpointer item)
{
	ValaArrayList * self;
	gpointer* _tmp0_;
	gint _tmp0__length1;
	gpointer* _tmp1_;
	gint _tmp1__length1;
	gint _tmp2_;
	gconstpointer _tmp3_;
	gpointer _tmp4_;
	gint _tmp5_;
	gboolean result;
	self = (ValaArrayList*) base;
	_tmp0_ = self->_items;
	_tmp0__length1 = self->_items_length1;
	if (self->_size == _tmp0__length1) {
		vala_array_list_grow_if_needed (self, 1);
	}
	_tmp1_ = self->_items;
	_tmp1__length1 = self->_items_length1;
	_tmp2_ = self->_size;
	self->_size = _tmp2_ + 1;
	_tmp3_ = item;
	_tmp4_ = ((_tmp3_ != NULL) && (self->priv->g_dup_func != NULL)) ? self->priv->g_dup_func ((gpointer) _tmp3_) : ((gpointer) _tmp3_);
	((_tmp1_[_tmp2_] == NULL) || (self->priv->g_destroy_func == NULL)) ? NULL : (_tmp1_[_tmp2_] = (self->priv->g_destroy_func (_tmp1_[_tmp2_]), NULL));
	_tmp1_[_tmp2_] = _tmp4_;
	_tmp5_ = self->priv->_stamp;
	self->priv->_stamp = _tmp5_ + 1;
	result = TRUE;
	return result;
}

static void
vala_array_list_real_insert (ValaList* base,
                             gint index,
                             gconstpointer item)
{
	ValaArrayList * self;
	gboolean _tmp0_ = FALSE;
	gpointer* _tmp1_;
	gint _tmp1__length1;
	gpointer* _tmp2_;
	gint _tmp2__length1;
	gpointer _tmp3_;
	gint _tmp4_;
	self = (ValaArrayList*) base;
	if (index >= 0) {
		_tmp0_ = index <= self->_size;
	} else {
		_tmp0_ = FALSE;
	}
	_vala_assert (_tmp0_, "index >= 0 && index <= _size");
	_tmp1_ = self->_items;
	_tmp1__length1 = self->_items_length1;
	if (self->_size == _tmp1__length1) {
		vala_array_list_grow_if_needed (self, 1);
	}
	vala_array_list_shift (self, index, 1);
	_tmp2_ = self->_items;
	_tmp2__length1 = self->_items_length1;
	_tmp3_ = ((item != NULL) && (self->priv->g_dup_func != NULL)) ? self->priv->g_dup_func ((gpointer) item) : ((gpointer) item);
	((_tmp2_[index] == NULL) || (self->priv->g_destroy_func == NULL)) ? NULL : (_tmp2_[index] = (self->priv->g_destroy_func (_tmp2_[index]), NULL));
	_tmp2_[index] = _tmp3_;
	_tmp4_ = self->priv->_stamp;
	self->priv->_stamp = _tmp4_ + 1;
}

static gboolean
vala_array_list_real_remove (ValaCollection* base,
                             gconstpointer item)
{
	ValaArrayList * self;
	gboolean result;
	self = (ValaArrayList*) base;
	{
		gint index = 0;
		index = 0;
		{
			gboolean _tmp0_ = FALSE;
			_tmp0_ = TRUE;
			while (TRUE) {
				GEqualFunc _tmp2_;
				gpointer* _tmp3_;
				gint _tmp3__length1;
				gconstpointer _tmp4_;
				if (!_tmp0_) {
					gint _tmp1_;
					_tmp1_ = index;
					index = _tmp1_ + 1;
				}
				_tmp0_ = FALSE;
				if (!(index < self->_size)) {
					break;
				}
				_tmp2_ = self->priv->_equal_func;
				_tmp3_ = self->_items;
				_tmp3__length1 = self->_items_length1;
				_tmp4_ = _tmp3_[index];
				if (_tmp2_ (_tmp4_, item)) {
					gpointer _tmp5_;
					gpointer _tmp6_;
					_tmp5_ = vala_list_remove_at ((ValaList*) self, index);
					_tmp6_ = _tmp5_;
					((_tmp6_ == NULL) || (self->priv->g_destroy_func == NULL)) ? NULL : (_tmp6_ = (self->priv->g_destroy_func (_tmp6_), NULL));
					result = TRUE;
					return result;
				}
			}
		}
	}
	result = FALSE;
	return result;
}

static gpointer
vala_array_list_real_remove_at (ValaList* base,
                                gint index)
{
	ValaArrayList * self;
	gboolean _tmp0_ = FALSE;
	gpointer item = NULL;
	gpointer* _tmp1_;
	gint _tmp1__length1;
	gconstpointer _tmp2_;
	gpointer _tmp3_;
	gpointer* _tmp4_;
	gint _tmp4__length1;
	gint _tmp5_;
	gpointer result;
	self = (ValaArrayList*) base;
	if (index >= 0) {
		_tmp0_ = index < self->_size;
	} else {
		_tmp0_ = FALSE;
	}
	_vala_assert (_tmp0_, "index >= 0 && index < _size");
	_tmp1_ = self->_items;
	_tmp1__length1 = self->_items_length1;
	_tmp2_ = _tmp1_[index];
	_tmp3_ = ((_tmp2_ != NULL) && (self->priv->g_dup_func != NULL)) ? self->priv->g_dup_func ((gpointer) _tmp2_) : ((gpointer) _tmp2_);
	item = _tmp3_;
	_tmp4_ = self->_items;
	_tmp4__length1 = self->_items_length1;
	((_tmp4_[index] == NULL) || (self->priv->g_destroy_func == NULL)) ? NULL : (_tmp4_[index] = (self->priv->g_destroy_func (_tmp4_[index]), NULL));
	_tmp4_[index] = NULL;
	vala_array_list_shift (self, index + 1, -1);
	_tmp5_ = self->priv->_stamp;
	self->priv->_stamp = _tmp5_ + 1;
	result = item;
	return result;
}

static void
vala_array_list_real_clear (ValaCollection* base)
{
	ValaArrayList * self;
	gint _tmp3_;
	self = (ValaArrayList*) base;
	{
		gint index = 0;
		index = 0;
		{
			gboolean _tmp0_ = FALSE;
			_tmp0_ = TRUE;
			while (TRUE) {
				gpointer* _tmp2_;
				gint _tmp2__length1;
				if (!_tmp0_) {
					gint _tmp1_;
					_tmp1_ = index;
					index = _tmp1_ + 1;
				}
				_tmp0_ = FALSE;
				if (!(index < self->_size)) {
					break;
				}
				_tmp2_ = self->_items;
				_tmp2__length1 = self->_items_length1;
				((_tmp2_[index] == NULL) || (self->priv->g_destroy_func == NULL)) ? NULL : (_tmp2_[index] = (self->priv->g_destroy_func (_tmp2_[index]), NULL));
				_tmp2_[index] = NULL;
			}
		}
	}
	self->_size = 0;
	_tmp3_ = self->priv->_stamp;
	self->priv->_stamp = _tmp3_ + 1;
}

static void
vala_array_list_shift (ValaArrayList* self,
                       gint start,
                       gint delta)
{
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	g_return_if_fail (self != NULL);
	if (start >= 0) {
		_tmp1_ = start <= self->_size;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		_tmp0_ = start >= (-delta);
	} else {
		_tmp0_ = FALSE;
	}
	_vala_assert (_tmp0_, "start >= 0 && start <= _size && start >= -delta");
	_vala_array_move (self->_items, sizeof (gpointer), start, start + delta, self->_size - start);
	self->_size = self->_size + delta;
}

static void
vala_array_list_grow_if_needed (ValaArrayList* self,
                                gint new_count)
{
	gint minimum_size = 0;
	gpointer* _tmp0_;
	gint _tmp0__length1;
	g_return_if_fail (self != NULL);
	_vala_assert (new_count >= 0, "new_count >= 0");
	minimum_size = self->_size + new_count;
	_tmp0_ = self->_items;
	_tmp0__length1 = self->_items_length1;
	if (minimum_size > _tmp0__length1) {
		gint _tmp1_ = 0;
		gpointer* _tmp2_;
		gint _tmp2__length1;
		_tmp2_ = self->_items;
		_tmp2__length1 = self->_items_length1;
		if (new_count > _tmp2__length1) {
			_tmp1_ = minimum_size;
		} else {
			gpointer* _tmp3_;
			gint _tmp3__length1;
			_tmp3_ = self->_items;
			_tmp3__length1 = self->_items_length1;
			_tmp1_ = 2 * _tmp3__length1;
		}
		vala_array_list_set_capacity (self, _tmp1_);
	}
}

static void
vala_array_list_set_capacity (ValaArrayList* self,
                              gint value)
{
	gint _tmp0_;
	g_return_if_fail (self != NULL);
	_vala_assert (value >= self->_size, "value >= _size");
	_tmp0_ = value;
	self->_items = g_renew (gpointer, self->_items, value);
	(_tmp0_ > self->_items_length1) ? memset (self->_items + self->_items_length1, 0, sizeof (gpointer) * (_tmp0_ - self->_items_length1)) : NULL;
	self->_items_length1 = _tmp0_;
	self->__items_size_ = _tmp0_;
}

static inline gpointer
vala_array_list_iterator_get_instance_private (ValaArrayListIterator* self)
{
	return G_STRUCT_MEMBER_P (self, ValaArrayListIterator_private_offset);
}

static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}

static void
vala_array_list_iterator_set_list (ValaArrayListIterator* self,
                                   ValaArrayList* value)
{
	ValaArrayList* _tmp0_;
	ValaArrayList* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_iterable_ref0 (value);
	_vala_iterable_unref0 (self->priv->_list);
	self->priv->_list = _tmp0_;
	_tmp1_ = self->priv->_list;
	self->_stamp = _tmp1_->priv->_stamp;
}

static ValaArrayListIterator*
vala_array_list_iterator_construct (GType object_type,
                                    GType g_type,
                                    GBoxedCopyFunc g_dup_func,
                                    GDestroyNotify g_destroy_func,
                                    ValaArrayList* list)
{
	ValaArrayListIterator* self = NULL;
	g_return_val_if_fail (list != NULL, NULL);
	self = (ValaArrayListIterator*) vala_iterator_construct (object_type, g_type, (GBoxedCopyFunc) g_dup_func, (GDestroyNotify) g_destroy_func);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	vala_array_list_iterator_set_list (self, list);
	return self;
}

static ValaArrayListIterator*
vala_array_list_iterator_new (GType g_type,
                              GBoxedCopyFunc g_dup_func,
                              GDestroyNotify g_destroy_func,
                              ValaArrayList* list)
{
	return vala_array_list_iterator_construct (VALA_ARRAY_LIST_TYPE_ITERATOR, g_type, g_dup_func, g_destroy_func, list);
}

static gboolean
vala_array_list_iterator_real_next (ValaIterator* base)
{
	ValaArrayListIterator * self;
	ValaArrayList* _tmp0_;
	ValaArrayList* _tmp1_;
	ValaArrayList* _tmp3_;
	gboolean result;
	self = (ValaArrayListIterator*) base;
	_tmp0_ = self->priv->_list;
	_vala_assert (self->_stamp == _tmp0_->priv->_stamp, "_stamp == _list._stamp");
	_tmp1_ = self->priv->_list;
	if (self->priv->_index < _tmp1_->_size) {
		gint _tmp2_;
		_tmp2_ = self->priv->_index;
		self->priv->_index = _tmp2_ + 1;
		self->_removed = FALSE;
	}
	_tmp3_ = self->priv->_list;
	result = self->priv->_index < _tmp3_->_size;
	return result;
}

static gboolean
vala_array_list_iterator_real_has_next (ValaIterator* base)
{
	ValaArrayListIterator * self;
	ValaArrayList* _tmp0_;
	ValaArrayList* _tmp1_;
	gboolean result;
	self = (ValaArrayListIterator*) base;
	_tmp0_ = self->priv->_list;
	_vala_assert (self->_stamp == _tmp0_->priv->_stamp, "_stamp == _list._stamp");
	_tmp1_ = self->priv->_list;
	result = (self->priv->_index + 1) < _tmp1_->_size;
	return result;
}

static gpointer
vala_array_list_iterator_real_get (ValaIterator* base)
{
	ValaArrayListIterator * self;
	ValaArrayList* _tmp0_;
	gboolean _tmp1_ = FALSE;
	ValaArrayList* _tmp3_;
	gpointer _tmp4_;
	gpointer result;
	self = (ValaArrayListIterator*) base;
	_tmp0_ = self->priv->_list;
	_vala_assert (self->_stamp == _tmp0_->priv->_stamp, "_stamp == _list._stamp");
	_vala_assert (!self->_removed, "! _removed");
	if (self->priv->_index < 0) {
		_tmp1_ = TRUE;
	} else {
		ValaArrayList* _tmp2_;
		_tmp2_ = self->priv->_list;
		_tmp1_ = self->priv->_index >= _tmp2_->_size;
	}
	if (_tmp1_) {
		result = NULL;
		return result;
	}
	_tmp3_ = self->priv->_list;
	_tmp4_ = vala_list_get ((ValaList*) _tmp3_, self->priv->_index);
	result = _tmp4_;
	return result;
}

static void
vala_array_list_iterator_real_remove (ValaIterator* base)
{
	ValaArrayListIterator * self;
	ValaArrayList* _tmp0_;
	gboolean _tmp1_ = FALSE;
	ValaArrayList* _tmp2_;
	ValaArrayList* _tmp3_;
	gpointer _tmp4_;
	gpointer _tmp5_;
	gint _tmp6_;
	ValaArrayList* _tmp7_;
	self = (ValaArrayListIterator*) base;
	_tmp0_ = self->priv->_list;
	_vala_assert (self->_stamp == _tmp0_->priv->_stamp, "_stamp == _list._stamp");
	if (!self->_removed) {
		_tmp1_ = self->priv->_index >= 0;
	} else {
		_tmp1_ = FALSE;
	}
	_vala_assert (_tmp1_, "! _removed && _index >= 0");
	_tmp2_ = self->priv->_list;
	_vala_assert (self->priv->_index < _tmp2_->_size, "_index < _list._size");
	_tmp3_ = self->priv->_list;
	_tmp4_ = vala_list_remove_at ((ValaList*) _tmp3_, self->priv->_index);
	_tmp5_ = _tmp4_;
	((_tmp5_ == NULL) || (self->priv->g_destroy_func == NULL)) ? NULL : (_tmp5_ = (self->priv->g_destroy_func (_tmp5_), NULL));
	_tmp6_ = self->priv->_index;
	self->priv->_index = _tmp6_ - 1;
	self->_removed = TRUE;
	_tmp7_ = self->priv->_list;
	self->_stamp = _tmp7_->priv->_stamp;
}

static gboolean
vala_array_list_iterator_real_get_valid (ValaIterator* base)
{
	gboolean result;
	ValaArrayListIterator* self;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	self = (ValaArrayListIterator*) base;
	if (self->priv->_index >= 0) {
		ValaArrayList* _tmp2_;
		_tmp2_ = self->priv->_list;
		_tmp1_ = self->priv->_index < _tmp2_->_size;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		_tmp0_ = !self->_removed;
	} else {
		_tmp0_ = FALSE;
	}
	result = _tmp0_;
	return result;
}

static void
vala_array_list_iterator_class_init (ValaArrayListIteratorClass * klass,
                                     gpointer klass_data)
{
	vala_array_list_iterator_parent_class = g_type_class_peek_parent (klass);
	((ValaIteratorClass *) klass)->finalize = vala_array_list_iterator_finalize;
	g_type_class_adjust_private_offset (klass, &ValaArrayListIterator_private_offset);
	((ValaIteratorClass *) klass)->next = (gboolean (*) (ValaIterator*)) vala_array_list_iterator_real_next;
	((ValaIteratorClass *) klass)->has_next = (gboolean (*) (ValaIterator*)) vala_array_list_iterator_real_has_next;
	((ValaIteratorClass *) klass)->get = (gpointer (*) (ValaIterator*)) vala_array_list_iterator_real_get;
	((ValaIteratorClass *) klass)->remove = (void (*) (ValaIterator*)) vala_array_list_iterator_real_remove;
	VALA_ITERATOR_CLASS (klass)->get_valid = (gboolean (*) (ValaIterator*)) vala_array_list_iterator_real_get_valid;
}

static void
vala_array_list_iterator_instance_init (ValaArrayListIterator * self,
                                        gpointer klass)
{
	self->priv = vala_array_list_iterator_get_instance_private (self);
	self->priv->_index = -1;
	self->_removed = FALSE;
	self->_stamp = 0;
}

static void
vala_array_list_iterator_finalize (ValaIterator * obj)
{
	ValaArrayListIterator * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_ARRAY_LIST_TYPE_ITERATOR, ValaArrayListIterator);
	_vala_iterable_unref0 (self->priv->_list);
	VALA_ITERATOR_CLASS (vala_array_list_iterator_parent_class)->finalize (obj);
}

static GType
vala_array_list_iterator_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaArrayListIteratorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_array_list_iterator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaArrayListIterator), 0, (GInstanceInitFunc) vala_array_list_iterator_instance_init, NULL };
	GType vala_array_list_iterator_type_id;
	vala_array_list_iterator_type_id = g_type_register_static (VALA_TYPE_ITERATOR, "ValaArrayListIterator", &g_define_type_info, 0);
	ValaArrayListIterator_private_offset = g_type_add_instance_private (vala_array_list_iterator_type_id, sizeof (ValaArrayListIteratorPrivate));
	return vala_array_list_iterator_type_id;
}

static GType
vala_array_list_iterator_get_type (void)
{
	static volatile gsize vala_array_list_iterator_type_id__once = 0;
	if (g_once_init_enter (&vala_array_list_iterator_type_id__once)) {
		GType vala_array_list_iterator_type_id;
		vala_array_list_iterator_type_id = vala_array_list_iterator_get_type_once ();
		g_once_init_leave (&vala_array_list_iterator_type_id__once, vala_array_list_iterator_type_id);
	}
	return vala_array_list_iterator_type_id__once;
}

static void
vala_array_list_class_init (ValaArrayListClass * klass,
                            gpointer klass_data)
{
	vala_array_list_parent_class = g_type_class_peek_parent (klass);
	((ValaIterableClass *) klass)->finalize = vala_array_list_finalize;
	g_type_class_adjust_private_offset (klass, &ValaArrayList_private_offset);
	((ValaIterableClass *) klass)->get_element_type = (GType (*) (ValaIterable*)) vala_array_list_real_get_element_type;
	((ValaIterableClass *) klass)->iterator = (ValaIterator* (*) (ValaIterable*)) vala_array_list_real_iterator;
	((ValaCollectionClass *) klass)->contains = (gboolean (*) (ValaCollection*, gconstpointer)) vala_array_list_real_contains;
	((ValaListClass *) klass)->index_of = (gint (*) (ValaList*, gconstpointer)) vala_array_list_real_index_of;
	((ValaListClass *) klass)->get = (gpointer (*) (ValaList*, gint)) vala_array_list_real_get;
	((ValaListClass *) klass)->set = (void (*) (ValaList*, gint, gconstpointer)) vala_array_list_real_set;
	((ValaCollectionClass *) klass)->add = (gboolean (*) (ValaCollection*, gconstpointer)) vala_array_list_real_add;
	((ValaListClass *) klass)->insert = (void (*) (ValaList*, gint, gconstpointer)) vala_array_list_real_insert;
	((ValaCollectionClass *) klass)->remove = (gboolean (*) (ValaCollection*, gconstpointer)) vala_array_list_real_remove;
	((ValaListClass *) klass)->remove_at = (gpointer (*) (ValaList*, gint)) vala_array_list_real_remove_at;
	((ValaCollectionClass *) klass)->clear = (void (*) (ValaCollection*)) vala_array_list_real_clear;
	VALA_COLLECTION_CLASS (klass)->get_size = (gint (*) (ValaCollection*)) vala_array_list_real_get_size;
}

static void
vala_array_list_instance_init (ValaArrayList * self,
                               gpointer klass)
{
	gpointer* _tmp0_;
	self->priv = vala_array_list_get_instance_private (self);
	_tmp0_ = g_new0 (gpointer, 4);
	self->_items = _tmp0_;
	self->_items_length1 = 4;
	self->__items_size_ = self->_items_length1;
	self->priv->_stamp = 0;
}

static void
vala_array_list_finalize (ValaIterable * obj)
{
	ValaArrayList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_ARRAY_LIST, ValaArrayList);
	self->_items = (_vala_array_free (self->_items, self->_items_length1, (GDestroyNotify) self->priv->g_destroy_func), NULL);
	VALA_ITERABLE_CLASS (vala_array_list_parent_class)->finalize (obj);
}

/**
 * Arrays of arbitrary elements which grow automatically as elements are added.
 */
static GType
vala_array_list_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaArrayListClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_array_list_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaArrayList), 0, (GInstanceInitFunc) vala_array_list_instance_init, NULL };
	GType vala_array_list_type_id;
	vala_array_list_type_id = g_type_register_static (VALA_TYPE_LIST, "ValaArrayList", &g_define_type_info, 0);
	ValaArrayList_private_offset = g_type_add_instance_private (vala_array_list_type_id, sizeof (ValaArrayListPrivate));
	return vala_array_list_type_id;
}

GType
vala_array_list_get_type (void)
{
	static volatile gsize vala_array_list_type_id__once = 0;
	if (g_once_init_enter (&vala_array_list_type_id__once)) {
		GType vala_array_list_type_id;
		vala_array_list_type_id = vala_array_list_get_type_once ();
		g_once_init_leave (&vala_array_list_type_id__once, vala_array_list_type_id);
	}
	return vala_array_list_type_id__once;
}

static void
_vala_array_destroy (gpointer array,
                     gssize array_length,
                     GDestroyNotify destroy_func)
{
	if ((array != NULL) && (destroy_func != NULL)) {
		gssize i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}

static void
_vala_array_free (gpointer array,
                  gssize array_length,
                  GDestroyNotify destroy_func)
{
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}

static void
_vala_array_move (gpointer array,
                  gsize element_size,
                  gssize src,
                  gssize dest,
                  gssize length)
{
	memmove (((char*) array) + (dest * element_size), ((char*) array) + (src * element_size), length * element_size);
	if ((src < dest) && ((src + length) > dest)) {
		memset (((char*) array) + (src * element_size), 0, (dest - src) * element_size);
	} else if ((src > dest) && (src < (dest + length))) {
		memset (((char*) array) + ((dest + length) * element_size), 0, (src - dest) * element_size);
	} else if (src != dest) {
		memset (((char*) array) + (src * element_size), 0, length * element_size);
	}
}

