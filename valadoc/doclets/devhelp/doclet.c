/* doclet.c generated by valac, the Vala compiler
 * generated from doclet.vala, do not modify */

/* doclet.vala
 *
 * Copyright (C) 2008-2012 Florian Brosch
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Florian Brosch <flo.brosch@gmail.com>
 */

#include <valadoc.h>
#include <glib-object.h>
#include <valagee.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <glib/gstdio.h>
#include <config.h>
#include <stdio.h>

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define VALADOC_DEVHELP_TYPE_DOCLET (valadoc_devhelp_doclet_get_type ())
#define VALADOC_DEVHELP_DOCLET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALADOC_DEVHELP_TYPE_DOCLET, ValadocDevhelpDoclet))
#define VALADOC_DEVHELP_DOCLET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALADOC_DEVHELP_TYPE_DOCLET, ValadocDevhelpDocletClass))
#define VALADOC_DEVHELP_IS_DOCLET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALADOC_DEVHELP_TYPE_DOCLET))
#define VALADOC_DEVHELP_IS_DOCLET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALADOC_DEVHELP_TYPE_DOCLET))
#define VALADOC_DEVHELP_DOCLET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALADOC_DEVHELP_TYPE_DOCLET, ValadocDevhelpDocletClass))

typedef struct _ValadocDevhelpDoclet ValadocDevhelpDoclet;
typedef struct _ValadocDevhelpDocletClass ValadocDevhelpDocletClass;
typedef struct _ValadocDevhelpDocletPrivate ValadocDevhelpDocletPrivate;
enum  {
	VALADOC_DEVHELP_DOCLET_0_PROPERTY,
	VALADOC_DEVHELP_DOCLET_NUM_PROPERTIES
};
static GParamSpec* valadoc_devhelp_doclet_properties[VALADOC_DEVHELP_DOCLET_NUM_PROPERTIES];
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _valadoc_markup_writer_unref0(var) ((var == NULL) ? NULL : (var = (valadoc_markup_writer_unref (var), NULL)))
#define _fclose0(var) ((var == NULL) ? NULL : (var = (fclose (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ValadocDevhelpDoclet {
	ValadocHtmlBasicDoclet parent_instance;
	ValadocDevhelpDocletPrivate * priv;
};

struct _ValadocDevhelpDocletClass {
	ValadocHtmlBasicDocletClass parent_class;
};

struct _ValadocDevhelpDocletPrivate {
	ValaArrayList* nodes;
	gchar* package_dir_name;
	ValadocDevhelpMarkupWriter* _devhelpwriter;
};

static gint ValadocDevhelpDoclet_private_offset;
static gpointer valadoc_devhelp_doclet_parent_class = NULL;

VALA_EXTERN GType valadoc_devhelp_doclet_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValadocDevhelpDoclet, g_object_unref)
#define VALADOC_DEVHELP_DOCLET_css_path_wiki "devhelpstyle.css"
#define VALADOC_DEVHELP_DOCLET_css_path "devhelpstyle.css"
#define VALADOC_DEVHELP_DOCLET_js_path_wiki "scripts.js"
#define VALADOC_DEVHELP_DOCLET_js_path "scripts.js"
static gchar* valadoc_devhelp_doclet_get_path (ValadocDevhelpDoclet* self,
                                        ValadocApiNode* element);
static gchar* valadoc_devhelp_doclet_get_real_path (ValadocDevhelpDoclet* self,
                                             ValadocApiNode* element);
static gchar* valadoc_devhelp_doclet_real_get_icon_directory (ValadocHtmlBasicDoclet* base);
static void valadoc_devhelp_doclet_real_process (ValadocHtmlBasicDoclet* base,
                                          ValadocSettings* settings,
                                          ValadocApiTree* tree,
                                          ValadocErrorReporter* reporter);
static void valadoc_devhelp_doclet_real_visit_tree (ValadocApiVisitor* base,
                                             ValadocApiTree* tree);
static void valadoc_devhelp_doclet_real_visit_package (ValadocApiVisitor* base,
                                                ValadocApiPackage* package);
static void valadoc_devhelp_doclet_process_compound_node (ValadocDevhelpDoclet* self,
                                                   ValadocApiNode* node);
static void valadoc_devhelp_doclet_process_node (ValadocDevhelpDoclet* self,
                                          ValadocApiNode* node,
                                          gboolean accept_all_children);
static void valadoc_devhelp_doclet_real_visit_namespace (ValadocApiVisitor* base,
                                                  ValadocApiNamespace* item);
static void valadoc_devhelp_doclet_real_visit_interface (ValadocApiVisitor* base,
                                                  ValadocApiInterface* item);
static void valadoc_devhelp_doclet_real_visit_class (ValadocApiVisitor* base,
                                              ValadocApiClass* item);
static void valadoc_devhelp_doclet_real_visit_struct (ValadocApiVisitor* base,
                                               ValadocApiStruct* item);
static void valadoc_devhelp_doclet_real_visit_error_domain (ValadocApiVisitor* base,
                                                     ValadocApiErrorDomain* item);
static void valadoc_devhelp_doclet_real_visit_enum (ValadocApiVisitor* base,
                                             ValadocApiEnum* item);
static void valadoc_devhelp_doclet_real_visit_property (ValadocApiVisitor* base,
                                                 ValadocApiProperty* item);
static void valadoc_devhelp_doclet_real_visit_constant (ValadocApiVisitor* base,
                                                 ValadocApiConstant* item);
