/* collection.c generated by valac, the Vala compiler
 * generated from collection.vala, do not modify */

/* collection.vala
 *
 * Copyright (C) 2007  Jürg Billeter
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
#include <float.h>
#include <math.h>

#define _vala_iterator_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterator_unref (var), NULL)))
#define _g_free0(var) ((var == NULL) ? NULL : (var = (g_free (var), NULL)))

struct _ValaCollectionPrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
};

static gint ValaCollection_private_offset;
static gpointer vala_collection_parent_class = NULL;

static gboolean vala_collection_real_contains (ValaCollection* self,
                                        gconstpointer item);
static gboolean vala_collection_real_add (ValaCollection* self,
                                   gconstpointer item);
static gboolean vala_collection_real_remove (ValaCollection* self,
                                      gconstpointer item);
static void vala_collection_real_clear (ValaCollection* self);
static gboolean vala_collection_real_add_all (ValaCollection* self,
                                       ValaCollection* collection);
static gpointer* vala_collection_real_to_array (ValaCollection* self,
                                         gint* result_length1);
static gboolean* vala_collection_to_bool_array (ValaCollection* coll,
                                         gint* result_length1);
static gchar* vala_collection_to_char_array (ValaCollection* coll,
                                      gint* result_length1);
static guchar* vala_collection_to_uchar_array (ValaCollection* coll,
                                        gint* result_length1);
static gint* vala_collection_to_int_array (ValaCollection* coll,
                                    gint* result_length1);
static guint* vala_collection_to_uint_array (ValaCollection* coll,
                                      gint* result_length1);
static gint64** vala_collection_to_int64_array (ValaCollection* coll,
                                         gint* result_length1);
static guint64** vala_collection_to_uint64_array (ValaCollection* coll,
                                           gint* result_length1);
static glong* vala_collection_to_long_array (ValaCollection* coll,
                                      gint* result_length1);
static gulong* vala_collection_to_ulong_array (ValaCollection* coll,
                                        gint* result_length1);
static gfloat** vala_collection_to_float_array (ValaCollection* coll,
                                         gint* result_length1);
static gdouble** vala_collection_to_double_array (ValaCollection* coll,
                                           gint* result_length1);
static GType vala_collection_get_type_once (void);
static void _vala_array_destroy (gpointer array,
                          gssize array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gssize array_length,
                       GDestroyNotify destroy_func);

static inline gpointer
vala_collection_get_instance_private (ValaCollection* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCollection_private_offset);
}

gint
vala_collection_get_size (ValaCollection* self)
{
	ValaCollectionClass* _klass_;
	g_return_val_if_fail (self != NULL, 0);
	_klass_ = VALA_COLLECTION_GET_CLASS (self);
	if (_klass_->get_size) {
		return _klass_->get_size (self);
	}
	return -1;
}

gboolean
vala_collection_get_is_empty (ValaCollection* self)
{
	ValaCollectionClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = VALA_COLLECTION_GET_CLASS (self);
	if (_klass_->get_is_empty) {
		return _klass_->get_is_empty (self);
	}
	return FALSE;
}

static gboolean
vala_collection_real_get_is_empty (ValaCollection* base)
{
	gboolean result;
	ValaCollection* self;
	gint _tmp0_;
	gint _tmp1_;
	self = base;
	_tmp0_ = vala_collection_get_size (self);
	_tmp1_ = _tmp0_;
	result = _tmp1_ == 0;
	return result;
}

/**
 * Determines whether this collection contains the specified item.
 *
 * @param item the item to locate in the collection
 *
 * @return     true if item is found, false otherwise
 */
