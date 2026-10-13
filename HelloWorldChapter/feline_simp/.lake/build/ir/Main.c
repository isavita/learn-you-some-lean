// Lean compiler output
// Module: Main
// Imports: public import Init public meta import Init
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* lean_get_stderr();
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_putStrLn(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* lean_stream_of_handle(lean_object*);
uint8_t l_ByteArray_isEmpty(lean_object*);
lean_object* lean_get_stdout();
lean_object* lean_get_stdin();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_ByteArray_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* lean_io_remove_file(lean_object*);
LEAN_EXPORT size_t lp_feline_bufsize;
static const lean_ctor_object lp_feline_dump___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(20480ULL)}};
LEAN_EXPORT const lean_object* lp_feline_dump___boxed__const__1 = (const lean_object*)&lp_feline_dump___boxed__const__1_value;
LEAN_EXPORT lean_object* lp_feline_dump(lean_object*);
LEAN_EXPORT lean_object* lp_feline_dump___boxed(lean_object*, lean_object*);
static const lean_string_object lp_feline_fileStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "File not found: "};
static const lean_object* lp_feline_fileStream___closed__0 = (const lean_object*)&lp_feline_fileStream___closed__0_value;
LEAN_EXPORT lean_object* lp_feline_fileStream(lean_object*);
LEAN_EXPORT lean_object* lp_feline_fileStream___boxed(lean_object*, lean_object*);
static const lean_string_object lp_feline_process___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* lp_feline_process___closed__0 = (const lean_object*)&lp_feline_process___closed__0_value;
LEAN_EXPORT lean_object* lp_feline_process___boxed__const__1;
LEAN_EXPORT lean_object* lp_feline_process(uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_feline_process___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_feline_IO_print___at___00IO_println___at___00help_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_feline_IO_print___at___00IO_println___at___00help_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_feline_IO_println___at___00help_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_feline_IO_println___at___00help_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_feline_help___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "usage: feline [-] [file ...]"};
static const lean_object* lp_feline_help___closed__0 = (const lean_object*)&lp_feline_help___closed__0_value;
LEAN_EXPORT lean_object* lp_feline_help___boxed__const__1;
LEAN_EXPORT lean_object* lp_feline_help();
LEAN_EXPORT lean_object* lp_feline_help___boxed(lean_object*);
static const lean_string_object lp_feline_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--help"};
static const lean_object* lp_feline_main___closed__0 = (const lean_object*)&lp_feline_main___closed__0_value;
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* lp_feline_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__0(lean_object*, lean_object*, size_t);
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__1(lean_object*);
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__4(lean_object*);
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_feline_stringToStream___lam__5(uint8_t);
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__5___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_feline_stringToStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_feline_stringToStream___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* lp_feline_stringToStream___closed__0 = (const lean_object*)&lp_feline_stringToStream___closed__0_value;
static const lean_closure_object lp_feline_stringToStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_feline_stringToStream___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* lp_feline_stringToStream___closed__1 = (const lean_object*)&lp_feline_stringToStream___closed__1_value;
static const lean_closure_object lp_feline_stringToStream___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_feline_stringToStream___lam__3___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* lp_feline_stringToStream___closed__2 = (const lean_object*)&lp_feline_stringToStream___closed__2_value;
static const lean_string_object lp_feline_stringToStream___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_feline_stringToStream___closed__3 = (const lean_object*)&lp_feline_stringToStream___closed__3_value;
static const lean_closure_object lp_feline_stringToStream___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_feline_stringToStream___lam__4___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_feline_stringToStream___closed__3_value)} };
static const lean_object* lp_feline_stringToStream___closed__4 = (const lean_object*)&lp_feline_stringToStream___closed__4_value;
static const lean_closure_object lp_feline_stringToStream___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_feline_stringToStream___lam__5___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* lp_feline_stringToStream___closed__5 = (const lean_object*)&lp_feline_stringToStream___closed__5_value;
LEAN_EXPORT lean_object* lp_feline_stringToStream(lean_object*);
LEAN_EXPORT lean_object* lp_feline_stringToStream___boxed(lean_object*, lean_object*);
static const lean_string_object lp_feline_testDump___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "This is short message!"};
static const lean_object* lp_feline_testDump___closed__0 = (const lean_object*)&lp_feline_testDump___closed__0_value;
LEAN_EXPORT lean_object* lp_feline_testDump();
LEAN_EXPORT lean_object* lp_feline_testDump___boxed(lean_object*);
static const lean_string_object lp_feline_testFileStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "a_random_test_file.txt"};
static const lean_object* lp_feline_testFileStream___closed__0 = (const lean_object*)&lp_feline_testFileStream___closed__0_value;
static const lean_string_object lp_feline_testFileStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "line 1\nline 2\nline 3"};
static const lean_object* lp_feline_testFileStream___closed__1 = (const lean_object*)&lp_feline_testFileStream___closed__1_value;
static const lean_string_object lp_feline_testFileStream___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "The test for reading file failed"};
static const lean_object* lp_feline_testFileStream___closed__2 = (const lean_object*)&lp_feline_testFileStream___closed__2_value;
static const lean_string_object lp_feline_testFileStream___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "The file read was successful"};
static const lean_object* lp_feline_testFileStream___closed__3 = (const lean_object*)&lp_feline_testFileStream___closed__3_value;
LEAN_EXPORT lean_object* lp_feline_testFileStream();
LEAN_EXPORT lean_object* lp_feline_testFileStream___boxed(lean_object*);
static const lean_string_object lp_feline_testFileStreamDoesNotExist___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "does_not_exist.txt"};
static const lean_object* lp_feline_testFileStreamDoesNotExist___closed__0 = (const lean_object*)&lp_feline_testFileStreamDoesNotExist___closed__0_value;
static const lean_string_object lp_feline_testFileStreamDoesNotExist___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Handle correctly file that doesn't exist"};
static const lean_object* lp_feline_testFileStreamDoesNotExist___closed__1 = (const lean_object*)&lp_feline_testFileStreamDoesNotExist___closed__1_value;
static const lean_string_object lp_feline_testFileStreamDoesNotExist___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Something is wrong"};
static const lean_object* lp_feline_testFileStreamDoesNotExist___closed__2 = (const lean_object*)&lp_feline_testFileStreamDoesNotExist___closed__2_value;
LEAN_EXPORT lean_object* lp_feline_testFileStreamDoesNotExist();
LEAN_EXPORT lean_object* lp_feline_testFileStreamDoesNotExist___boxed(lean_object*);
static size_t _init_lp_feline_bufsize(void){
_start:
{
size_t v___x_1_; 
v___x_1_ = ((size_t)20480ULL);
return v___x_1_;
}
}
LEAN_EXPORT lean_object* lp_feline_dump(lean_object* v_stream_4_){
_start:
{
lean_object* v_read_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v_read_6_ = lean_ctor_get(v_stream_4_, 1);
v___x_7_ = ((lean_object*)(lp_feline_dump___boxed__const__1));
lean_inc_ref(v_read_6_);
v___x_8_ = lean_apply_2(v_read_6_, v___x_7_, lean_box(0));
if (lean_obj_tag(v___x_8_) == 0)
{
lean_object* v_a_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_22_; 
v_a_9_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_22_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_22_ == 0)
{
v___x_11_ = v___x_8_;
v_isShared_12_ = v_isSharedCheck_22_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_a_9_);
lean_dec(v___x_8_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_22_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
uint8_t v___x_13_; 
v___x_13_ = l_ByteArray_isEmpty(v_a_9_);
if (v___x_13_ == 0)
{
lean_object* v___x_14_; lean_object* v_write_15_; lean_object* v___x_16_; 
lean_del_object(v___x_11_);
v___x_14_ = lean_get_stdout();
v_write_15_ = lean_ctor_get(v___x_14_, 2);
lean_inc_ref(v_write_15_);
lean_dec_ref(v___x_14_);
v___x_16_ = lean_apply_2(v_write_15_, v_a_9_, lean_box(0));
if (lean_obj_tag(v___x_16_) == 0)
{
lean_dec_ref_known(v___x_16_, 1);
goto _start;
}
else
{
lean_dec_ref(v_stream_4_);
return v___x_16_;
}
}
else
{
lean_object* v___x_18_; lean_object* v___x_20_; 
lean_dec(v_a_9_);
lean_dec_ref(v_stream_4_);
v___x_18_ = lean_box(0);
if (v_isShared_12_ == 0)
{
lean_ctor_set(v___x_11_, 0, v___x_18_);
v___x_20_ = v___x_11_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v___x_18_);
v___x_20_ = v_reuseFailAlloc_21_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
return v___x_20_;
}
}
}
}
else
{
lean_object* v_a_23_; lean_object* v___x_25_; uint8_t v_isShared_26_; uint8_t v_isSharedCheck_30_; 
lean_dec_ref(v_stream_4_);
v_a_23_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_30_ == 0)
{
v___x_25_ = v___x_8_;
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
else
{
lean_inc(v_a_23_);
lean_dec(v___x_8_);
v___x_25_ = lean_box(0);
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
v_resetjp_24_:
{
lean_object* v___x_28_; 
if (v_isShared_26_ == 0)
{
v___x_28_ = v___x_25_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v_a_23_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
return v___x_28_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_feline_dump___boxed(lean_object* v_stream_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = lp_feline_dump(v_stream_31_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* lp_feline_fileStream(lean_object* v_filename_35_){
_start:
{
uint8_t v___x_37_; 
v___x_37_ = l_System_FilePath_pathExists(v_filename_35_);
if (v___x_37_ == 0)
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_38_ = lean_get_stderr();
v___x_39_ = ((lean_object*)(lp_feline_fileStream___closed__0));
v___x_40_ = lean_string_append(v___x_39_, v_filename_35_);
v___x_41_ = l_IO_FS_Stream_putStrLn(v___x_38_, v___x_40_);
if (lean_obj_tag(v___x_41_) == 0)
{
lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_49_; 
v_isSharedCheck_49_ = !lean_is_exclusive(v___x_41_);
if (v_isSharedCheck_49_ == 0)
{
lean_object* v_unused_50_; 
v_unused_50_ = lean_ctor_get(v___x_41_, 0);
lean_dec(v_unused_50_);
v___x_43_ = v___x_41_;
v_isShared_44_ = v_isSharedCheck_49_;
goto v_resetjp_42_;
}
else
{
lean_dec(v___x_41_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_49_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
lean_object* v___x_45_; lean_object* v___x_47_; 
v___x_45_ = lean_box(0);
if (v_isShared_44_ == 0)
{
lean_ctor_set(v___x_43_, 0, v___x_45_);
v___x_47_ = v___x_43_;
goto v_reusejp_46_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v___x_45_);
v___x_47_ = v_reuseFailAlloc_48_;
goto v_reusejp_46_;
}
v_reusejp_46_:
{
return v___x_47_;
}
}
}
else
{
lean_object* v_a_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_58_; 
v_a_51_ = lean_ctor_get(v___x_41_, 0);
v_isSharedCheck_58_ = !lean_is_exclusive(v___x_41_);
if (v_isSharedCheck_58_ == 0)
{
v___x_53_ = v___x_41_;
v_isShared_54_ = v_isSharedCheck_58_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_a_51_);
lean_dec(v___x_41_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_58_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
lean_object* v___x_56_; 
if (v_isShared_54_ == 0)
{
v___x_56_ = v___x_53_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v_a_51_);
v___x_56_ = v_reuseFailAlloc_57_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
return v___x_56_;
}
}
}
}
else
{
uint8_t v___x_59_; lean_object* v___x_60_; 
v___x_59_ = 0;
v___x_60_ = lean_io_prim_handle_mk(v_filename_35_, v___x_59_);
if (lean_obj_tag(v___x_60_) == 0)
{
lean_object* v_a_61_; lean_object* v___x_63_; uint8_t v_isShared_64_; uint8_t v_isSharedCheck_70_; 
v_a_61_ = lean_ctor_get(v___x_60_, 0);
v_isSharedCheck_70_ = !lean_is_exclusive(v___x_60_);
if (v_isSharedCheck_70_ == 0)
{
v___x_63_ = v___x_60_;
v_isShared_64_ = v_isSharedCheck_70_;
goto v_resetjp_62_;
}
else
{
lean_inc(v_a_61_);
lean_dec(v___x_60_);
v___x_63_ = lean_box(0);
v_isShared_64_ = v_isSharedCheck_70_;
goto v_resetjp_62_;
}
v_resetjp_62_:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_68_; 
v___x_65_ = lean_stream_of_handle(v_a_61_);
v___x_66_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
if (v_isShared_64_ == 0)
{
lean_ctor_set(v___x_63_, 0, v___x_66_);
v___x_68_ = v___x_63_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v___x_66_);
v___x_68_ = v_reuseFailAlloc_69_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
return v___x_68_;
}
}
}
else
{
lean_object* v_a_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_78_; 
v_a_71_ = lean_ctor_get(v___x_60_, 0);
v_isSharedCheck_78_ = !lean_is_exclusive(v___x_60_);
if (v_isSharedCheck_78_ == 0)
{
v___x_73_ = v___x_60_;
v_isShared_74_ = v_isSharedCheck_78_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_a_71_);
lean_dec(v___x_60_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_78_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_76_; 
if (v_isShared_74_ == 0)
{
v___x_76_ = v___x_73_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v_a_71_);
v___x_76_ = v_reuseFailAlloc_77_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
return v___x_76_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_feline_fileStream___boxed(lean_object* v_filename_79_, lean_object* v_a_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = lp_feline_fileStream(v_filename_79_);
lean_dec_ref(v_filename_79_);
return v_res_81_;
}
}
static lean_object* _init_lp_feline_process___boxed__const__1(void){
_start:
{
uint32_t v___x_83_; lean_object* v___x_84_; 
v___x_83_ = 1;
v___x_84_ = lean_box_uint32(v___x_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* lp_feline_process(uint32_t v_exitCode_85_, lean_object* v_args_86_){
_start:
{
if (lean_obj_tag(v_args_86_) == 0)
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_box_uint32(v_exitCode_85_);
v___x_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
return v___x_89_;
}
else
{
lean_object* v_head_90_; lean_object* v_tail_91_; lean_object* v___x_92_; uint8_t v___x_93_; 
v_head_90_ = lean_ctor_get(v_args_86_, 0);
v_tail_91_ = lean_ctor_get(v_args_86_, 1);
v___x_92_ = ((lean_object*)(lp_feline_process___closed__0));
v___x_93_ = lean_string_dec_eq(v_head_90_, v___x_92_);
if (v___x_93_ == 0)
{
lean_object* v___x_94_; 
v___x_94_ = lp_feline_fileStream(v_head_90_);
if (lean_obj_tag(v___x_94_) == 0)
{
lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_114_; 
v_a_95_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_114_ == 0)
{
v___x_97_ = v___x_94_;
v_isShared_98_ = v_isSharedCheck_114_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_dec(v___x_94_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_114_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
if (lean_obj_tag(v_a_95_) == 0)
{
lean_object* v___x_99_; lean_object* v___x_101_; 
v___x_99_ = lp_feline_process___boxed__const__1;
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 0, v___x_99_);
v___x_101_ = v___x_97_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v___x_99_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
else
{
lean_object* v_val_103_; lean_object* v___x_104_; 
lean_del_object(v___x_97_);
v_val_103_ = lean_ctor_get(v_a_95_, 0);
lean_inc(v_val_103_);
lean_dec_ref_known(v_a_95_, 1);
v___x_104_ = lp_feline_dump(v_val_103_);
if (lean_obj_tag(v___x_104_) == 0)
{
lean_dec_ref_known(v___x_104_, 1);
v_args_86_ = v_tail_91_;
goto _start;
}
else
{
lean_object* v_a_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_113_; 
v_a_106_ = lean_ctor_get(v___x_104_, 0);
v_isSharedCheck_113_ = !lean_is_exclusive(v___x_104_);
if (v_isSharedCheck_113_ == 0)
{
v___x_108_ = v___x_104_;
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_a_106_);
lean_dec(v___x_104_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_111_; 
if (v_isShared_109_ == 0)
{
v___x_111_ = v___x_108_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v_a_106_);
v___x_111_ = v_reuseFailAlloc_112_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
return v___x_111_;
}
}
}
}
}
}
else
{
lean_object* v_a_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_122_; 
v_a_115_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_122_ == 0)
{
v___x_117_ = v___x_94_;
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_a_115_);
lean_dec(v___x_94_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_120_; 
if (v_isShared_118_ == 0)
{
v___x_120_ = v___x_117_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_a_115_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
}
}
else
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_get_stdin();
v___x_124_ = lp_feline_dump(v___x_123_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_dec_ref_known(v___x_124_, 1);
v_args_86_ = v_tail_91_;
goto _start;
}
else
{
lean_object* v_a_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_133_; 
v_a_126_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_133_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_133_ == 0)
{
v___x_128_ = v___x_124_;
v_isShared_129_ = v_isSharedCheck_133_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_a_126_);
lean_dec(v___x_124_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_133_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___x_131_; 
if (v_isShared_129_ == 0)
{
v___x_131_ = v___x_128_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v_a_126_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_feline_process___boxed(lean_object* v_exitCode_134_, lean_object* v_args_135_, lean_object* v_a_136_){
_start:
{
uint32_t v_exitCode_boxed_137_; lean_object* v_res_138_; 
v_exitCode_boxed_137_ = lean_unbox_uint32(v_exitCode_134_);
lean_dec(v_exitCode_134_);
v_res_138_ = lp_feline_process(v_exitCode_boxed_137_, v_args_135_);
lean_dec(v_args_135_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* lp_feline_IO_print___at___00IO_println___at___00help_spec__0_spec__0(lean_object* v_s_139_){
_start:
{
lean_object* v___x_141_; lean_object* v_putStr_142_; lean_object* v___x_143_; 
v___x_141_ = lean_get_stdout();
v_putStr_142_ = lean_ctor_get(v___x_141_, 4);
lean_inc_ref(v_putStr_142_);
lean_dec_ref(v___x_141_);
v___x_143_ = lean_apply_2(v_putStr_142_, v_s_139_, lean_box(0));
return v___x_143_;
}
}
LEAN_EXPORT lean_object* lp_feline_IO_print___at___00IO_println___at___00help_spec__0_spec__0___boxed(lean_object* v_s_144_, lean_object* v_a_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = lp_feline_IO_print___at___00IO_println___at___00help_spec__0_spec__0(v_s_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* lp_feline_IO_println___at___00help_spec__0(lean_object* v_s_147_){
_start:
{
uint32_t v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_149_ = 10;
v___x_150_ = lean_string_push(v_s_147_, v___x_149_);
v___x_151_ = lp_feline_IO_print___at___00IO_println___at___00help_spec__0_spec__0(v___x_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* lp_feline_IO_println___at___00help_spec__0___boxed(lean_object* v_s_152_, lean_object* v_a_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = lp_feline_IO_println___at___00help_spec__0(v_s_152_);
return v_res_154_;
}
}
static lean_object* _init_lp_feline_help___boxed__const__1(void){
_start:
{
uint32_t v___x_156_; lean_object* v___x_157_; 
v___x_156_ = 0;
v___x_157_ = lean_box_uint32(v___x_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* lp_feline_help(){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = ((lean_object*)(lp_feline_help___closed__0));
v___x_160_ = lp_feline_IO_println___at___00help_spec__0(v___x_159_);
if (lean_obj_tag(v___x_160_) == 0)
{
lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_168_; 
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_160_);
if (v_isSharedCheck_168_ == 0)
{
lean_object* v_unused_169_; 
v_unused_169_ = lean_ctor_get(v___x_160_, 0);
lean_dec(v_unused_169_);
v___x_162_ = v___x_160_;
v_isShared_163_ = v_isSharedCheck_168_;
goto v_resetjp_161_;
}
else
{
lean_dec(v___x_160_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_168_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_164_; lean_object* v___x_166_; 
v___x_164_ = lp_feline_help___boxed__const__1;
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 0, v___x_164_);
v___x_166_ = v___x_162_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_164_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
}
else
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
v_a_170_ = lean_ctor_get(v___x_160_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_160_);
if (v_isSharedCheck_177_ == 0)
{
v___x_172_ = v___x_160_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_160_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_a_170_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_feline_help___boxed(lean_object* v_a_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = lp_feline_help();
return v_res_179_;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_181_){
_start:
{
if (lean_obj_tag(v_args_181_) == 0)
{
uint32_t v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_183_ = 0;
v___x_184_ = ((lean_object*)(lp_feline_process___closed__0));
v___x_185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
lean_ctor_set(v___x_185_, 1, v_args_181_);
v___x_186_ = lp_feline_process(v___x_183_, v___x_185_);
lean_dec_ref_known(v___x_185_, 2);
return v___x_186_;
}
else
{
lean_object* v_head_187_; lean_object* v___x_188_; uint8_t v___x_189_; 
v_head_187_ = lean_ctor_get(v_args_181_, 0);
v___x_188_ = ((lean_object*)(lp_feline_main___closed__0));
v___x_189_ = lean_string_dec_eq(v_head_187_, v___x_188_);
if (v___x_189_ == 0)
{
uint32_t v___x_190_; lean_object* v___x_191_; 
v___x_190_ = 0;
v___x_191_ = lp_feline_process(v___x_190_, v_args_181_);
lean_dec_ref_known(v_args_181_, 2);
return v___x_191_;
}
else
{
lean_object* v___x_192_; 
lean_dec_ref_known(v_args_181_, 2);
v___x_192_ = lp_feline_help();
return v___x_192_;
}
}
}
}
LEAN_EXPORT lean_object* lp_feline_main___boxed(lean_object* v_args_193_, lean_object* v_a_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = _lean_main(v_args_193_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__0(lean_object* v_val_196_, lean_object* v_bytes_197_, size_t v_n_198_){
_start:
{
lean_object* v___x_200_; lean_object* v___y_202_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_200_ = lean_st_ref_get(v_val_196_);
v___x_207_ = lean_byte_array_size(v_bytes_197_);
v___x_208_ = lean_nat_sub(v___x_207_, v___x_200_);
v___x_209_ = lean_usize_to_nat(v_n_198_);
v___x_210_ = lean_nat_dec_le(v___x_209_, v___x_208_);
if (v___x_210_ == 0)
{
lean_dec(v___x_209_);
v___y_202_ = v___x_208_;
goto v___jp_201_;
}
else
{
lean_dec(v___x_208_);
v___y_202_ = v___x_209_;
goto v___jp_201_;
}
v___jp_201_:
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_203_ = lean_nat_add(v___x_200_, v___y_202_);
lean_dec(v___y_202_);
lean_inc(v___x_203_);
v___x_204_ = lean_st_ref_set(v_val_196_, v___x_203_);
v___x_205_ = l_ByteArray_extract(v_bytes_197_, v___x_200_, v___x_203_);
lean_dec(v___x_203_);
v___x_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
return v___x_206_;
}
}
}
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__0___boxed(lean_object* v_val_211_, lean_object* v_bytes_212_, lean_object* v_n_213_, lean_object* v___y_214_){
_start:
{
size_t v_n_boxed_215_; lean_object* v_res_216_; 
v_n_boxed_215_ = lean_unbox_usize(v_n_213_);
lean_dec(v_n_213_);
v_res_216_ = lp_feline_stringToStream___lam__0(v_val_211_, v_bytes_212_, v_n_boxed_215_);
lean_dec_ref(v_bytes_212_);
lean_dec(v_val_211_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__1(lean_object* v___x_217_){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_217_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__1___boxed(lean_object* v___x_220_, lean_object* v___y_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = lp_feline_stringToStream___lam__1(v___x_220_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__2(lean_object* v___x_223_, lean_object* v_x_224_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_226_, 0, v___x_223_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__2___boxed(lean_object* v___x_227_, lean_object* v_x_228_, lean_object* v___y_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = lp_feline_stringToStream___lam__2(v___x_227_, v_x_228_);
lean_dec_ref(v_x_228_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__3(lean_object* v___x_231_, lean_object* v_x_232_){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_234_, 0, v___x_231_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__3___boxed(lean_object* v___x_235_, lean_object* v_x_236_, lean_object* v___y_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = lp_feline_stringToStream___lam__3(v___x_235_, v_x_236_);
lean_dec_ref(v_x_236_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__4(lean_object* v___x_239_){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_241_, 0, v___x_239_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__4___boxed(lean_object* v___x_242_, lean_object* v___y_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = lp_feline_stringToStream___lam__4(v___x_242_);
return v_res_244_;
}
}
LEAN_EXPORT uint8_t lp_feline_stringToStream___lam__5(uint8_t v___x_245_){
_start:
{
return v___x_245_;
}
}
LEAN_EXPORT lean_object* lp_feline_stringToStream___lam__5___boxed(lean_object* v___x_247_, lean_object* v___y_248_){
_start:
{
uint8_t v___x_520__boxed_249_; uint8_t v_res_250_; lean_object* v_r_251_; 
v___x_520__boxed_249_ = lean_unbox(v___x_247_);
v_res_250_ = lp_feline_stringToStream___lam__5(v___x_520__boxed_249_);
v_r_251_ = lean_box(v_res_250_);
return v_r_251_;
}
}
LEAN_EXPORT lean_object* lp_feline_stringToStream(lean_object* v_s_264_){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v_bytes_268_; lean_object* v___f_269_; lean_object* v___f_270_; lean_object* v___f_271_; lean_object* v___f_272_; lean_object* v___f_273_; lean_object* v___f_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_266_ = lean_unsigned_to_nat(0u);
v___x_267_ = lean_st_mk_ref(v___x_266_);
v_bytes_268_ = lean_string_to_utf8(v_s_264_);
v___f_269_ = lean_alloc_closure((void*)(lp_feline_stringToStream___lam__0___boxed), 4, 2);
lean_closure_set(v___f_269_, 0, v___x_267_);
lean_closure_set(v___f_269_, 1, v_bytes_268_);
v___f_270_ = ((lean_object*)(lp_feline_stringToStream___closed__0));
v___f_271_ = ((lean_object*)(lp_feline_stringToStream___closed__1));
v___f_272_ = ((lean_object*)(lp_feline_stringToStream___closed__2));
v___f_273_ = ((lean_object*)(lp_feline_stringToStream___closed__4));
v___f_274_ = ((lean_object*)(lp_feline_stringToStream___closed__5));
v___x_275_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_275_, 0, v___f_270_);
lean_ctor_set(v___x_275_, 1, v___f_269_);
lean_ctor_set(v___x_275_, 2, v___f_271_);
lean_ctor_set(v___x_275_, 3, v___f_273_);
lean_ctor_set(v___x_275_, 4, v___f_272_);
lean_ctor_set(v___x_275_, 5, v___f_274_);
v___x_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* lp_feline_stringToStream___boxed(lean_object* v_s_277_, lean_object* v_a_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = lp_feline_stringToStream(v_s_277_);
lean_dec_ref(v_s_277_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* lp_feline_testDump(){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v_a_284_; lean_object* v___x_285_; 
v___x_282_ = ((lean_object*)(lp_feline_testDump___closed__0));
v___x_283_ = lp_feline_stringToStream(v___x_282_);
v_a_284_ = lean_ctor_get(v___x_283_, 0);
lean_inc(v_a_284_);
lean_dec_ref(v___x_283_);
v___x_285_ = lp_feline_dump(v_a_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* lp_feline_testDump___boxed(lean_object* v_a_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = lp_feline_testDump();
return v_res_287_;
}
}
LEAN_EXPORT lean_object* lp_feline_testFileStream(){
_start:
{
lean_object* v_filename_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v_filename_293_ = ((lean_object*)(lp_feline_testFileStream___closed__0));
v___x_294_ = ((lean_object*)(lp_feline_testFileStream___closed__1));
v___x_295_ = l_IO_FS_writeFile(v_filename_293_, v___x_294_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v___x_296_; 
lean_dec_ref_known(v___x_295_, 1);
v___x_296_ = lp_feline_fileStream(v_filename_293_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v_a_297_; 
v_a_297_ = lean_ctor_get(v___x_296_, 0);
lean_inc(v_a_297_);
lean_dec_ref_known(v___x_296_, 1);
if (lean_obj_tag(v_a_297_) == 0)
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = ((lean_object*)(lp_feline_testFileStream___closed__2));
v___x_299_ = lp_feline_IO_println___at___00help_spec__0(v___x_298_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v___x_300_; 
lean_dec_ref_known(v___x_299_, 1);
v___x_300_ = lean_io_remove_file(v_filename_293_);
return v___x_300_;
}
else
{
return v___x_299_;
}
}
else
{
lean_object* v___x_301_; lean_object* v___x_302_; 
lean_dec_ref_known(v_a_297_, 1);
v___x_301_ = ((lean_object*)(lp_feline_testFileStream___closed__3));
v___x_302_ = lp_feline_IO_println___at___00help_spec__0(v___x_301_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v___x_303_; 
lean_dec_ref_known(v___x_302_, 1);
v___x_303_ = lean_io_remove_file(v_filename_293_);
return v___x_303_;
}
else
{
return v___x_302_;
}
}
}
else
{
lean_object* v_a_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_311_; 
v_a_304_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_311_ == 0)
{
v___x_306_ = v___x_296_;
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_a_304_);
lean_dec(v___x_296_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_309_; 
if (v_isShared_307_ == 0)
{
v___x_309_ = v___x_306_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v_a_304_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
}
else
{
return v___x_295_;
}
}
}
LEAN_EXPORT lean_object* lp_feline_testFileStream___boxed(lean_object* v_a_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = lp_feline_testFileStream();
return v_res_313_;
}
}
LEAN_EXPORT lean_object* lp_feline_testFileStreamDoesNotExist(){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = ((lean_object*)(lp_feline_testFileStreamDoesNotExist___closed__0));
v___x_319_ = lp_feline_fileStream(v___x_318_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v_a_320_; 
v_a_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_a_320_);
lean_dec_ref_known(v___x_319_, 1);
if (lean_obj_tag(v_a_320_) == 0)
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = ((lean_object*)(lp_feline_testFileStreamDoesNotExist___closed__1));
v___x_322_ = lp_feline_IO_println___at___00help_spec__0(v___x_321_);
return v___x_322_;
}
else
{
lean_object* v___x_323_; lean_object* v___x_324_; 
lean_dec_ref_known(v_a_320_, 1);
v___x_323_ = ((lean_object*)(lp_feline_testFileStreamDoesNotExist___closed__2));
v___x_324_ = lp_feline_IO_println___at___00help_spec__0(v___x_323_);
return v___x_324_;
}
}
else
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
v_a_325_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___x_319_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_319_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_a_325_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_feline_testFileStreamDoesNotExist___boxed(lean_object* v_a_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = lp_feline_testFileStreamDoesNotExist();
return v_res_334_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_feline_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_feline_bufsize = _init_lp_feline_bufsize();
lp_feline_process___boxed__const__1 = _init_lp_feline_process___boxed__const__1();
lean_mark_persistent(lp_feline_process___boxed__const__1);
lp_feline_help___boxed__const__1 = _init_lp_feline_help___boxed__const__1();
lean_mark_persistent(lp_feline_help___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
char ** lean_setup_args(int argc, char ** argv);
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    lean_object* in = lean_box(0);
    int i = argc;
    while (i > 1) {
      lean_object* n;
      i--;
      n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
      in = n;
    }
    return _lean_main(in);
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  res = initialize_feline_Main(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = lean_unbox_uint32(lean_io_result_get_value(res));
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