static void valadoc_devhelp_doclet_real_visit_field (ValadocApiVisitor* base,
                                              ValadocApiField* item);
static void valadoc_devhelp_doclet_real_visit_error_code (ValadocApiVisitor* base,
                                                   ValadocApiErrorCode* item);
static void valadoc_devhelp_doclet_real_visit_enum_value (ValadocApiVisitor* base,
                                                   ValadocApiEnumValue* item);
static void valadoc_devhelp_doclet_real_visit_delegate (ValadocApiVisitor* base,
                                                 ValadocApiDelegate* item);
static void valadoc_devhelp_doclet_real_visit_signal (ValadocApiVisitor* base,
                                               ValadocApiSignal* item);
static void valadoc_devhelp_doclet_real_visit_method (ValadocApiVisitor* base,
                                               ValadocApiMethod* item);
VALA_EXTERN ValadocDevhelpDoclet* valadoc_devhelp_doclet_new (void);
VALA_EXTERN ValadocDevhelpDoclet* valadoc_devhelp_doclet_construct (GType object_type);
static void valadoc_devhelp_doclet_finalize (GObject * obj);
static GType valadoc_devhelp_doclet_get_type_once (void);
VALA_EXTERN GType register_plugin (ValadocModuleLoader* module_loader);
static void _vala_array_destroy (gpointer array,
                          gssize array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gssize array_length,
                       GDestroyNotify destroy_func);

static inline gpointer
valadoc_devhelp_doclet_get_instance_private (ValadocDevhelpDoclet* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocDevhelpDoclet_private_offset);
}

static gchar*
valadoc_devhelp_doclet_get_path (ValadocDevhelpDoclet* self,
                                 ValadocApiNode* element)
{
	gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (element != NULL, NULL);
	_tmp0_ = valadoc_api_node_get_full_name (element);
	_tmp1_ = _tmp0_;
	_tmp2_ = g_strconcat (_tmp1_, ".html", NULL);
	_tmp3_ = _tmp2_;
	_g_free0 (_tmp1_);
	result = _tmp3_;
	return result;
}