static gboolean
vala_collection_real_contains (ValaCollection* self,
                               gconstpointer item)
{
	gboolean _tmp0_ = FALSE;
	g_critical ("Type `%s' does not implement abstract method `vala_collection_contains'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}

gboolean
vala_collection_contains (ValaCollection* self,
                          gconstpointer item)
{
	ValaCollectionClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = VALA_COLLECTION_GET_CLASS (self);
	if (_klass_->contains) {
		return _klass_->contains (self, item);
	}
	return FALSE;
}

/**
 * Adds an item to this collection. Must not be called on read-only
 * collections.
 *
 * @param item the item to add to the collection
 *
 * @return     true if the collection has been changed, false otherwise
 */
static gboolean
vala_collection_real_add (ValaCollection* self,
                          gconstpointer item)
{
	gboolean _tmp0_ = FALSE;
	g_critical ("Type `%s' does not implement abstract method `vala_collection_add'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}

gboolean
vala_collection_add (ValaCollection* self,
                     gconstpointer item)
{
	ValaCollectionClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = VALA_COLLECTION_GET_CLASS (self);
	if (_klass_->add) {
		return _klass_->add (self, item);
	}
	return FALSE;
}

/**
 * Removes the first occurrence of an item from this collection. Must not
 * be called on read-only collections.
 *
 * @param item the item to remove from the collection
 *
 * @return     true if the collection has been changed, false otherwise
 */
static gboolean
vala_collection_real_remove (ValaCollection* self,
                             gconstpointer item)
{
	gboolean _tmp0_ = FALSE;
	g_critical ("Type `%s' does not implement abstract method `vala_collection_remove'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}

gboolean
vala_collection_remove (ValaCollection* self,
                        gconstpointer item)
{
	ValaCollectionClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = VALA_COLLECTION_GET_CLASS (self);
	if (_klass_->remove) {
		return _klass_->remove (self, item);
	}
	return FALSE;
}

/**
 * Removes all items from this collection. Must not be called on
 * read-only collections.
 */
static void
vala_collection_real_clear (ValaCollection* self)
{
	g_critical ("Type `%s' does not implement abstract method `vala_collection_clear'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}

void
vala_collection_clear (ValaCollection* self)
{
	ValaCollectionClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = VALA_COLLECTION_GET_CLASS (self);
	if (_klass_->clear) {
		_klass_->clear (self);
	}
}

/**
 * Adds all items in the input collection to this collection.
 *
 * @param collection the collection which items will be added to this
 *                   collection.
 *
 * @return     ``true`` if the collection has been changed, ``false`` otherwise
 */
static gboolean
vala_collection_real_add_all (ValaCollection* self,
                              ValaCollection* collection)
{
	gboolean changed = FALSE;
	gboolean result = FALSE;
	g_return_val_if_fail (collection != NULL, FALSE);
	changed = FALSE;
	{
		ValaIterator* iter = NULL;
		ValaIterator* _tmp0_;
		_tmp0_ = vala_iterable_iterator ((ValaIterable*) collection);
		iter = _tmp0_;
		{
			gboolean _tmp1_ = FALSE;
			_tmp1_ = TRUE;
			while (TRUE) {
				ValaIterator* _tmp2_;
				gpointer item = NULL;
				ValaIterator* _tmp3_;
				gpointer _tmp4_;
				gconstpointer _tmp5_;
				if (!_tmp1_) {
				}
				_tmp1_ = FALSE;
				_tmp2_ = iter;
				if (!vala_iterator_next (_tmp2_)) {
					break;
				}
				_tmp3_ = iter;
				_tmp4_ = vala_iterator_get (_tmp3_);
				item = _tmp4_;
				_tmp5_ = item;
				if (!vala_collection_contains (self, _tmp5_)) {
					gconstpointer _tmp6_;
					_tmp6_ = item;
					vala_collection_add (self, _tmp6_);
					changed = TRUE;
				}
				((item == NULL) || (self->priv->g_destroy_func == NULL)) ? NULL : (item = (self->priv->g_destroy_func (item), NULL));
			}
		}
		_vala_iterator_unref0 (iter);
	}
	result = changed;
	return result;
}

gboolean
vala_collection_add_all (ValaCollection* self,
                         ValaCollection* collection)
{
	ValaCollectionClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = VALA_COLLECTION_GET_CLASS (self);
	if (_klass_->add_all) {
		return _klass_->add_all (self, collection);
	}
	return FALSE;
}

/**
 * Returns an array containing all of items from this collection.
 *
 * @return an array containing all of items from this collection
 */
static gpointer*
vala_collection_real_to_array (ValaCollection* self,
                               gint* result_length1)
{
	GType t = 0UL;
	gpointer* result = NULL;
	t = self->priv->g_type;
	if (t == G_TYPE_BOOLEAN) {
		gint _tmp0_ = 0;
		gboolean* _tmp1_;
		gpointer* _tmp2_;
		gint _tmp2__length1;
		_tmp1_ = vala_collection_to_bool_array (G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_COLLECTION, ValaCollection), &_tmp0_);
		_tmp2_ = (gpointer*) _tmp1_;
		_tmp2__length1 = _tmp0_;
		if (result_length1) {
			*result_length1 = _tmp2__length1;
		}
		result = _tmp2_;
		return result;
	} else {
		if (t == G_TYPE_CHAR) {
			gint _tmp3_ = 0;
			gchar* _tmp4_;
			gpointer* _tmp5_;
			gint _tmp5__length1;
			_tmp4_ = vala_collection_to_char_array (G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_COLLECTION, ValaCollection), &_tmp3_);
			_tmp5_ = (gpointer*) _tmp4_;
			_tmp5__length1 = _tmp3_;
			if (result_length1) {
				*result_length1 = _tmp5__length1;
			}
			result = _tmp5_;
			return result;
		} else {
			if (t == G_TYPE_UCHAR) {
				gint _tmp6_ = 0;
				guchar* _tmp7_;
				gpointer* _tmp8_;
				gint _tmp8__length1;
				_tmp7_ = vala_collection_to_uchar_array (G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_COLLECTION, ValaCollection), &_tmp6_);
				_tmp8_ = (gpointer*) _tmp7_;
				_tmp8__length1 = _tmp6_;
				if (result_length1) {
					*result_length1 = _tmp8__length1;
				}
				result = _tmp8_;
				return result;
			} else {
				if (t == G_TYPE_INT) {
					gint _tmp9_ = 0;
					gint* _tmp10_;
					gpointer* _tmp11_;
					gint _tmp11__length1;
					_tmp10_ = vala_collection_to_int_array (G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_COLLECTION, ValaCollection), &_tmp9_);
					_tmp11_ = (gpointer*) _tmp10_;
					_tmp11__length1 = _tmp9_;
					if (result_length1) {
						*result_length1 = _tmp11__length1;
					}
					result = _tmp11_;
					return result;
				} else {
					if (t == G_TYPE_UINT) {
						gint _tmp12_ = 0;
						guint* _tmp13_;
						gpointer* _tmp14_;
						gint _tmp14__length1;
						_tmp13_ = vala_collection_to_uint_array (G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_COLLECTION, ValaCollection), &_tmp12_);
						_tmp14_ = (gpointer*) _tmp13_;
						_tmp14__length1 = _tmp12_;
						if (result_length1) {
							*result_length1 = _tmp14__length1;
						}
						result = _tmp14_;
						return result;
					} else {
						if (t == G_TYPE_INT64) {
							gint _tmp15_ = 0;
							gint64** _tmp16_;
							gpointer* _tmp17_;
							gint _tmp17__length1;
							_tmp16_ = vala_collection_to_int64_array (G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_COLLECTION, ValaCollection), &_tmp15_);
							_tmp17_ = (gpointer*) _tmp16_;
							_tmp17__length1 = _tmp15_;
							if (result_length1) {
								*result_length1 = _tmp17__length1;
							}
							result = _tmp17_;
							return result;
						} else {
							if (t == G_TYPE_UINT64) {
								gint _tmp18_ = 0;
								guint64** _tmp19_;
								gpointer* _tmp20_;
								gint _tmp20__length1;
								_tmp19_ = vala_collection_to_uint64_array (G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_COLLECTION, ValaCollection), &_tmp18_);
								_tmp20_ = (gpointer*) _tmp19_;
								_tmp20__length1 = _tmp18_;
								if (result_length1) {
									*result_length1 = _tmp20__length1;
								}
								result = _tmp20_;
								return result;
							} else {
								if (t == G_TYPE_LONG) {
									gint _tmp21_ = 0;
									glong* _tmp22_;
									gpointer* _tmp23_;
									gint _tmp23__length1;
									_tmp22_ = vala_collection_to_long_array (G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_COLLECTION, ValaCollection), &_tmp21_);
									_tmp23_ = (gpointer*) _tmp22_;
									_tmp23__length1 = _tmp21_;
									if (result_length1) {
										*result_length1 = _tmp23__length1;
									}
									result = _tmp23_;
									return result;
								} else {
									if (t == G_TYPE_ULONG) {
										gint _tmp24_ = 0;
										gulong* _tmp25_;
										gpointer* _tmp26_;
										gint _tmp26__length1;
										_tmp25_ = vala_collection_to_ulong_array (G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_COLLECTION, ValaCollection), &_tmp24_);
										_tmp26_ = (gpointer*) _tmp25_;
										_tmp26__length1 = _tmp24_;
										if (result_length1) {
											*result_length1 = _tmp26__length1;
										}
										result = _tmp26_;
										return result;
									} else {
										if (t == G_TYPE_FLOAT) {
											gint _tmp27_ = 0;
											gfloat** _tmp28_;
											gpointer* _tmp29_;
											gint _tmp29__length1;
											_tmp28_ = vala_collection_to_float_array (G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_COLLECTION, ValaCollection), &_tmp27_);
											_tmp29_ = (gpointer*) _tmp28_;
											_tmp29__length1 = _tmp27_;
											if (result_length1) {
												*result_length1 = _tmp29__length1;
											}
											result = _tmp29_;
											return result;
										} else {
											if (t == G_TYPE_DOUBLE) {
												gint _tmp30_ = 0;
												gdouble** _tmp31_;
												gpointer* _tmp32_;
												gint _tmp32__length1;
												_tmp31_ = vala_collection_to_double_array (G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_COLLECTION, ValaCollection), &_tmp30_);
												_tmp32_ = (gpointer*) _tmp31_;
												_tmp32__length1 = _tmp30_;
												if (result_length1) {
													*result_length1 = _tmp32__length1;
												}
												result = _tmp32_;
												return result;
											} else {
												gboolean _tmp33_ = FALSE;
												if (G_TYPE_IS_ENUM (t)) {
													_tmp33_ = TRUE;
												} else {
													_tmp33_ = G_TYPE_IS_FLAGS (t);
												}
												if (_tmp33_) {
													gint _tmp34_ = 0;
													gint* _tmp35_;
													gpointer* _tmp36_;
													gint _tmp36__length1;
													_tmp35_ = vala_collection_to_int_array (G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_COLLECTION, ValaCollection), &_tmp34_);
													_tmp36_ = (gpointer*) _tmp35_;
													_tmp36__length1 = _tmp34_;
													if (result_length1) {
														*result_length1 = _tmp36__length1;
													}
													result = _tmp36_;
													return result;
												} else {
													gpointer* array = NULL;
													gint _tmp37_;
													gint _tmp38_;
													gpointer* _tmp39_;
													gint array_length1;
													gint _array_size_;
													gint index = 0;
													gpointer* _tmp47_;
													gint _tmp47__length1;
													_tmp37_ = vala_collection_get_size (self);
													_tmp38_ = _tmp37_;
													_tmp39_ = g_new0 (gpointer, _tmp38_);
													array = _tmp39_;
													array_length1 = _tmp38_;
													_array_size_ = array_length1;
													index = 0;
													{
														ValaIterator* _element_it = NULL;
														ValaIterator* _tmp40_;
														_tmp40_ = vala_iterable_iterator ((ValaIterable*) self);
														_element_it = _tmp40_;
														while (TRUE) {
															ValaIterator* _tmp41_;
															gpointer element = NULL;
															ValaIterator* _tmp42_;
															gpointer _tmp43_;
															gpointer* _tmp44_;
															gint _tmp44__length1;
															gint _tmp45_;
															gpointer _tmp46_;
															_tmp41_ = _element_it;
															if (!vala_iterator_next (_tmp41_)) {
																break;
															}
															_tmp42_ = _element_it;
															_tmp43_ = vala_iterator_get (_tmp42_);
															element = _tmp43_;
															_tmp44_ = array;
															_tmp44__length1 = array_length1;
															_tmp45_ = index;
															index = _tmp45_ + 1;
															_tmp46_ = element;
															element = NULL;
															((_tmp44_[_tmp45_] == NULL) || (self->priv->g_destroy_func == NULL)) ? NULL : (_tmp44_[_tmp45_] = (self->priv->g_destroy_func (_tmp44_[_tmp45_]), NULL));
															_tmp44_[_tmp45_] = _tmp46_;
															((element == NULL) || (self->priv->g_destroy_func == NULL)) ? NULL : (element = (self->priv->g_destroy_func (element), NULL));
														}
														_vala_iterator_unref0 (_element_it);
													}
													_tmp47_ = array;
													_tmp47__length1 = array_length1;
													if (result_length1) {
														*result_length1 = _tmp47__length1;
													}
													result = _tmp47_;
													return result;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

gpointer*
vala_collection_to_array (ValaCollection* self,
                          gint* result_length1)
{
	ValaCollectionClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = VALA_COLLECTION_GET_CLASS (self);
	if (_klass_->to_array) {
		return _klass_->to_array (self, result_length1);
	}
	return NULL;
}

static gboolean*
vala_collection_to_bool_array (ValaCollection* coll,
                               gint* result_length1)
{
	gboolean* array = NULL;
	gint _tmp0_;
	gint _tmp1_;
	gboolean* _tmp2_;
	gint array_length1;
	gint _array_size_;
	gint index = 0;
	gboolean* _tmp10_;
	gint _tmp10__length1;
	gboolean* result = NULL;
	g_return_val_if_fail (coll != NULL, NULL);
	_tmp0_ = vala_collection_get_size (coll);
	_tmp1_ = _tmp0_;
	_tmp2_ = g_new0 (gboolean, _tmp1_);
	array = _tmp2_;
	array_length1 = _tmp1_;
	_array_size_ = array_length1;
	index = 0;
	{
		ValaIterator* _element_it = NULL;
		ValaIterator* _tmp3_;
		_tmp3_ = vala_iterable_iterator ((ValaIterable*) coll);
		_element_it = _tmp3_;
		while (TRUE) {
			ValaIterator* _tmp4_;
			gboolean element = FALSE;
			ValaIterator* _tmp5_;
			gpointer _tmp6_;
			gboolean* _tmp7_;
			gint _tmp7__length1;
			gint _tmp8_;
			gboolean _tmp9_;
			_tmp4_ = _element_it;
			if (!vala_iterator_next (_tmp4_)) {
				break;
			}
			_tmp5_ = _element_it;
			_tmp6_ = vala_iterator_get (_tmp5_);
			element = (gboolean) ((gintptr) _tmp6_);
			_tmp7_ = array;
			_tmp7__length1 = array_length1;
			_tmp8_ = index;
			index = _tmp8_ + 1;
			_tmp9_ = element;
			_tmp7_[_tmp8_] = _tmp9_;
		}
		_vala_iterator_unref0 (_element_it);
	}
	_tmp10_ = array;
	_tmp10__length1 = array_length1;
	if (result_length1) {
		*result_length1 = _tmp10__length1;
	}
	result = _tmp10_;
	return result;
}

static gchar*
vala_collection_to_char_array (ValaCollection* coll,
                               gint* result_length1)
{
	gchar* array = NULL;
	gint _tmp0_;
	gint _tmp1_;
	gchar* _tmp2_;
	gint array_length1;
	gint _array_size_;
	gint index = 0;
	gchar* _tmp10_;
	gint _tmp10__length1;
	gchar* result = NULL;
	g_return_val_if_fail (coll != NULL, NULL);
	_tmp0_ = vala_collection_get_size (coll);
	_tmp1_ = _tmp0_;
	_tmp2_ = g_new0 (gchar, _tmp1_);
	array = _tmp2_;
	array_length1 = _tmp1_;
	_array_size_ = array_length1;
	index = 0;
	{
		ValaIterator* _element_it = NULL;
		ValaIterator* _tmp3_;
		_tmp3_ = vala_iterable_iterator ((ValaIterable*) coll);
		_element_it = _tmp3_;
		while (TRUE) {
			ValaIterator* _tmp4_;
			gchar element = '\0';
			ValaIterator* _tmp5_;
			gpointer _tmp6_;
			gchar* _tmp7_;
			gint _tmp7__length1;
			gint _tmp8_;
			gchar _tmp9_;
			_tmp4_ = _element_it;
			if (!vala_iterator_next (_tmp4_)) {
				break;
			}
			_tmp5_ = _element_it;
			_tmp6_ = vala_iterator_get (_tmp5_);
			element = (gchar) ((gintptr) _tmp6_);
			_tmp7_ = array;
			_tmp7__length1 = array_length1;
			_tmp8_ = index;
			index = _tmp8_ + 1;
			_tmp9_ = element;
			_tmp7_[_tmp8_] = _tmp9_;
		}
		_vala_iterator_unref0 (_element_it);
	}
	_tmp10_ = array;
	_tmp10__length1 = array_length1;
	if (result_length1) {
		*result_length1 = _tmp10__length1;
	}
	result = _tmp10_;
	return result;
}

static guchar*
vala_collection_to_uchar_array (ValaCollection* coll,
                                gint* result_length1)
{
	guchar* array = NULL;
	gint _tmp0_;
	gint _tmp1_;
	guchar* _tmp2_;
	gint array_length1;
	gint _array_size_;
	gint index = 0;
	guchar* _tmp10_;
	gint _tmp10__length1;
	guchar* result = NULL;
	g_return_val_if_fail (coll != NULL, NULL);
	_tmp0_ = vala_collection_get_size (coll);
	_tmp1_ = _tmp0_;
	_tmp2_ = g_new0 (guchar, _tmp1_);
	array = _tmp2_;
	array_length1 = _tmp1_;
	_array_size_ = array_length1;
	index = 0;
	{
		ValaIterator* _element_it = NULL;
		ValaIterator* _tmp3_;
		_tmp3_ = vala_iterable_iterator ((ValaIterable*) coll);
		_element_it = _tmp3_;
		while (TRUE) {
			ValaIterator* _tmp4_;
			guchar element = '\0';
			ValaIterator* _tmp5_;
			gpointer _tmp6_;
			guchar* _tmp7_;
			gint _tmp7__length1;
			gint _tmp8_;
			guchar _tmp9_;
			_tmp4_ = _element_it;
			if (!vala_iterator_next (_tmp4_)) {
				break;
			}
			_tmp5_ = _element_it;
			_tmp6_ = vala_iterator_get (_tmp5_);
			element = (guchar) ((guintptr) _tmp6_);
			_tmp7_ = array;
			_tmp7__length1 = array_length1;
			_tmp8_ = index;
			index = _tmp8_ + 1;
			_tmp9_ = element;
			_tmp7_[_tmp8_] = _tmp9_;
		}
		_vala_iterator_unref0 (_element_it);
	}
	_tmp10_ = array;
	_tmp10__length1 = array_length1;
	if (result_length1) {
		*result_length1 = _tmp10__length1;
	}
	result = _tmp10_;
	return result;
}

static gint*
vala_collection_to_int_array (ValaCollection* coll,
                              gint* result_length1)
{
	gint* array = NULL;
	gint _tmp0_;
	gint _tmp1_;
	gint* _tmp2_;
	gint array_length1;
	gint _array_size_;
	gint index = 0;
	gint* _tmp10_;
	gint _tmp10__length1;
	gint* result = NULL;
	g_return_val_if_fail (coll != NULL, NULL);
	_tmp0_ = vala_collection_get_size (coll);
	_tmp1_ = _tmp0_;
	_tmp2_ = g_new0 (gint, _tmp1_);
	array = _tmp2_;
	array_length1 = _tmp1_;
	_array_size_ = array_length1;
	index = 0;
	{
		ValaIterator* _element_it = NULL;
		ValaIterator* _tmp3_;
		_tmp3_ = vala_iterable_iterator ((ValaIterable*) coll);
		_element_it = _tmp3_;
		while (TRUE) {
			ValaIterator* _tmp4_;
			gint element = 0;
			ValaIterator* _tmp5_;
			gpointer _tmp6_;
			gint* _tmp7_;
			gint _tmp7__length1;
			gint _tmp8_;
			gint _tmp9_;
			_tmp4_ = _element_it;
			if (!vala_iterator_next (_tmp4_)) {
				break;
			}
			_tmp5_ = _element_it;
			_tmp6_ = vala_iterator_get (_tmp5_);
			element = (gint) ((gintptr) _tmp6_);
			_tmp7_ = array;
			_tmp7__length1 = array_length1;
			_tmp8_ = index;
			index = _tmp8_ + 1;
			_tmp9_ = element;
			_tmp7_[_tmp8_] = _tmp9_;
		}
		_vala_iterator_unref0 (_element_it);
	}
	_tmp10_ = array;
	_tmp10__length1 = array_length1;
	if (result_length1) {
		*result_length1 = _tmp10__length1;
	}
	result = _tmp10_;
	return result;
}

static guint*
vala_collection_to_uint_array (ValaCollection* coll,
                               gint* result_length1)
{
	guint* array = NULL;
	gint _tmp0_;
	gint _tmp1_;
	guint* _tmp2_;
	gint array_length1;
	gint _array_size_;
	gint index = 0;
	guint* _tmp10_;
	gint _tmp10__length1;
	guint* result = NULL;
	g_return_val_if_fail (coll != NULL, NULL);
	_tmp0_ = vala_collection_get_size (coll);
	_tmp1_ = _tmp0_;
	_tmp2_ = g_new0 (guint, _tmp1_);
	array = _tmp2_;
	array_length1 = _tmp1_;
	_array_size_ = array_length1;
	index = 0;
	{
		ValaIterator* _element_it = NULL;
		ValaIterator* _tmp3_;
		_tmp3_ = vala_iterable_iterator ((ValaIterable*) coll);
		_element_it = _tmp3_;
		while (TRUE) {
			ValaIterator* _tmp4_;
			guint element = 0U;
			ValaIterator* _tmp5_;
			gpointer _tmp6_;
			guint* _tmp7_;
			gint _tmp7__length1;
			gint _tmp8_;
			guint _tmp9_;
			_tmp4_ = _element_it;
			if (!vala_iterator_next (_tmp4_)) {
				break;
			}
			_tmp5_ = _element_it;
			_tmp6_ = vala_iterator_get (_tmp5_);
			element = (guint) ((guintptr) _tmp6_);
			_tmp7_ = array;
			_tmp7__length1 = array_length1;
			_tmp8_ = index;
			index = _tmp8_ + 1;
			_tmp9_ = element;
			_tmp7_[_tmp8_] = _tmp9_;
		}
		_vala_iterator_unref0 (_element_it);
	}
	_tmp10_ = array;
	_tmp10__length1 = array_length1;
	if (result_length1) {
		*result_length1 = _tmp10__length1;
	}
	result = _tmp10_;
	return result;
}

static gint64**
vala_collection_to_int64_array (ValaCollection* coll,
                                gint* result_length1)
{
	gint64** array = NULL;
	gint _tmp0_;
	gint _tmp1_;
	gint64** _tmp2_;
	gint array_length1;
	gint _array_size_;
	gint index = 0;
	gint64** _tmp10_;
	gint _tmp10__length1;
	gint64** result = NULL;
	g_return_val_if_fail (coll != NULL, NULL);
	_tmp0_ = vala_collection_get_size (coll);
	_tmp1_ = _tmp0_;
	_tmp2_ = g_new0 (gint64*, _tmp1_);
	array = _tmp2_;
	array_length1 = _tmp1_;
	_array_size_ = array_length1;
	index = 0;
	{
		ValaIterator* _element_it = NULL;
		ValaIterator* _tmp3_;
		_tmp3_ = vala_iterable_iterator ((ValaIterable*) coll);
		_element_it = _tmp3_;
		while (TRUE) {
			ValaIterator* _tmp4_;
			gint64* element = NULL;
			ValaIterator* _tmp5_;
			gpointer _tmp6_;
			gint64** _tmp7_;
			gint _tmp7__length1;
			gint _tmp8_;
			gint64* _tmp9_;
			_tmp4_ = _element_it;
			if (!vala_iterator_next (_tmp4_)) {
				break;
			}
			_tmp5_ = _element_it;
			_tmp6_ = vala_iterator_get (_tmp5_);
			element = (gint64*) _tmp6_;
			_tmp7_ = array;
			_tmp7__length1 = array_length1;
			_tmp8_ = index;
			index = _tmp8_ + 1;
			_tmp9_ = element;
			element = NULL;
			_g_free0 (_tmp7_[_tmp8_]);
			_tmp7_[_tmp8_] = _tmp9_;
			_g_free0 (element);
		}
		_vala_iterator_unref0 (_element_it);
	}
	_tmp10_ = array;
	_tmp10__length1 = array_length1;
	if (result_length1) {
		*result_length1 = _tmp10__length1;
	}
	result = _tmp10_;
	return result;
}

static guint64**
vala_collection_to_uint64_array (ValaCollection* coll,
                                 gint* result_length1)
{
	guint64** array = NULL;
	gint _tmp0_;
	gint _tmp1_;
	guint64** _tmp2_;
	gint array_length1;
	gint _array_size_;
	gint index = 0;
	guint64** _tmp10_;
	gint _tmp10__length1;
	guint64** result = NULL;
	g_return_val_if_fail (coll != NULL, NULL);
	_tmp0_ = vala_collection_get_size (coll);
	_tmp1_ = _tmp0_;
	_tmp2_ = g_new0 (guint64*, _tmp1_);
	array = _tmp2_;
	array_length1 = _tmp1_;
	_array_size_ = array_length1;
	index = 0;
	{
		ValaIterator* _element_it = NULL;
		ValaIterator* _tmp3_;
		_tmp3_ = vala_iterable_iterator ((ValaIterable*) coll);
		_element_it = _tmp3_;
		while (TRUE) {
			ValaIterator* _tmp4_;
			guint64* element = NULL;
			ValaIterator* _tmp5_;
			gpointer _tmp6_;
			guint64** _tmp7_;
			gint _tmp7__length1;
			gint _tmp8_;
			guint64* _tmp9_;
			_tmp4_ = _element_it;
			if (!vala_iterator_next (_tmp4_)) {
				break;
			}
			_tmp5_ = _element_it;
			_tmp6_ = vala_iterator_get (_tmp5_);
			element = (guint64*) _tmp6_;
			_tmp7_ = array;
			_tmp7__length1 = array_length1;
			_tmp8_ = index;
			index = _tmp8_ + 1;
			_tmp9_ = element;
			element = NULL;
			_g_free0 (_tmp7_[_tmp8_]);
			_tmp7_[_tmp8_] = _tmp9_;
			_g_free0 (element);
		}
		_vala_iterator_unref0 (_element_it);
	}
	_tmp10_ = array;
	_tmp10__length1 = array_length1;
	if (result_length1) {
		*result_length1 = _tmp10__length1;
	}
	result = _tmp10_;
	return result;
}

static glong*
vala_collection_to_long_array (ValaCollection* coll,
                               gint* result_length1)
{
	glong* array = NULL;
	gint _tmp0_;
	gint _tmp1_;
	glong* _tmp2_;
	gint array_length1;
	gint _array_size_;
	gint index = 0;
	glong* _tmp10_;
	gint _tmp10__length1;
	glong* result = NULL;
	g_return_val_if_fail (coll != NULL, NULL);
	_tmp0_ = vala_collection_get_size (coll);
	_tmp1_ = _tmp0_;
	_tmp2_ = g_new0 (glong, _tmp1_);
	array = _tmp2_;
	array_length1 = _tmp1_;
	_array_size_ = array_length1;
	index = 0;
	{
		ValaIterator* _element_it = NULL;
		ValaIterator* _tmp3_;
		_tmp3_ = vala_iterable_iterator ((ValaIterable*) coll);
		_element_it = _tmp3_;
		while (TRUE) {
			ValaIterator* _tmp4_;
			glong element = 0L;
			ValaIterator* _tmp5_;
			gpointer _tmp6_;
			glong* _tmp7_;
			gint _tmp7__length1;
			gint _tmp8_;
			glong _tmp9_;
			_tmp4_ = _element_it;
			if (!vala_iterator_next (_tmp4_)) {
				break;
			}
			_tmp5_ = _element_it;
			_tmp6_ = vala_iterator_get (_tmp5_);
			element = (glong) ((gintptr) _tmp6_);
			_tmp7_ = array;
			_tmp7__length1 = array_length1;
			_tmp8_ = index;
			index = _tmp8_ + 1;
			_tmp9_ = element;
			_tmp7_[_tmp8_] = _tmp9_;
		}
		_vala_iterator_unref0 (_element_it);
	}
	_tmp10_ = array;
	_tmp10__length1 = array_length1;
	if (result_length1) {
		*result_length1 = _tmp10__length1;
	}
	result = _tmp10_;
	return result;
}

static gulong*
vala_collection_to_ulong_array (ValaCollection* coll,
                                gint* result_length1)
{
	gulong* array = NULL;
	gint _tmp0_;
	gint _tmp1_;
	gulong* _tmp2_;
	gint array_length1;
	gint _array_size_;
	gint index = 0;
	gulong* _tmp10_;
	gint _tmp10__length1;
	gulong* result = NULL;
	g_return_val_if_fail (coll != NULL, NULL);
	_tmp0_ = vala_collection_get_size (coll);
	_tmp1_ = _tmp0_;
	_tmp2_ = g_new0 (gulong, _tmp1_);
	array = _tmp2_;
	array_length1 = _tmp1_;
	_array_size_ = array_length1;
	index = 0;
	{
		ValaIterator* _element_it = NULL;
		ValaIterator* _tmp3_;
		_tmp3_ = vala_iterable_iterator ((ValaIterable*) coll);
		_element_it = _tmp3_;
		while (TRUE) {
			ValaIterator* _tmp4_;
			gulong element = 0UL;
			ValaIterator* _tmp5_;
			gpointer _tmp6_;
			gulong* _tmp7_;
			gint _tmp7__length1;
			gint _tmp8_;
			gulong _tmp9_;
			_tmp4_ = _element_it;
			if (!vala_iterator_next (_tmp4_)) {
				break;
			}
			_tmp5_ = _element_it;
			_tmp6_ = vala_iterator_get (_tmp5_);
			element = (gulong) ((guintptr) _tmp6_);
			_tmp7_ = array;
			_tmp7__length1 = array_length1;
			_tmp8_ = index;
			index = _tmp8_ + 1;
			_tmp9_ = element;
			_tmp7_[_tmp8_] = _tmp9_;
		}
		_vala_iterator_unref0 (_element_it);
	}
	_tmp10_ = array;
	_tmp10__length1 = array_length1;
	if (result_length1) {
		*result_length1 = _tmp10__length1;
	}
	result = _tmp10_;
	return result;
}

static gfloat**
vala_collection_to_float_array (ValaCollection* coll,
                                gint* result_length1)
{
	gfloat** array = NULL;
	gint _tmp0_;
	gint _tmp1_;
	gfloat** _tmp2_;
	gint array_length1;
	gint _array_size_;
	gint index = 0;
	gfloat** _tmp10_;
	gint _tmp10__length1;
	gfloat** result = NULL;
	g_return_val_if_fail (coll != NULL, NULL);
	_tmp0_ = vala_collection_get_size (coll);
	_tmp1_ = _tmp0_;
	_tmp2_ = g_new0 (gfloat*, _tmp1_);
	array = _tmp2_;
	array_length1 = _tmp1_;
	_array_size_ = array_length1;
	index = 0;
	{
		ValaIterator* _element_it = NULL;
		ValaIterator* _tmp3_;
		_tmp3_ = vala_iterable_iterator ((ValaIterable*) coll);
		_element_it = _tmp3_;
		while (TRUE) {
			ValaIterator* _tmp4_;
			gfloat* element = NULL;
			ValaIterator* _tmp5_;
			gpointer _tmp6_;
			gfloat** _tmp7_;
			gint _tmp7__length1;
			gint _tmp8_;
			gfloat* _tmp9_;
			_tmp4_ = _element_it;
			if (!vala_iterator_next (_tmp4_)) {
				break;
			}
			_tmp5_ = _element_it;
			_tmp6_ = vala_iterator_get (_tmp5_);
			element = (gfloat*) _tmp6_;
			_tmp7_ = array;
			_tmp7__length1 = array_length1;
			_tmp8_ = index;
			index = _tmp8_ + 1;
			_tmp9_ = element;
			element = NULL;
			_g_free0 (_tmp7_[_tmp8_]);
			_tmp7_[_tmp8_] = _tmp9_;
			_g_free0 (element);
		}
		_vala_iterator_unref0 (_element_it);
	}
	_tmp10_ = array;
	_tmp10__length1 = array_length1;
	if (result_length1) {
		*result_length1 = _tmp10__length1;
	}
	result = _tmp10_;
	return result;
}

static gdouble**
vala_collection_to_double_array (ValaCollection* coll,
                                 gint* result_length1)
{
	gdouble** array = NULL;
	gint _tmp0_;
	gint _tmp1_;
	gdouble** _tmp2_;
	gint array_length1;
	gint _array_size_;
	gint index = 0;
	gdouble** _tmp10_;
	gint _tmp10__length1;
	gdouble** result = NULL;
	g_return_val_if_fail (coll != NULL, NULL);
	_tmp0_ = vala_collection_get_size (coll);
	_tmp1_ = _tmp0_;
	_tmp2_ = g_new0 (gdouble*, _tmp1_);
	array = _tmp2_;
	array_length1 = _tmp1_;
	_array_size_ = array_length1;
	index = 0;
	{
		ValaIterator* _element_it = NULL;
		ValaIterator* _tmp3_;
		_tmp3_ = vala_iterable_iterator ((ValaIterable*) coll);
		_element_it = _tmp3_;
		while (TRUE) {
			ValaIterator* _tmp4_;
			gdouble* element = NULL;
			ValaIterator* _tmp5_;
			gpointer _tmp6_;
			gdouble** _tmp7_;
			gint _tmp7__length1;
			gint _tmp8_;
			gdouble* _tmp9_;
			_tmp4_ = _element_it;
			if (!vala_iterator_next (_tmp4_)) {
				break;
			}
			_tmp5_ = _element_it;
			_tmp6_ = vala_iterator_get (_tmp5_);
			element = (gdouble*) _tmp6_;
			_tmp7_ = array;
			_tmp7__length1 = array_length1;
			_tmp8_ = index;
			index = _tmp8_ + 1;
			_tmp9_ = element;
			element = NULL;
			_g_free0 (_tmp7_[_tmp8_]);
			_tmp7_[_tmp8_] = _tmp9_;
			_g_free0 (element);
		}
		_vala_iterator_unref0 (_element_it);
	}
	_tmp10_ = array;
	_tmp10__length1 = array_length1;
	if (result_length1) {
		*result_length1 = _tmp10__length1;
	}
	result = _tmp10_;
	return result;
}

ValaCollection*
vala_collection_construct (GType object_type,
                           GType g_type,
                           GBoxedCopyFunc g_dup_func,
                           GDestroyNotify g_destroy_func)
{
	ValaCollection* self = NULL;
	self = (ValaCollection*) vala_iterable_construct (object_type, g_type, (GBoxedCopyFunc) g_dup_func, (GDestroyNotify) g_destroy_func);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	return self;
}

static void
vala_collection_class_init (ValaCollectionClass * klass,
                            gpointer klass_data)
{
	vala_collection_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValaCollection_private_offset);
	((ValaCollectionClass *) klass)->contains = (gboolean (*) (ValaCollection*, gconstpointer)) vala_collection_real_contains;
	((ValaCollectionClass *) klass)->add = (gboolean (*) (ValaCollection*, gconstpointer)) vala_collection_real_add;
	((ValaCollectionClass *) klass)->remove = (gboolean (*) (ValaCollection*, gconstpointer)) vala_collection_real_remove;
	((ValaCollectionClass *) klass)->clear = (void (*) (ValaCollection*)) vala_collection_real_clear;
	((ValaCollectionClass *) klass)->add_all = (gboolean (*) (ValaCollection*, ValaCollection*)) vala_collection_real_add_all;
	((ValaCollectionClass *) klass)->to_array = (gpointer* (*) (ValaCollection*, gint*)) vala_collection_real_to_array;
	VALA_COLLECTION_CLASS (klass)->get_is_empty = vala_collection_real_get_is_empty;
}

static void
vala_collection_instance_init (ValaCollection * self,
                               gpointer klass)
{
	self->priv = vala_collection_get_instance_private (self);
}

/**
 * Serves as the base interface for implementing collection classes. Defines
 * size, iteration, and modification methods.
 */
static GType
vala_collection_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaCollectionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_collection_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCollection), 0, (GInstanceInitFunc) vala_collection_instance_init, NULL };
	GType vala_collection_type_id;
	vala_collection_type_id = g_type_register_static (VALA_TYPE_ITERABLE, "ValaCollection", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	ValaCollection_private_offset = g_type_add_instance_private (vala_collection_type_id, sizeof (ValaCollectionPrivate));
	return vala_collection_type_id;
}

GType
vala_collection_get_type (void)
{
	static volatile gsize vala_collection_type_id__volatile = 0;
	if (g_once_init_enter (&vala_collection_type_id__volatile)) {
		GType vala_collection_type_id;
		vala_collection_type_id = vala_collection_get_type_once ();
		g_once_init_leave (&vala_collection_type_id__volatile, vala_collection_type_id);
	}
	return vala_collection_type_id__volatile;
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