static gchar*
valadoc_devhelp_doclet_get_real_path (ValadocDevhelpDoclet* self,
                                      ValadocApiNode* element)
{
	ValadocSettings* _tmp0_;
	ValadocSettings* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (element != NULL, NULL);
	_tmp0_ = valadoc_html_basic_doclet_get_settings ((ValadocHtmlBasicDoclet*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = _tmp1_->path;
	_tmp3_ = self->priv->package_dir_name;
	_tmp4_ = valadoc_api_node_get_full_name (element);
	_tmp5_ = _tmp4_;
	_tmp6_ = g_strconcat (_tmp5_, ".html", NULL);
	_tmp7_ = _tmp6_;
	_tmp8_ = g_build_filename (_tmp2_, _tmp3_, _tmp7_, NULL);
	_tmp9_ = _tmp8_;
	_g_free0 (_tmp7_);
	_g_free0 (_tmp5_);
	result = _tmp9_;
	return result;
}

static gchar*
valadoc_devhelp_doclet_real_get_icon_directory (ValadocHtmlBasicDoclet* base)
{
	ValadocDevhelpDoclet * self;
	gchar* _tmp0_;
	gchar* result = NULL;
	self = (ValadocDevhelpDoclet*) base;
	_tmp0_ = g_strdup ("");
	result = _tmp0_;
	return result;
}

static void
valadoc_devhelp_doclet_real_process (ValadocHtmlBasicDoclet* base,
                                     ValadocSettings* settings,
                                     ValadocApiTree* tree,
                                     ValadocErrorReporter* reporter)
{
	ValadocDevhelpDoclet * self;
	ValadocSettings* _tmp0_;
	ValadocSettings* _tmp1_;
	const gchar* _tmp2_;
	ValadocSettings* _tmp3_;
	ValadocSettings* _tmp4_;
	const gchar* _tmp5_;
	ValadocSettings* _tmp6_;
	ValadocSettings* _tmp7_;
	const gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (settings != NULL);
	g_return_if_fail (tree != NULL);
	g_return_if_fail (reporter != NULL);
	VALADOC_HTML_BASIC_DOCLET_CLASS (valadoc_devhelp_doclet_parent_class)->process (G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_HTML_TYPE_BASIC_DOCLET, ValadocHtmlBasicDoclet), settings, tree, reporter);
	_tmp0_ = valadoc_html_basic_doclet_get_settings ((ValadocHtmlBasicDoclet*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = _tmp1_->path;
	g_mkdir_with_parents (_tmp2_, 0777);
	_tmp3_ = valadoc_html_basic_doclet_get_settings ((ValadocHtmlBasicDoclet*) self);
	_tmp4_ = _tmp3_;
	_tmp5_ = _tmp4_->path;
	_tmp6_ = valadoc_html_basic_doclet_get_settings ((ValadocHtmlBasicDoclet*) self);
	_tmp7_ = _tmp6_;
	_tmp8_ = _tmp7_->pkg_name;
	_tmp9_ = g_build_filename (_tmp5_, _tmp8_, NULL);
	_tmp10_ = _tmp9_;
	valadoc_html_basic_doclet_write_wiki_pages ((ValadocHtmlBasicDoclet*) self, tree, VALADOC_DEVHELP_DOCLET_css_path_wiki, VALADOC_DEVHELP_DOCLET_js_path_wiki, _tmp10_);
	_g_free0 (_tmp10_);
	valadoc_api_tree_accept (tree, (ValadocApiVisitor*) self);
}

static void
valadoc_devhelp_doclet_real_visit_tree (ValadocApiVisitor* base,
                                        ValadocApiTree* tree)
{
	ValadocDevhelpDoclet * self;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (tree != NULL);
	valadoc_api_tree_accept_children (tree, (ValadocApiVisitor*) self);
}

static void
valadoc_devhelp_doclet_real_visit_package (ValadocApiVisitor* base,
                                           ValadocApiPackage* package)
{
	ValadocDevhelpDoclet * self;
	ValadocSettings* _tmp0_;
	ValadocSettings* _tmp1_;
	gchar* pkg_name = NULL;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* path = NULL;
	ValadocSettings* _tmp5_;
	ValadocSettings* _tmp6_;
	const gchar* _tmp7_;
	const gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* filepath = NULL;
	const gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* imgpath = NULL;
	const gchar* _tmp12_;
	gchar* _tmp13_;
	gchar* devpath = NULL;
	const gchar* _tmp14_;
	const gchar* _tmp15_;
	gchar* _tmp16_;
	gchar* _tmp17_;
	gchar* _tmp18_;
	gchar* _tmp19_;
	const gchar* _tmp20_;
	gchar* _tmp21_;
	gint rt = 0;
	const gchar* _tmp22_;
	const gchar* _tmp23_;
	const gchar* _tmp24_;
	FILE* devfile = NULL;
	const gchar* _tmp28_;
	FILE* _tmp29_;
	FILE* _tmp30_;
	ValadocDevhelpMarkupWriter* _tmp31_;
	ValadocDevhelpMarkupWriter* _tmp32_;
	const gchar* _tmp33_;
	gchar* _tmp34_;
	gchar* _tmp35_;
	const gchar* _tmp36_;
	FILE* file = NULL;
	const gchar* _tmp37_;
	FILE* _tmp38_;
	FILE* _tmp39_;
	ValadocHtmlMarkupWriter* _tmp40_;
	ValadocHtmlHtmlRenderer* _tmp41_;
	ValadocHtmlMarkupWriter* _tmp42_;
	const gchar* _tmp43_;
	ValadocDevhelpMarkupWriter* _tmp44_;
	ValadocDevhelpMarkupWriter* _tmp45_;
	ValadocDevhelpMarkupWriter* _tmp46_;
	ValadocDevhelpMarkupWriter* _tmp85_;
	ValadocDevhelpMarkupWriter* _tmp86_;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (package != NULL);
	_tmp0_ = valadoc_html_basic_doclet_get_settings ((ValadocHtmlBasicDoclet*) self);
	_tmp1_ = _tmp0_;
	if (!valadoc_api_node_is_browsable ((ValadocApiNode*) package, _tmp1_)) {
		return;
	}
	_tmp2_ = valadoc_api_node_get_name ((ValadocApiNode*) package);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strdup (_tmp3_);
	pkg_name = _tmp4_;
	_tmp5_ = valadoc_html_basic_doclet_get_settings ((ValadocHtmlBasicDoclet*) self);
	_tmp6_ = _tmp5_;
	_tmp7_ = _tmp6_->path;
	_tmp8_ = pkg_name;
	_tmp9_ = g_build_filename (_tmp7_, _tmp8_, NULL);
	path = _tmp9_;
	_tmp10_ = path;
	_tmp11_ = g_build_filename (_tmp10_, "index.htm", NULL);
	filepath = _tmp11_;
	_tmp12_ = path;
	_tmp13_ = g_build_filename (_tmp12_, "img", NULL);
	imgpath = _tmp13_;
	_tmp14_ = path;
	_tmp15_ = pkg_name;
	_tmp16_ = g_strconcat (_tmp15_, ".devhelp2", NULL);
	_tmp17_ = _tmp16_;
	_tmp18_ = g_build_filename (_tmp14_, _tmp17_, NULL);
	_tmp19_ = _tmp18_;
	_g_free0 (_tmp17_);
	devpath = _tmp19_;
	_tmp20_ = pkg_name;
	_tmp21_ = g_strdup (_tmp20_);
	_g_free0 (self->priv->package_dir_name);
	self->priv->package_dir_name = _tmp21_;
	_tmp22_ = path;
	rt = g_mkdir (_tmp22_, 0777);
	_tmp23_ = imgpath;
	rt = g_mkdir (_tmp23_, 0777);
	_tmp24_ = path;
	if (!valadoc_copy_directory (PACKAGE_VALADOC_ICONDIR, _tmp24_)) {
		ValadocErrorReporter* _tmp25_;
		gchar* _tmp26_;
		gchar* _tmp27_;
		_tmp25_ = ((ValadocHtmlBasicDoclet*) self)->reporter;
		_tmp26_ = g_strdup_printf ("Couldn't copy resources from `%s'", PACKAGE_VALADOC_ICONDIR);
		_tmp27_ = _tmp26_;
		valadoc_error_reporter_simple_warning (_tmp25_, "Devhelp", "%s", _tmp27_);
		_g_free0 (_tmp27_);
	}
	_tmp28_ = devpath;
	_tmp29_ = g_fopen (_tmp28_, "w");
	devfile = _tmp29_;
	_tmp30_ = devfile;
	_tmp31_ = valadoc_devhelp_markup_writer_new (_tmp30_, TRUE);
	_valadoc_markup_writer_unref0 (self->priv->_devhelpwriter);
	self->priv->_devhelpwriter = _tmp31_;
	_tmp32_ = self->priv->_devhelpwriter;
	_tmp33_ = pkg_name;
	_tmp34_ = g_strconcat (_tmp33_, " Reference Manual", NULL);
	_tmp35_ = _tmp34_;
	_tmp36_ = pkg_name;
	valadoc_devhelp_markup_writer_start_book (_tmp32_, _tmp35_, "vala", "index.htm", _tmp36_, "", "");
	_g_free0 (_tmp35_);
	_tmp37_ = filepath;
	_tmp38_ = g_fopen (_tmp37_, "w");
	file = _tmp38_;
	_tmp39_ = file;
	_tmp40_ = valadoc_html_markup_writer_new (_tmp39_, TRUE);
	_valadoc_markup_writer_unref0 (((ValadocHtmlBasicDoclet*) self)->writer);
	((ValadocHtmlBasicDoclet*) self)->writer = _tmp40_;
	_tmp41_ = ((ValadocHtmlBasicDoclet*) self)->_renderer;
	_tmp42_ = ((ValadocHtmlBasicDoclet*) self)->writer;
	valadoc_html_html_renderer_set_writer (_tmp41_, _tmp42_);
	_tmp43_ = pkg_name;
	valadoc_html_basic_doclet_write_file_header ((ValadocHtmlBasicDoclet*) self, VALADOC_DEVHELP_DOCLET_css_path, VALADOC_DEVHELP_DOCLET_js_path, _tmp43_);
	valadoc_html_basic_doclet_write_package_content ((ValadocHtmlBasicDoclet*) self, package, (ValadocApiNode*) package);
	valadoc_html_basic_doclet_write_file_footer ((ValadocHtmlBasicDoclet*) self);
	_fclose0 (file);
	file = NULL;
	_tmp44_ = self->priv->_devhelpwriter;
	valadoc_devhelp_markup_writer_start_chapters (_tmp44_);
	valadoc_api_node_accept_all_children ((ValadocApiNode*) package, (ValadocApiVisitor*) self, TRUE);
	_tmp45_ = self->priv->_devhelpwriter;
	valadoc_devhelp_markup_writer_end_chapters (_tmp45_);
	_tmp46_ = self->priv->_devhelpwriter;
	valadoc_devhelp_markup_writer_start_functions (_tmp46_);
	{
		ValaArrayList* _node_list = NULL;
		ValaArrayList* _tmp47_;
		gint _node_size = 0;
		ValaArrayList* _tmp48_;
		gint _tmp49_;
		gint _tmp50_;
		gint _node_index = 0;
		_tmp47_ = self->priv->nodes;
		_node_list = _tmp47_;
		_tmp48_ = _node_list;
		_tmp49_ = vala_collection_get_size ((ValaCollection*) _tmp48_);
		_tmp50_ = _tmp49_;
		_node_size = _tmp50_;
		_node_index = -1;
		while (TRUE) {
			gint _tmp51_;
			gint _tmp52_;
			ValadocApiNode* node = NULL;
			ValaArrayList* _tmp53_;
			gpointer _tmp54_;
			gchar* typekeyword = NULL;
			gchar* _tmp55_;
			ValadocApiNode* _tmp56_;
			ValadocDevhelpMarkupWriter* _tmp70_;
			gchar* _tmp71_;
			const gchar* _tmp72_;
			gchar* _tmp73_;
			gchar* _tmp74_;
			ValadocApiNode* _tmp75_;
			gchar* _tmp76_;
			gchar* _tmp77_;
			ValadocApiNode* _tmp78_;
			ValadocApiNode* _tmp79_;
			ValadocApiPackage* _tmp80_;
			ValadocApiPackage* _tmp81_;
			gchar* _tmp82_;
			gchar** _tmp83_;
			gchar** _tmp84_;
			gint _tmp84__length1;
			_node_index = _node_index + 1;
			_tmp51_ = _node_index;
			_tmp52_ = _node_size;
			if (!(_tmp51_ < _tmp52_)) {
				break;
			}
			_tmp53_ = _node_list;
			_tmp54_ = vala_list_get ((ValaList*) _tmp53_, _node_index);
			node = (ValadocApiNode*) _tmp54_;
			_tmp55_ = g_strdup ("");
			typekeyword = _tmp55_;
			_tmp56_ = node;
			if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp56_, VALADOC_API_TYPE_ENUM)) {
				gchar* _tmp57_;
				_tmp57_ = g_strdup ("enum");
				_g_free0 (typekeyword);
				typekeyword = _tmp57_;
			} else {
				ValadocApiNode* _tmp58_;
				_tmp58_ = node;
				if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp58_, VALADOC_API_TYPE_CONSTANT)) {
					gchar* _tmp59_;
					_tmp59_ = g_strdup ("constant");
					_g_free0 (typekeyword);
					typekeyword = _tmp59_;
				} else {
					ValadocApiNode* _tmp60_;
					_tmp60_ = node;
					if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp60_, VALADOC_API_TYPE_METHOD)) {
						gchar* _tmp61_;
						_tmp61_ = g_strdup ("function");
						_g_free0 (typekeyword);
						typekeyword = _tmp61_;
					} else {
						ValadocApiNode* _tmp62_;
						_tmp62_ = node;
						if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp62_, VALADOC_API_TYPE_FIELD)) {
							gchar* _tmp63_;
							_tmp63_ = g_strdup ("variable");
							_g_free0 (typekeyword);
							typekeyword = _tmp63_;
						} else {
							ValadocApiNode* _tmp64_;
							_tmp64_ = node;
							if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp64_, VALADOC_API_TYPE_PROPERTY)) {
								gchar* _tmp65_;
								_tmp65_ = g_strdup ("property");
								_g_free0 (typekeyword);
								typekeyword = _tmp65_;
							} else {
								ValadocApiNode* _tmp66_;
								_tmp66_ = node;
								if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp66_, VALADOC_API_TYPE_SIGNAL)) {
									gchar* _tmp67_;
									_tmp67_ = g_strdup ("signal");
									_g_free0 (typekeyword);
									typekeyword = _tmp67_;
								} else {
									ValadocApiNode* _tmp68_;
									_tmp68_ = node;
									if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp68_, VALADOC_API_TYPE_STRUCT)) {
										gchar* _tmp69_;
										_tmp69_ = g_strdup ("struct");
										_g_free0 (typekeyword);
										typekeyword = _tmp69_;
									}
								}
							}
						}
					}
				}
			}
			_tmp70_ = self->priv->_devhelpwriter;
			_tmp71_ = g_strdup ("type");
			_tmp72_ = typekeyword;
			_tmp73_ = g_strdup (_tmp72_);
			_tmp74_ = g_strdup ("name");
			_tmp75_ = node;
			_tmp76_ = valadoc_api_node_get_full_name (_tmp75_);
			_tmp77_ = g_strdup ("link");
			_tmp78_ = node;
			_tmp79_ = node;
			_tmp80_ = valadoc_documentation_get_package ((ValadocDocumentation*) _tmp79_);
			_tmp81_ = _tmp80_;
			_tmp82_ = valadoc_html_basic_doclet_get_link ((ValadocHtmlBasicDoclet*) self, _tmp78_, (ValadocApiNode*) _tmp81_);
			_tmp83_ = g_new0 (gchar*, 6 + 1);
			_tmp83_[0] = _tmp71_;
			_tmp83_[1] = _tmp73_;
			_tmp83_[2] = _tmp74_;
			_tmp83_[3] = _tmp76_;
			_tmp83_[4] = _tmp77_;
			_tmp83_[5] = _tmp82_;
			_tmp84_ = _tmp83_;
			_tmp84__length1 = 6;
			valadoc_markup_writer_simple_tag ((ValadocMarkupWriter*) _tmp70_, "keyword", _tmp84_, (gint) 6);
			_tmp84_ = (_vala_array_free (_tmp84_, _tmp84__length1, (GDestroyNotify) g_free), NULL);
			_g_free0 (typekeyword);
			_g_object_unref0 (node);
		}
	}
	_tmp85_ = self->priv->_devhelpwriter;
	valadoc_devhelp_markup_writer_end_functions (_tmp85_);
	_tmp86_ = self->priv->_devhelpwriter;
	valadoc_devhelp_markup_writer_end_book (_tmp86_);
	_fclose0 (file);
	_fclose0 (devfile);
	_g_free0 (devpath);
	_g_free0 (imgpath);
	_g_free0 (filepath);
	_g_free0 (path);
	_g_free0 (pkg_name);
}

static void
valadoc_devhelp_doclet_process_compound_node (ValadocDevhelpDoclet* self,
                                              ValadocApiNode* node)
{
	gchar* rpath = NULL;
	gchar* _tmp0_;
	gchar* path = NULL;
	gchar* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp20_;
	const gchar* _tmp21_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (node != NULL);
	_tmp0_ = valadoc_devhelp_doclet_get_real_path (self, node);
	rpath = _tmp0_;
	_tmp1_ = valadoc_devhelp_doclet_get_path (self, node);
	path = _tmp1_;
	_tmp2_ = valadoc_api_node_get_name (node);
	_tmp3_ = _tmp2_;
	if (_tmp3_ != NULL) {
		FILE* file = NULL;
		const gchar* _tmp4_;
		FILE* _tmp5_;
		FILE* _tmp6_;
		ValadocHtmlMarkupWriter* _tmp7_;
		ValadocHtmlHtmlRenderer* _tmp8_;
		ValadocHtmlMarkupWriter* _tmp9_;
		gchar* _tmp10_;
		gchar* _tmp11_;
		gchar* _tmp12_;
		gchar* _tmp13_;
		ValadocApiPackage* _tmp14_;
		ValadocApiPackage* _tmp15_;
		const gchar* _tmp16_;
		const gchar* _tmp17_;
		gchar* _tmp18_;
		gchar* _tmp19_;
		_tmp4_ = rpath;
		_tmp5_ = g_fopen (_tmp4_, "w");
		file = _tmp5_;
		_tmp6_ = file;
		_tmp7_ = valadoc_html_markup_writer_new (_tmp6_, TRUE);
		_valadoc_markup_writer_unref0 (((ValadocHtmlBasicDoclet*) self)->writer);
		((ValadocHtmlBasicDoclet*) self)->writer = _tmp7_;
		_tmp8_ = ((ValadocHtmlBasicDoclet*) self)->_renderer;
		_tmp9_ = ((ValadocHtmlBasicDoclet*) self)->writer;
		valadoc_html_html_renderer_set_writer (_tmp8_, _tmp9_);
		_tmp10_ = valadoc_api_node_get_full_name (node);
		_tmp11_ = _tmp10_;
		_tmp12_ = g_strconcat (_tmp11_, " &ndash; ", NULL);
		_tmp13_ = _tmp12_;
		_tmp14_ = valadoc_documentation_get_package ((ValadocDocumentation*) node);
		_tmp15_ = _tmp14_;
		_tmp16_ = valadoc_api_node_get_name ((ValadocApiNode*) _tmp15_);
		_tmp17_ = _tmp16_;
		_tmp18_ = g_strconcat (_tmp13_, _tmp17_, NULL);
		_tmp19_ = _tmp18_;
		valadoc_html_basic_doclet_write_file_header ((ValadocHtmlBasicDoclet*) self, VALADOC_DEVHELP_DOCLET_css_path, VALADOC_DEVHELP_DOCLET_js_path, _tmp19_);
		_g_free0 (_tmp19_);
		_g_free0 (_tmp13_);
		_g_free0 (_tmp11_);
		valadoc_html_basic_doclet_write_symbol_content ((ValadocHtmlBasicDoclet*) self, node);
		valadoc_html_basic_doclet_write_file_footer ((ValadocHtmlBasicDoclet*) self);
		_fclose0 (file);
		file = NULL;
		_fclose0 (file);
	}
	_tmp20_ = valadoc_api_node_get_name (node);
	_tmp21_ = _tmp20_;
	if (_tmp21_ != NULL) {
		ValadocDevhelpMarkupWriter* _tmp22_;
		const gchar* _tmp23_;
		const gchar* _tmp24_;
		const gchar* _tmp25_;
		ValadocDevhelpMarkupWriter* _tmp26_;
		ValaArrayList* _tmp27_;
		_tmp22_ = self->priv->_devhelpwriter;
		_tmp23_ = valadoc_api_node_get_name (node);
		_tmp24_ = _tmp23_;
		_tmp25_ = path;
		valadoc_devhelp_markup_writer_start_sub (_tmp22_, _tmp24_, _tmp25_);
		valadoc_api_node_accept_all_children (node, (ValadocApiVisitor*) self, TRUE);
		_tmp26_ = self->priv->_devhelpwriter;
		valadoc_devhelp_markup_writer_end_sub (_tmp26_);
		_tmp27_ = self->priv->nodes;
		vala_collection_add ((ValaCollection*) _tmp27_, node);
	} else {
		valadoc_api_node_accept_all_children (node, (ValadocApiVisitor*) self, TRUE);
	}
	_g_free0 (path);
	_g_free0 (rpath);
}

static void
valadoc_devhelp_doclet_process_node (ValadocDevhelpDoclet* self,
                                     ValadocApiNode* node,
                                     gboolean accept_all_children)
{
	gchar* rpath = NULL;
	gchar* _tmp0_;
	gchar* path = NULL;
	gchar* _tmp1_;
	FILE* file = NULL;
	const gchar* _tmp2_;
	FILE* _tmp3_;
	FILE* _tmp4_;
	ValadocHtmlMarkupWriter* _tmp5_;
	ValadocHtmlHtmlRenderer* _tmp6_;
	ValadocHtmlMarkupWriter* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	ValadocApiPackage* _tmp12_;
	ValadocApiPackage* _tmp13_;
	const gchar* _tmp14_;
	const gchar* _tmp15_;
	gchar* _tmp16_;
	gchar* _tmp17_;
	ValaArrayList* _tmp23_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (node != NULL);
	_tmp0_ = valadoc_devhelp_doclet_get_real_path (self, node);
	rpath = _tmp0_;
	_tmp1_ = valadoc_devhelp_doclet_get_path (self, node);
	path = _tmp1_;
	_tmp2_ = rpath;
	_tmp3_ = g_fopen (_tmp2_, "w");
	file = _tmp3_;
	_tmp4_ = file;
	_tmp5_ = valadoc_html_markup_writer_new (_tmp4_, TRUE);
	_valadoc_markup_writer_unref0 (((ValadocHtmlBasicDoclet*) self)->writer);
	((ValadocHtmlBasicDoclet*) self)->writer = _tmp5_;
	_tmp6_ = ((ValadocHtmlBasicDoclet*) self)->_renderer;
	_tmp7_ = ((ValadocHtmlBasicDoclet*) self)->writer;
	valadoc_html_html_renderer_set_writer (_tmp6_, _tmp7_);
	_tmp8_ = valadoc_api_node_get_full_name (node);
	_tmp9_ = _tmp8_;
	_tmp10_ = g_strconcat (_tmp9_, " &ndash; ", NULL);
	_tmp11_ = _tmp10_;
	_tmp12_ = valadoc_documentation_get_package ((ValadocDocumentation*) node);
	_tmp13_ = _tmp12_;
	_tmp14_ = valadoc_api_node_get_name ((ValadocApiNode*) _tmp13_);
	_tmp15_ = _tmp14_;
	_tmp16_ = g_strconcat (_tmp11_, _tmp15_, NULL);
	_tmp17_ = _tmp16_;
	valadoc_html_basic_doclet_write_file_header ((ValadocHtmlBasicDoclet*) self, VALADOC_DEVHELP_DOCLET_css_path, VALADOC_DEVHELP_DOCLET_js_path, _tmp17_);
	_g_free0 (_tmp17_);
	_g_free0 (_tmp11_);
	_g_free0 (_tmp9_);
	valadoc_html_basic_doclet_write_symbol_content ((ValadocHtmlBasicDoclet*) self, node);
	valadoc_html_basic_doclet_write_file_footer ((ValadocHtmlBasicDoclet*) self);
	_fclose0 (file);
	file = NULL;
	if (accept_all_children) {
		ValadocDevhelpMarkupWriter* _tmp18_;
		const gchar* _tmp19_;
		const gchar* _tmp20_;
		const gchar* _tmp21_;
		ValadocDevhelpMarkupWriter* _tmp22_;
		_tmp18_ = self->priv->_devhelpwriter;
		_tmp19_ = valadoc_api_node_get_name (node);
		_tmp20_ = _tmp19_;
		_tmp21_ = path;
		valadoc_devhelp_markup_writer_start_sub (_tmp18_, _tmp20_, _tmp21_);
		valadoc_api_node_accept_all_children (node, (ValadocApiVisitor*) self, TRUE);
		_tmp22_ = self->priv->_devhelpwriter;
		valadoc_devhelp_markup_writer_end_sub (_tmp22_);
	}
	_tmp23_ = self->priv->nodes;
	vala_collection_add ((ValaCollection*) _tmp23_, node);
	_fclose0 (file);
	_g_free0 (path);
	_g_free0 (rpath);
}

static void
valadoc_devhelp_doclet_real_visit_namespace (ValadocApiVisitor* base,
                                             ValadocApiNamespace* item)
{
	ValadocDevhelpDoclet * self;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_devhelp_doclet_process_compound_node (self, (ValadocApiNode*) item);
}

static void
valadoc_devhelp_doclet_real_visit_interface (ValadocApiVisitor* base,
                                             ValadocApiInterface* item)
{
	ValadocDevhelpDoclet * self;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_devhelp_doclet_process_compound_node (self, (ValadocApiNode*) item);
}

static void
valadoc_devhelp_doclet_real_visit_class (ValadocApiVisitor* base,
                                         ValadocApiClass* item)
{
	ValadocDevhelpDoclet * self;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_devhelp_doclet_process_compound_node (self, (ValadocApiNode*) item);
}

static void
valadoc_devhelp_doclet_real_visit_struct (ValadocApiVisitor* base,
                                          ValadocApiStruct* item)
{
	ValadocDevhelpDoclet * self;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_devhelp_doclet_process_compound_node (self, (ValadocApiNode*) item);
}

static void
valadoc_devhelp_doclet_real_visit_error_domain (ValadocApiVisitor* base,
                                                ValadocApiErrorDomain* item)
{
	ValadocDevhelpDoclet * self;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_devhelp_doclet_process_node (self, (ValadocApiNode*) item, TRUE);
}

static void
valadoc_devhelp_doclet_real_visit_enum (ValadocApiVisitor* base,
                                        ValadocApiEnum* item)
{
	ValadocDevhelpDoclet * self;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_devhelp_doclet_process_node (self, (ValadocApiNode*) item, TRUE);
}

static void
valadoc_devhelp_doclet_real_visit_property (ValadocApiVisitor* base,
                                            ValadocApiProperty* item)
{
	ValadocDevhelpDoclet * self;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_devhelp_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}

static void
valadoc_devhelp_doclet_real_visit_constant (ValadocApiVisitor* base,
                                            ValadocApiConstant* item)
{
	ValadocDevhelpDoclet * self;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_devhelp_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}

static void
valadoc_devhelp_doclet_real_visit_field (ValadocApiVisitor* base,
                                         ValadocApiField* item)
{
	ValadocDevhelpDoclet * self;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_devhelp_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}

static void
valadoc_devhelp_doclet_real_visit_error_code (ValadocApiVisitor* base,
                                              ValadocApiErrorCode* item)
{
	ValadocDevhelpDoclet * self;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_devhelp_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}

static void
valadoc_devhelp_doclet_real_visit_enum_value (ValadocApiVisitor* base,
                                              ValadocApiEnumValue* item)
{
	ValadocDevhelpDoclet * self;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_devhelp_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}

static void
valadoc_devhelp_doclet_real_visit_delegate (ValadocApiVisitor* base,
                                            ValadocApiDelegate* item)
{
	ValadocDevhelpDoclet * self;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_devhelp_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}

static void
valadoc_devhelp_doclet_real_visit_signal (ValadocApiVisitor* base,
                                          ValadocApiSignal* item)
{
	ValadocDevhelpDoclet * self;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_devhelp_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}

static void
valadoc_devhelp_doclet_real_visit_method (ValadocApiVisitor* base,
                                          ValadocApiMethod* item)
{
	ValadocDevhelpDoclet * self;
	self = (ValadocDevhelpDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_devhelp_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}

ValadocDevhelpDoclet*
valadoc_devhelp_doclet_construct (GType object_type)
{
	ValadocDevhelpDoclet * self = NULL;
	self = (ValadocDevhelpDoclet*) valadoc_html_basic_doclet_construct (object_type);
	return self;
}

ValadocDevhelpDoclet*
valadoc_devhelp_doclet_new (void)
{
	return valadoc_devhelp_doclet_construct (VALADOC_DEVHELP_TYPE_DOCLET);
}

static void
valadoc_devhelp_doclet_class_init (ValadocDevhelpDocletClass * klass,
                                   gpointer klass_data)
{
	valadoc_devhelp_doclet_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocDevhelpDoclet_private_offset);
	((ValadocHtmlBasicDocletClass *) klass)->get_icon_directory = (gchar* (*) (ValadocHtmlBasicDoclet*)) valadoc_devhelp_doclet_real_get_icon_directory;
	((ValadocHtmlBasicDocletClass *) klass)->process = (void (*) (ValadocHtmlBasicDoclet*, ValadocSettings*, ValadocApiTree*, ValadocErrorReporter*)) valadoc_devhelp_doclet_real_process;
	((ValadocApiVisitorClass *) klass)->visit_tree = (void (*) (ValadocApiVisitor*, ValadocApiTree*)) valadoc_devhelp_doclet_real_visit_tree;
	((ValadocApiVisitorClass *) klass)->visit_package = (void (*) (ValadocApiVisitor*, ValadocApiPackage*)) valadoc_devhelp_doclet_real_visit_package;
	((ValadocApiVisitorClass *) klass)->visit_namespace = (void (*) (ValadocApiVisitor*, ValadocApiNamespace*)) valadoc_devhelp_doclet_real_visit_namespace;
	((ValadocApiVisitorClass *) klass)->visit_interface = (void (*) (ValadocApiVisitor*, ValadocApiInterface*)) valadoc_devhelp_doclet_real_visit_interface;
	((ValadocApiVisitorClass *) klass)->visit_class = (void (*) (ValadocApiVisitor*, ValadocApiClass*)) valadoc_devhelp_doclet_real_visit_class;
	((ValadocApiVisitorClass *) klass)->visit_struct = (void (*) (ValadocApiVisitor*, ValadocApiStruct*)) valadoc_devhelp_doclet_real_visit_struct;
	((ValadocApiVisitorClass *) klass)->visit_error_domain = (void (*) (ValadocApiVisitor*, ValadocApiErrorDomain*)) valadoc_devhelp_doclet_real_visit_error_domain;
	((ValadocApiVisitorClass *) klass)->visit_enum = (void (*) (ValadocApiVisitor*, ValadocApiEnum*)) valadoc_devhelp_doclet_real_visit_enum;
	((ValadocApiVisitorClass *) klass)->visit_property = (void (*) (ValadocApiVisitor*, ValadocApiProperty*)) valadoc_devhelp_doclet_real_visit_property;
	((ValadocApiVisitorClass *) klass)->visit_constant = (void (*) (ValadocApiVisitor*, ValadocApiConstant*)) valadoc_devhelp_doclet_real_visit_constant;
	((ValadocApiVisitorClass *) klass)->visit_field = (void (*) (ValadocApiVisitor*, ValadocApiField*)) valadoc_devhelp_doclet_real_visit_field;
	((ValadocApiVisitorClass *) klass)->visit_error_code = (void (*) (ValadocApiVisitor*, ValadocApiErrorCode*)) valadoc_devhelp_doclet_real_visit_error_code;
	((ValadocApiVisitorClass *) klass)->visit_enum_value = (void (*) (ValadocApiVisitor*, ValadocApiEnumValue*)) valadoc_devhelp_doclet_real_visit_enum_value;
	((ValadocApiVisitorClass *) klass)->visit_delegate = (void (*) (ValadocApiVisitor*, ValadocApiDelegate*)) valadoc_devhelp_doclet_real_visit_delegate;
	((ValadocApiVisitorClass *) klass)->visit_signal = (void (*) (ValadocApiVisitor*, ValadocApiSignal*)) valadoc_devhelp_doclet_real_visit_signal;
	((ValadocApiVisitorClass *) klass)->visit_method = (void (*) (ValadocApiVisitor*, ValadocApiMethod*)) valadoc_devhelp_doclet_real_visit_method;
	G_OBJECT_CLASS (klass)->finalize = valadoc_devhelp_doclet_finalize;
}

static void
valadoc_devhelp_doclet_instance_init (ValadocDevhelpDoclet * self,
                                      gpointer klass)
{
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	gchar* _tmp2_;
	self->priv = valadoc_devhelp_doclet_get_instance_private (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALADOC_API_TYPE_NODE, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp0_);
	self->priv->nodes = _tmp1_;
	_tmp2_ = g_strdup ("");
	self->priv->package_dir_name = _tmp2_;
}

static void
valadoc_devhelp_doclet_finalize (GObject * obj)
{
	ValadocDevhelpDoclet * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_DEVHELP_TYPE_DOCLET, ValadocDevhelpDoclet);
	_vala_iterable_unref0 (self->priv->nodes);
	_g_free0 (self->priv->package_dir_name);
	_valadoc_markup_writer_unref0 (self->priv->_devhelpwriter);
	G_OBJECT_CLASS (valadoc_devhelp_doclet_parent_class)->finalize (obj);
}

static GType
valadoc_devhelp_doclet_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocDevhelpDocletClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_devhelp_doclet_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocDevhelpDoclet), 0, (GInstanceInitFunc) valadoc_devhelp_doclet_instance_init, NULL };
	GType valadoc_devhelp_doclet_type_id;
	valadoc_devhelp_doclet_type_id = g_type_register_static (VALADOC_HTML_TYPE_BASIC_DOCLET, "ValadocDevhelpDoclet", &g_define_type_info, 0);
	ValadocDevhelpDoclet_private_offset = g_type_add_instance_private (valadoc_devhelp_doclet_type_id, sizeof (ValadocDevhelpDocletPrivate));
	return valadoc_devhelp_doclet_type_id;
}

GType
valadoc_devhelp_doclet_get_type (void)
{
	static volatile gsize valadoc_devhelp_doclet_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_devhelp_doclet_type_id__volatile)) {
		GType valadoc_devhelp_doclet_type_id;
		valadoc_devhelp_doclet_type_id = valadoc_devhelp_doclet_get_type_once ();
		g_once_init_leave (&valadoc_devhelp_doclet_type_id__volatile, valadoc_devhelp_doclet_type_id);
	}
	return valadoc_devhelp_doclet_type_id__volatile;
}

GType
register_plugin (ValadocModuleLoader* module_loader)
{
	GType result = 0UL;
	g_return_val_if_fail (module_loader != NULL, 0UL);
	result = VALADOC_DEVHELP_TYPE_DOCLET;
	return result;
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

