typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    int16;
typedef long double    longdouble;
typedef long long    longlong;
typedef unsigned long    qword;
typedef int    sdword;
typedef long    sqword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long long    uint16;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef unsigned int    wchar32;
typedef int    wchar_t;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef struct ostream ostream, *Postream;

struct ostream { // PlaceHolder Class Structure
};

typedef struct __gnu_cxx __gnu_cxx, *P__gnu_cxx;

struct __gnu_cxx { // PlaceHolder Class Structure
};

typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct NoteGnuPropertyElement_4 NoteGnuPropertyElement_4, *PNoteGnuPropertyElement_4;

struct NoteGnuPropertyElement_4 {
    dword prType;
    dword prDatasz;
    byte data[4];
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef ushort sa_family_t;

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

typedef uint __socklen_t;

typedef __socklen_t socklen_t;

typedef ulong size_t;

typedef uint wint_t;

typedef bool value_type;

typedef sqword __off64_t;

typedef sdword __int32_t;

typedef long __ssize_t;

typedef int int_type;

typedef long __off_t;

typedef char value_type.conflict;

typedef dword __uint32_t;

typedef char char_type;

typedef wchar32 char32_t;

typedef wchar16 char16_t;

typedef long ptrdiff_t;

typedef int16 __int128;

typedef word __uint16_t;

typedef ulong wctype_t;

typedef struct __new_allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> __new_allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>, *P__new_allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>;

struct __new_allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> { // Original name: __new_allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >
};

typedef struct __new_allocator<char> __new_allocator<char>, *P__new_allocator<char>;

struct __new_allocator<char> {
};

typedef char *reference;

typedef char *pointer;

typedef char *const_reference;

typedef size_t size_type;

typedef char *const_pointer;


// WARNING! conflicting data type names: /DWARF/new_allocator.h/std/__new_allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>/reference - /DWARF/new_allocator.h/std/__new_allocator<char>/reference


// WARNING! conflicting data type names: /DWARF/new_allocator.h/std/__new_allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>/pointer - /DWARF/new_allocator.h/std/__new_allocator<char>/pointer


// WARNING! conflicting data type names: /DWARF/new_allocator.h/std/__new_allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>/const_reference - /DWARF/new_allocator.h/std/__new_allocator<char>/const_reference


// WARNING! conflicting data type names: /DWARF/new_allocator.h/std/__new_allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>/const_pointer - /DWARF/new_allocator.h/std/__new_allocator<char>/const_pointer

typedef struct char_traits<char> char_traits<char>, *Pchar_traits<char>;

struct char_traits<char> {
};

typedef struct __uninitialized_copy<false> __uninitialized_copy<false>, *P__uninitialized_copy<false>;

struct __uninitialized_copy<false> {
};

typedef __int32_t *wctrans_t;

typedef struct initializer_list<char> initializer_list<char>, *Pinitializer_list<char>;

typedef char *iterator;

struct initializer_list<char> {
    iterator _M_array;
    size_type _M_len;
};

typedef char *const_iterator;

typedef struct exception_ptr exception_ptr, *Pexception_ptr;

struct exception_ptr {
    void *_M_exception_object;
};

typedef struct basic_ostream<char,_std::char_traits<char>_> basic_ostream<char,_std::char_traits<char>_>, *Pbasic_ostream<char,_std::char_traits<char>_>;

typedef struct basic_ostream<char,_std::char_traits<char>_> __ostream_type;

struct basic_ostream<char,_std::char_traits<char>_> { // Original name: basic_ostream<char, std::char_traits<char> >
};

typedef struct basic_string<char,_std::char_traits<char>,_std::allocator<char>_> basic_string<char,_std::char_traits<char>,_std::allocator<char>_>, *Pbasic_string<char,_std::char_traits<char>,_std::allocator<char>_>;

typedef struct _Alloc_hider _Alloc_hider, *P_Alloc_hider;


// WARNING! conflicting data type names: /DWARF/basic_string.h/std/__cxx11/basic_string<char,_std::char_traits<char>,_std::allocator<char>_>/size_type - /DWARF/new_allocator.h/std/__new_allocator<char>/size_type

typedef union anon_union_16_2_edb7204a_for_basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_9 anon_union_16_2_edb7204a_for_basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_9, *Panon_union_16_2_edb7204a_for_basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_9;


// WARNING! conflicting data type names: /DWARF/basic_string.h/std/__cxx11/basic_string<char,_std::char_traits<char>,_std::allocator<char>_>/pointer - /DWARF/new_allocator.h/std/__new_allocator<char>/pointer

union anon_union_16_2_edb7204a_for_basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_9 {
    char _M_local_buf[16];
    size_type _M_allocated_capacity;
};

struct _Alloc_hider { // Missing member super_allocator<char> : allocator<char> at offset 0x0 [conflicting member at same offset]
    pointer _M_p;
};

struct basic_string<char,_std::char_traits<char>,_std::allocator<char>_> { // Original name: basic_string<char, std::char_traits<char>, std::allocator<char> >
    struct _Alloc_hider _M_dataplus;
    size_type _M_string_length;
    union anon_union_16_2_edb7204a_for_basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_9 field_2;
};

typedef struct reverse_iterator<__gnu_cxx::__normal_iterator<char_const*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> reverse_iterator<__gnu_cxx::__normal_iterator<char_const*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>, *Preverse_iterator<__gnu_cxx::__normal_iterator<char_const*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>;

typedef struct reverse_iterator<__gnu_cxx::__normal_iterator<char_const*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> const_reverse_iterator;

struct reverse_iterator<__gnu_cxx::__normal_iterator<char_const*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> { // Original name: reverse_iterator<__gnu_cxx::__normal_iterator<char const*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >
};

typedef struct allocator<char> allocator<char>, *Pallocator<char>;

typedef struct allocator<char> rebind_alloc;

typedef rebind_alloc other;

typedef other _Char_alloc_type;

struct allocator<char> {
    struct __new_allocator<char> super___new_allocator<char>;
};


// WARNING! conflicting data type names: /DWARF/basic_string.h/std/__cxx11/basic_string<char,_std::char_traits<char>,_std::allocator<char>_>/const_iterator - /DWARF/initializer_list/std/initializer_list<char>/const_iterator


// WARNING! conflicting data type names: /DWARF/basic_string.h/std/__cxx11/basic_string<char,_std::char_traits<char>,_std::allocator<char>_>/const_pointer - /DWARF/new_allocator.h/std/__new_allocator<char>/const_pointer

typedef struct reverse_iterator<__gnu_cxx::__normal_iterator<char*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> reverse_iterator<__gnu_cxx::__normal_iterator<char*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>, *Preverse_iterator<__gnu_cxx::__normal_iterator<char*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>;

typedef struct reverse_iterator<__gnu_cxx::__normal_iterator<char*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> reverse_iterator;

struct reverse_iterator<__gnu_cxx::__normal_iterator<char*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> { // Original name: reverse_iterator<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >
};


// WARNING! conflicting data type names: /DWARF/basic_string.h/std/__cxx11/basic_string<char,_std::char_traits<char>,_std::allocator<char>_>/reference - /DWARF/new_allocator.h/std/__new_allocator<char>/reference


// WARNING! conflicting data type names: /DWARF/basic_string.h/std/__cxx11/basic_string<char,_std::char_traits<char>,_std::allocator<char>_>/iterator - /DWARF/initializer_list/std/initializer_list<char>/iterator

typedef _Char_alloc_type allocator_type;


// WARNING! conflicting data type names: /DWARF/basic_string.h/std/__cxx11/basic_string<char,_std::char_traits<char>,_std::allocator<char>_>/const_reference - /DWARF/new_allocator.h/std/__new_allocator<char>/const_reference

typedef const_iterator __const_iterator;

typedef enum anon_enum_32 {
    _S_local_capacity=15
} anon_enum_32;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef struct _IO_FILE __FILE;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef void _IO_lock_t;

typedef struct _IO_codecvt _IO_codecvt, *P_IO_codecvt;

typedef struct _IO_wide_data _IO_wide_data, *P_IO_wide_data;

struct _IO_wide_data {
};

struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    struct _IO_codecvt *_codecvt;
    struct _IO_wide_data *_wide_data;
    struct _IO_FILE *_freeres_list;
    void *_freeres_buf;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
};

struct _IO_codecvt {
};

typedef enum __socket_type {
    SOCK_STREAM=1,
    SOCK_DGRAM=2,
    SOCK_RAW=3,
    SOCK_RDM=4,
    SOCK_SEQPACKET=5,
    SOCK_DCCP=6,
    SOCK_PACKET=10,
    SOCK_NONBLOCK=2048,
    SOCK_CLOEXEC=524288
} __socket_type;

typedef void *nullptr_t;

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char *tm_zone;
};

typedef struct allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>, *Pallocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>;

struct allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> { // Original name: allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >
    struct __new_allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> super___new_allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>;
};

typedef struct move_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*> move_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*>, *Pmove_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*>;

struct move_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*> { // Original name: move_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*>
    struct basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *_M_current;
};


// WARNING! conflicting data type names: /DWARF/stl_iterator.h/std/move_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*>/reference - /DWARF/new_allocator.h/std/__new_allocator<char>/reference


// WARNING! conflicting data type names: /DWARF/stl_iterator_base_types.h/std/iterator_traits<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*>/difference_type - /DWARF/stl_iterator.h/std/move_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*>/difference_type

typedef difference_type difference_type;


// WARNING! conflicting data type names: /DWARF/stl_iterator.h/std/move_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*>/pointer - /DWARF/new_allocator.h/std/__new_allocator<char>/pointer

typedef struct basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *iterator_type;

typedef struct __normal_iterator<char_const*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> __normal_iterator<char_const*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>, *P__normal_iterator<char_const*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>;

struct __normal_iterator<char_const*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> { // Original name: __normal_iterator<char const*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >
    char *_M_current;
};

typedef struct __normal_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_> __normal_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>, *P__normal_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>;

struct __normal_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_> { // Original name: __normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >
    struct basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *_M_current;
};

typedef struct __normal_iterator<char*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> __normal_iterator<char*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>, *P__normal_iterator<char*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>;

struct __normal_iterator<char*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> { // Original name: __normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >
    char *_M_current;
};


// WARNING! conflicting data type names: /DWARF/stl_iterator.h/__gnu_cxx/__normal_iterator<char_const*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>/reference - /DWARF/new_allocator.h/std/__new_allocator<char>/reference


// WARNING! conflicting data type names: /DWARF/stl_iterator.h/__gnu_cxx/__normal_iterator<char_const*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>/pointer - /DWARF/new_allocator.h/std/__new_allocator<char>/pointer


// WARNING! conflicting data type names: /DWARF/stl_iterator.h/__gnu_cxx/__normal_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>/reference - /DWARF/new_allocator.h/std/__new_allocator<char>/reference


// WARNING! conflicting data type names: /DWARF/stl_iterator.h/__gnu_cxx/__normal_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>/pointer - /DWARF/new_allocator.h/std/__new_allocator<char>/pointer


// WARNING! conflicting data type names: /DWARF/stl_iterator.h/__gnu_cxx/__normal_iterator<char*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>/reference - /DWARF/new_allocator.h/std/__new_allocator<char>/reference


// WARNING! conflicting data type names: /DWARF/stl_iterator.h/__gnu_cxx/__normal_iterator<char*,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>/pointer - /DWARF/new_allocator.h/std/__new_allocator<char>/pointer

typedef struct 11__mbstate_t 11__mbstate_t, *P11__mbstate_t;

typedef struct 11__mbstate_t __mbstate_t;

typedef union anon_union_4_2_91654ee9_for___value anon_union_4_2_91654ee9_for___value, *Panon_union_4_2_91654ee9_for___value;

union anon_union_4_2_91654ee9_for___value {
    uint __wch;
    char __wchb[4];
};

struct 11__mbstate_t {
    int __count;
    union anon_union_4_2_91654ee9_for___value __value;
};

typedef struct _G_fpos_t _G_fpos_t, *P_G_fpos_t;

typedef struct _G_fpos_t __fpos_t;

typedef __fpos_t fpos_t;

struct _G_fpos_t {
    __off_t __pos;
    __mbstate_t __state;
};

typedef __ssize_t ssize_t;

typedef enum _Ios_Openmode {
    _S_ios_openmode_min=-2147483648,
    _S_app=1,
    _S_ate=2,
    _S_bin=4,
    _S_in=8,
    _S_out=16,
    _S_trunc=32,
    _S_noreplace=64,
    _S_ios_openmode_end=65536,
    _S_ios_openmode_max=2147483647
} _Ios_Openmode;

typedef enum _Ios_Openmode openmode;

typedef struct typedef___va_list_tag___va_list_tag typedef___va_list_tag___va_list_tag, *Ptypedef___va_list_tag___va_list_tag;

struct typedef___va_list_tag___va_list_tag { // Original name: typedef __va_list_tag __va_list_tag
    uint gp_offset;
    uint fp_offset;
    void *overflow_arg_area;
    void *reg_save_area;
};

typedef struct basic_ios<char,_std::char_traits<char>_> basic_ios<char,_std::char_traits<char>_>, *Pbasic_ios<char,_std::char_traits<char>_>;

struct basic_ios<char,_std::char_traits<char>_> { // Original name: basic_ios<char, std::char_traits<char> >
};

typedef struct ios_base ios_base, *Pios_base;

struct ios_base {
};

typedef struct type_info type_info, *Ptype_info;

struct type_info {
};

typedef struct initializer_list<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> initializer_list<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>, *Pinitializer_list<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>;

struct initializer_list<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> { // Original name: initializer_list<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >
};

typedef struct basic_istream<char,_std::char_traits<char>_> basic_istream<char,_std::char_traits<char>_>, *Pbasic_istream<char,_std::char_traits<char>_>;

struct basic_istream<char,_std::char_traits<char>_> { // Original name: basic_istream<char, std::char_traits<char> >
};

typedef struct reverse_iterator<__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>_> reverse_iterator<__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>_>, *Preverse_iterator<__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>_>;

struct reverse_iterator<__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>_> { // Original name: reverse_iterator<__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > >
};

typedef struct reverse_iterator<__gnu_cxx::__normal_iterator<const_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>_> reverse_iterator<__gnu_cxx::__normal_iterator<const_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>_>, *Preverse_iterator<__gnu_cxx::__normal_iterator<const_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>_>;

struct reverse_iterator<__gnu_cxx::__normal_iterator<const_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>_> { // Original name: reverse_iterator<__gnu_cxx::__normal_iterator<const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > >
};

typedef struct basic_stringstream<char,_std::char_traits<char>,_std::allocator<char>_> basic_stringstream<char,_std::char_traits<char>,_std::allocator<char>_>, *Pbasic_stringstream<char,_std::char_traits<char>,_std::allocator<char>_>;

struct basic_stringstream<char,_std::char_traits<char>,_std::allocator<char>_> { // Original name: basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
};

typedef struct __normal_iterator<const_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_> __normal_iterator<const_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>, *P__normal_iterator<const_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>;

struct __normal_iterator<const_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*,_std::vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_> { // Original name: __normal_iterator<const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >
};

typedef struct lconv lconv, *Plconv;

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};


// WARNING! conflicting data type names: /DWARF/stringfwd.h/std/string - /string

typedef struct allocator_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> allocator_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>, *Pallocator_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>;

struct allocator_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> { // Original name: allocator_traits<std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >
};

typedef struct __is_move_insertable<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> __is_move_insertable<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>, *P__is_move_insertable<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>;

typedef struct is_move_constructible<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> is_move_constructible<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>, *Pis_move_constructible<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>;

typedef struct integral_constant<bool,_true> integral_constant<bool,_true>, *Pintegral_constant<bool,_true>;

struct integral_constant<bool,_true> { // Original name: integral_constant<bool, true>
};

struct is_move_constructible<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> { // Original name: is_move_constructible<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >
    struct integral_constant<bool,_true> super_integral_constant<bool,_true>;
};

struct __is_move_insertable<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> { // Original name: __is_move_insertable<std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >
    struct is_move_constructible<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> super_is_move_constructible<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>;
};

typedef struct allocator_traits<std::allocator<char>_> allocator_traits<std::allocator<char>_>, *Pallocator_traits<std::allocator<char>_>;

struct allocator_traits<std::allocator<char>_> { // Original name: allocator_traits<std::allocator<char> >
};


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/std/allocator_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/pointer - /DWARF/new_allocator.h/std/__new_allocator<char>/pointer


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/std/allocator_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/allocator_type - /DWARF/basic_string.h/std/__cxx11/basic_string<char,_std::char_traits<char>,_std::allocator<char>_>/allocator_type


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/std/allocator_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/value_type - /DWARF/value_type

typedef void *const_void_pointer;


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/std/allocator_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/rebind_alloc - /DWARF/alloc_traits.h/std/allocator_traits<std::allocator<char>_>/rebind_alloc


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/std/allocator_traits<std::allocator<char>_>/allocator_type - /DWARF/basic_string.h/std/__cxx11/basic_string<char,_std::char_traits<char>,_std::allocator<char>_>/allocator_type

typedef struct __alloc_traits<std::allocator<char>,_char> __alloc_traits<std::allocator<char>,_char>, *P__alloc_traits<std::allocator<char>,_char>;

struct __alloc_traits<std::allocator<char>,_char> { // Original name: __alloc_traits<std::allocator<char>, char>
    struct allocator_traits<std::allocator<char>_> super_allocator_traits<std::allocator<char>_>;
};

typedef struct __alloc_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> __alloc_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>, *P__alloc_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>;

struct __alloc_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> { // Original name: __alloc_traits<std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >
    struct allocator_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> super_allocator_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>;
};


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/__gnu_cxx/__alloc_traits<std::allocator<char>,_char>/value_type - /DWARF/value_type

typedef struct rebind<char> rebind<char>, *Prebind<char>;

struct rebind<char> {
};


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/__gnu_cxx/__alloc_traits<std::allocator<char>,_char>/reference - /DWARF/new_allocator.h/std/__new_allocator<char>/reference


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/__gnu_cxx/__alloc_traits<std::allocator<char>,_char>/pointer - /DWARF/new_allocator.h/std/__new_allocator<char>/pointer


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/__gnu_cxx/__alloc_traits<std::allocator<char>,_char>/const_reference - /DWARF/new_allocator.h/std/__new_allocator<char>/const_reference


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/__gnu_cxx/__alloc_traits<std::allocator<char>,_char>/size_type - /DWARF/new_allocator.h/std/__new_allocator<char>/size_type


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/__gnu_cxx/__alloc_traits<std::allocator<char>,_char>/const_pointer - /DWARF/new_allocator.h/std/__new_allocator<char>/const_pointer


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/__gnu_cxx/__alloc_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>/value_type - /DWARF/value_type


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/__gnu_cxx/__alloc_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>/reference - /DWARF/new_allocator.h/std/__new_allocator<char>/reference


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/__gnu_cxx/__alloc_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>/pointer - /DWARF/new_allocator.h/std/__new_allocator<char>/pointer


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/__gnu_cxx/__alloc_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>/const_reference - /DWARF/new_allocator.h/std/__new_allocator<char>/const_reference

typedef struct rebind<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> rebind<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>, *Prebind<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>;

struct rebind<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> { // Original name: rebind<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >
};


// WARNING! conflicting data type names: /DWARF/alloc_traits.h/__gnu_cxx/__alloc_traits<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>/rebind<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>/other - /DWARF/alloc_traits.h/__gnu_cxx/__alloc_traits<std::allocator<char>,_char>/rebind<char>/other

typedef struct _Save_errno _Save_errno, *P_Save_errno;

struct _Save_errno {
    int _M_errno;
};

typedef struct _Range_chk _Range_chk, *P_Range_chk;

struct _Range_chk {
};

typedef struct vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>, *Pvector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>;

typedef struct _Vector_base<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> _Vector_base<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>, *P_Vector_base<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>;

typedef struct _Vector_impl _Vector_impl, *P_Vector_impl;

typedef struct _Vector_impl_data _Vector_impl_data, *P_Vector_impl_data;


// WARNING! conflicting data type names: /DWARF/stl_vector.h/std/_Vector_base<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/pointer - /DWARF/new_allocator.h/std/__new_allocator<char>/pointer

struct _Vector_impl_data {
    pointer _M_start;
    pointer _M_finish;
    pointer _M_end_of_storage;
};

struct _Vector_impl {
    struct allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> super_allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>;
    struct _Vector_impl_data super__Vector_impl_data;
};

struct _Vector_base<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> { // Original name: _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >
    struct _Vector_impl _M_impl;
};

struct vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> { // Original name: vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >
    struct _Vector_base<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> super__Vector_base<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>;
};


// WARNING! conflicting data type names: /DWARF/stl_vector.h/std/_Vector_base<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/_Tp_alloc_type - /DWARF/stl_vector.h/std/vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/_Tp_alloc_type

typedef _Tp_alloc_type _Tp_alloc_type;


// WARNING! conflicting data type names: /DWARF/stl_vector.h/std/vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/value_type - /DWARF/value_type


// WARNING! conflicting data type names: /DWARF/stl_vector.h/std/vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/const_iterator - /DWARF/initializer_list/std/initializer_list<char>/const_iterator


// WARNING! conflicting data type names: /DWARF/stl_vector.h/std/vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/reference - /DWARF/new_allocator.h/std/__new_allocator<char>/reference


// WARNING! conflicting data type names: /DWARF/stl_vector.h/std/vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/iterator - /DWARF/initializer_list/std/initializer_list<char>/iterator


// WARNING! conflicting data type names: /DWARF/stl_vector.h/std/vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/pointer - /DWARF/new_allocator.h/std/__new_allocator<char>/pointer


// WARNING! conflicting data type names: /DWARF/stl_vector.h/std/vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/allocator_type - /DWARF/basic_string.h/std/__cxx11/basic_string<char,_std::char_traits<char>,_std::allocator<char>_>/allocator_type


// WARNING! conflicting data type names: /DWARF/stl_vector.h/std/vector<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/const_reference - /DWARF/new_allocator.h/std/__new_allocator<char>/const_reference


// WARNING! conflicting data type names: /DWARF/stl_vector.h/std/_Vector_base<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/allocator_type - /DWARF/basic_string.h/std/__cxx11/basic_string<char,_std::char_traits<char>,_std::allocator<char>_>/allocator_type

typedef __mbstate_t mbstate_t;

typedef struct _Destroy_aux<false> _Destroy_aux<false>, *P_Destroy_aux<false>;

struct _Destroy_aux<false> {
};

typedef struct bidirectional_iterator_tag bidirectional_iterator_tag, *Pbidirectional_iterator_tag;

typedef struct forward_iterator_tag forward_iterator_tag, *Pforward_iterator_tag;

typedef struct input_iterator_tag input_iterator_tag, *Pinput_iterator_tag;

struct input_iterator_tag {
};

struct forward_iterator_tag {
    struct input_iterator_tag super_input_iterator_tag;
};

struct bidirectional_iterator_tag {
    struct forward_iterator_tag super_forward_iterator_tag;
};

typedef struct iterator_traits<char_const*> iterator_traits<char_const*>, *Piterator_traits<char_const*>;

struct iterator_traits<char_const*> { // Original name: iterator_traits<char const*>
};

typedef struct iterator_traits<char*> iterator_traits<char*>, *Piterator_traits<char*>;

struct iterator_traits<char*> {
};

typedef struct iterator_traits<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*> iterator_traits<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*>, *Piterator_traits<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*>;

struct iterator_traits<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*> { // Original name: iterator_traits<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*>
};

typedef struct random_access_iterator_tag random_access_iterator_tag, *Prandom_access_iterator_tag;

struct random_access_iterator_tag {
    struct bidirectional_iterator_tag super_bidirectional_iterator_tag;
};


// WARNING! conflicting data type names: /DWARF/stl_iterator_base_types.h/std/iterator_traits<char_const*>/difference_type - /DWARF/stl_iterator.h/std/move_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*>/difference_type

typedef struct random_access_iterator_tag iterator_category;


// WARNING! conflicting data type names: /DWARF/stl_iterator_base_types.h/std/iterator_traits<char*>/difference_type - /DWARF/stl_iterator.h/std/move_iterator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*>/difference_type


// WARNING! conflicting data type names: /DWARF/stl_iterator_base_types.h/std/iterator_traits<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*>/reference - /DWARF/new_allocator.h/std/__new_allocator<char>/reference


// WARNING! conflicting data type names: /DWARF/stl_iterator_base_types.h/std/iterator_traits<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*>/pointer - /DWARF/new_allocator.h/std/__new_allocator<char>/pointer

typedef struct _IO_FILE FILE;

typedef struct in_addr in_addr, *Pin_addr;

typedef __uint32_t uint32_t;

typedef uint32_t in_addr_t;

struct in_addr {
    in_addr_t s_addr;
};

typedef __uint16_t uint16_t;

typedef uint16_t in_port_t;

typedef struct sockaddr_in sockaddr_in, *Psockaddr_in;

struct sockaddr_in {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;
    uchar sin_zero[8];
};

typedef struct ClienteRed ClienteRed, *PClienteRed;

struct ClienteRed {
    int socket_fd;
    bool conectado;
};

typedef struct basic_string<char,_std::char_traits<char>,_std::allocator<char>_> __string_type;

typedef struct Validador Validador, *PValidador;

struct Validador {
};

typedef struct ManejadorErrores ManejadorErrores, *PManejadorErrores;

struct ManejadorErrores {
};

typedef struct basic_istream<char,_std::char_traits<char>_> istream;

typedef struct basic_stringstream<char,_std::char_traits<char>,_std::allocator<char>_> stringstream;

typedef struct 7lldiv_t 7lldiv_t, *P7lldiv_t;

struct 7lldiv_t {
    longlong quot;
    longlong rem;
};

typedef struct 5div_t 5div_t, *P5div_t;

struct 5div_t {
    int quot;
    int rem;
};

typedef struct 6ldiv_t 6ldiv_t, *P6ldiv_t;

typedef struct 6ldiv_t ldiv_t;

struct 6ldiv_t {
    long quot;
    long rem;
};

typedef struct 5div_t div_t;

typedef int (*__compar_fn_t)(void *, void *);

typedef struct 7lldiv_t lldiv_t;

typedef struct piecewise_construct_t piecewise_construct_t, *Ppiecewise_construct_t;

struct piecewise_construct_t {
};

typedef struct _Guard _Guard, *P_Guard;

struct _Guard {
    struct basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *_M_guarded;
};

typedef struct integral_constant<bool,_false> integral_constant<bool,_false>, *Pintegral_constant<bool,_false>;

struct integral_constant<bool,_false> { // Original name: integral_constant<bool, false>
};

typedef struct remove_reference<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>&> remove_reference<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>&>, *Premove_reference<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>&>;

struct remove_reference<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>&> { // Original name: remove_reference<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&>
};

typedef struct integral_constant<bool,_true> true_type;

typedef struct is_same<int,_int> is_same<int,_int>, *Pis_same<int,_int>;

struct is_same<int,_int> { // Original name: is_same<int, int>
    struct integral_constant<bool,_true> super_integral_constant<bool,_true>;
};

typedef struct integral_constant<bool,_false> false_type;

typedef struct remove_reference<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*&> remove_reference<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*&>, *Premove_reference<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*&>;

struct remove_reference<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>*&> { // Original name: remove_reference<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*&>
};

typedef struct remove_reference<std::allocator<char>&> remove_reference<std::allocator<char>&>, *Premove_reference<std::allocator<char>&>;

struct remove_reference<std::allocator<char>&> {
};

typedef struct basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *type;

typedef type __conditional_t;

typedef struct __conditional<true> __conditional<true>, *P__conditional<true>;

struct __conditional<true> {
};

typedef struct remove_reference<const_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>&> remove_reference<const_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>&>, *Premove_reference<const_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>&>;

struct remove_reference<const_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>&> { // Original name: remove_reference<const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&>
};

typedef struct __type_identity<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> __type_identity<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>, *P__type_identity<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>;

struct __type_identity<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_> { // Original name: __type_identity<std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >
};


// WARNING! conflicting data type names: /DWARF/type_traits/std/__type_identity<std::allocator<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>/type - /DWARF/type_traits/std/__conditional<true>/type

typedef type __type_identity_t;

typedef struct remove_reference<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> remove_reference<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>, *Premove_reference<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>;

struct remove_reference<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> { // Original name: remove_reference<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >
};


// WARNING! conflicting data type names: /DWARF/type_traits/std/remove_reference<std::allocator<char>&>/type - /DWARF/type_traits/std/__conditional<true>/type


// WARNING! conflicting data type names: /DWARF/type_traits/std/remove_reference<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>&>/type - /DWARF/type_traits/std/__conditional<true>/type


// WARNING! conflicting data type names: /DWARF/type_traits/std/remove_reference<const_std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>&>/type - /DWARF/type_traits/std/__conditional<true>/type


// WARNING! conflicting data type names: /DWARF/type_traits/std/remove_reference<std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>/type - /DWARF/type_traits/std/__conditional<true>/type

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct allocator allocator, *Pallocator;

struct allocator { // PlaceHolder Structure
};

typedef struct ios ios, *Pios;

struct ios { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/__cxx11/string - /string


// WARNING! conflicting data type names: /Demangler/std/__cxx11/stringstream - /DWARF/iosfwd/std/stringstream

typedef enum Elf_ProgramHeaderType {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType;

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

typedef enum Elf64_DynTag {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};


// WARNING! conflicting data type names: /stdint.h/uint16_t - /DWARF/stdint-uintn.h/uint16_t




int _init(EVP_PKEY_CTX *ctx);
void FUN_00102020(void);
void __cxa_finalize(void);
int * __errno_location(void);
uint16_t htons(uint16_t __hostshort);
istream * std::getline<>(istream *param_1,string *param_2);
int socket(int __domain,int __type,int __protocol);
ssize_t recv(int __fd,void *__buf,size_t __n,int __flags);
void std::__throw_bad_alloc(void);
void __cxa_begin_catch(void);
void std::__cxx11::string::c_str(void);
void __thiscall std::__cxx11::string::string(string *this,string *param_1);
ssize_t send(int __fd,void *__buf,size_t __n,int __flags);
void std::__throw_length_error(char *param_1);
void __thiscall std::__cxx11::string::string(string *this,string *param_1);
void std::__throw_invalid_argument(char *param_1);
void __thiscall std::__cxx11::string::~string(string *this);
void std::__cxx11::string::size(void);
void __thiscall std::__cxx11::stringstream::stringstream(stringstream *this);
void __thiscall std::__cxx11::stringstream::~stringstream(stringstream *this);
void std::__throw_bad_array_new_length(void);
int connect(int __fd,sockaddr *__addr,socklen_t __len);
ostream * std::operator<<(ostream *param_1,string *param_2);
void operator.delete(void *param_1);
void std::__cxx11::string::begin(void);
void __thiscall std::__cxx11::string::operator+=(string *this,char *param_1);
void std::__cxx11::stringstream::str(void);
ostream * std::operator<<(ostream *param_1,char *param_2);
void * operator.new(ulong param_1);
void __thiscall std::ostream::operator<<(void *this,_func_ostream_ptr_ostream_ptr *param_1);
void std::__cxx11::string::operator[](ulong param_1);
void __stack_chk_fail(void);
void __thiscall std::__cxx11::string::operator=(string *this,string *param_1);
bool __thiscall std::ios::operator.cast.to.bool(ios *this);
void __thiscall std::__cxx11::string::string(string *this,char *param_1,allocator *param_2);
void __thiscall std::__cxx11::string::string(string *this);
void std::__throw_out_of_range(char *param_1);
void __cxa_rethrow(void);
void std::__cxx11::string::length(void);
void __thiscall std::__cxx11::stringstream::stringstream(stringstream *this,string *param_1,_Ios_Openmode param_2);
void __cxa_end_catch(void);
void std::__cxx11::string::empty(void);
void __thiscall std::ostream::operator<<(void *this,int param_1);
void _Unwind_Resume(void);
istream * std::getline<>(istream *param_1,string *param_2,char param_3);
void std::__cxx11::string::end(void);
int inet_pton(int __af,char *__cp,void *__buf);
int close(int __fd);
void processEntry _start(undefined8 param_1,undefined8 param_2);
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
int main(void);
void * operator_new(size_t param_1,void *__p);
void operator_delete(void *param_1,void *param_2);
int std::__cxx11::stoi(string *__str,size_t *__idx,int __base);
_Ios_Openmode std::operator|(_Ios_Openmode __a,_Ios_Openmode __b);
void __thiscall std::_Vector_base<>::_Vector_impl::~_Vector_impl(_Vector_impl *this,int __in_chrg);
void __thiscall std::_Vector_base<>::_Vector_base(_Vector_base<> *this);
void __thiscall std::vector<>::vector(vector<> *this);
bool Validador::IP_valida(string *ip);
bool Validador::Puerto_valido(int puerto);
string * Validador::pedirEntrada(string *__return_storage_ptr__,string *mensaje);
void ManejadorErrores::mostrarError(string *mensaje);
void ManejadorErrores::mostrarExito(string *mensaje);
void __thiscall __gnu_cxx::__stoa<>::_Save_errno::_Save_errno(_Save_errno *this);
void __thiscall __gnu_cxx::__stoa<>::_Save_errno::~_Save_errno(_Save_errno *this,int __in_chrg);
bool __gnu_cxx::__stoa<>::_Range_chk::_S_chk(long __val);
int __thiscall __gnu_cxx::__stoa<>(__gnu_cxx *this,_func_long_char_ptr_char_ptr_ptr_int *__convf,char *__name,char *__str,size_t *__idx);
void __thiscall std::_Vector_base<>::_Vector_impl::_Vector_impl(_Vector_impl *this);
void __thiscall std::_Vector_base<>::~_Vector_base(_Vector_base<> *this,int __in_chrg);
void __thiscall std::vector<>::~vector(vector<> *this,int __in_chrg);
void __thiscall std::vector<>::push_back(vector<> *this,value_type *__x);
size_type __thiscall std::vector<>::size(vector<> *this);
iterator __thiscall std::vector<>::begin(vector<> *this);
iterator __thiscall std::vector<>::end(vector<> *this);
bool __gnu_cxx::operator!=<>(__normal_iterator<> *__lhs,__normal_iterator<> *__rhs);
__normal_iterator<> * __thiscall __gnu_cxx::__normal_iterator<>::operator++(__normal_iterator<> *this);
reference __thiscall __gnu_cxx::__normal_iterator<>::operator*(__normal_iterator<> *this);
bool __gnu_cxx::operator!=<>(__normal_iterator<> *__lhs,__normal_iterator<> *__rhs);
__normal_iterator<> * __thiscall __gnu_cxx::__normal_iterator<>::operator++(__normal_iterator<> *this);
reference __thiscall __gnu_cxx::__normal_iterator<>::operator*(__normal_iterator<> *this);
void __thiscall std::__new_allocator<char>::~__new_allocator(__new_allocator<char> *this,int __in_chrg);
type * std::move<>(basic_string<> *__t);
void __thiscall std::_Vector_base<>::_Vector_impl_data::_Vector_impl_data(_Vector_impl_data *this);
void __thiscall std::__new_allocator<>::~__new_allocator(__new_allocator<> *this,int __in_chrg);
void __thiscall std::_Vector_base<>::_M_deallocate(_Vector_base<> *this,pointer __p,size_t __n);
_Tp_alloc_type * __thiscall std::_Vector_base<>::_M_get_Tp_allocator(_Vector_base<> *this);
bool std::vector<>::_S_use_relocate(void);
bool std::vector<>::_S_nothrow_relocate(void);
void __thiscall std::vector<>::_M_realloc_insert<>(vector<> *this,iterator __position);
void __thiscall __gnu_cxx::__normal_iterator<>::__normal_iterator(__normal_iterator<> *this,basic_string<> **__i);
basic_string<> ** __thiscall __gnu_cxx::__normal_iterator<>::base(__normal_iterator<> *this);
char ** __thiscall __gnu_cxx::__normal_iterator<>::base(__normal_iterator<> *this);
basic_string<> * std::__addressof<>(basic_string<> *__r);
void std::_Destroy<>(basic_string<> *__first,basic_string<> *__last);
basic_string<> * std::forward<>(type *__t);
size_type __thiscall std::vector<>::_M_check_len(vector<> *this,size_type __n,char *__s);
difference_type __gnu_cxx::operator-<>(__normal_iterator<> *__lhs,__normal_iterator<> *__rhs);
pointer __thiscall std::_Vector_base<>::_M_allocate(_Vector_base<> *this,size_t __n);
pointer std::vector<>::_S_relocate(pointer __first,pointer __last,pointer __result,_Tp_alloc_type *__alloc);
basic_string<> *std::__uninitialized_move_if_noexcept_a<>(basic_string<> *__first,basic_string<> *__last,basic_string<> *__result,allocator<> *__alloc);
void __thiscall std::__new_allocator<>::deallocate(__new_allocator<> *this,basic_string<> *__p,size_type __n);
void std::_Destroy_aux<false>::__destroy<>(basic_string<> *__first,basic_string<> *__last);
size_type __thiscall std::vector<>::max_size(vector<> *this);
ulong * std::max<>(ulong *__a,ulong *__b);
pointer std::vector<>::_S_do_relocate(basic_string<> *__first,basic_string<> *__last,basic_string<> *__result,allocator<> *__alloc);
move_iterator<> std::__make_move_if_noexcept_iterator<>(basic_string<> *__i);
basic_string<> *std::__uninitialized_copy_a<>(move_iterator<> __first,move_iterator<> __last,basic_string<> *__result,allocator<> *param_4);
void std::_Destroy<>(basic_string<> *__pointer);
size_type std::vector<>::_S_max_size(_Tp_alloc_type *__a);
_Tp_alloc_type * __thiscall std::_Vector_base<>::_M_get_Tp_allocator(_Vector_base<> *this);
basic_string<> * __thiscall std::__new_allocator<>::allocate(__new_allocator<> *this,size_type __n,void *param_2);
basic_string<> *std::__relocate_a<>(basic_string<> *__first,basic_string<> *__last,basic_string<> *__result,allocator<> *__alloc);
void __thiscall std::move_iterator<>::move_iterator(move_iterator<> *this,iterator_type __i);
basic_string<> *std::uninitialized_copy<>(move_iterator<> __first,move_iterator<> __last,basic_string<> *__result);
ulong * std::min<>(ulong *__a,ulong *__b);
basic_string<> * std::__niter_base<>(basic_string<> *__it);
basic_string<> *std::__relocate_a_1<>(basic_string<> *__first,basic_string<> *__last,basic_string<> *__result,allocator<> *__alloc);
type * std::move<>(basic_string<> **__t);
basic_string<> *std::__uninitialized_copy<false>::__uninit_copy<>(move_iterator<> __first,move_iterator<> __last,basic_string<> *__result);
void std::__relocate_object_a<>(basic_string<> *__dest,basic_string<> *__orig,allocator<> *__alloc);
basic_string<> *std::__do_uninit_copy<>(move_iterator<> __first,move_iterator<> __last,basic_string<> *__result);
bool std::operator!=<>(move_iterator<> *__x,move_iterator<> *__y);
move_iterator<> * __thiscall std::move_iterator<>::operator++(move_iterator<> *this);
reference __thiscall std::move_iterator<>::operator*(move_iterator<> *this);
void std::_Construct<>(basic_string<> *__p);
basic_string<> * std::forward<>(type *__t);
bool std::operator==<>(move_iterator<> *__x,move_iterator<> *__y);
iterator_type __thiscall std::move_iterator<>::base(move_iterator<> *this);
void __thiscall ClienteRed::ClienteRed(ClienteRed *this);
void __thiscall ClienteRed::~ClienteRed(ClienteRed *this,int __in_chrg);
bool __thiscall ClienteRed::conectar(ClienteRed *this,string *ip,int puerto);
bool __thiscall ClienteRed::enviarPeticion(ClienteRed *this,string *ip_servidor);
string * __thiscall ClienteRed::recibirRespuesta(string *__return_storage_ptr__,ClienteRed *this);
void _fini(void);
int * __errno_location(void);
uint16_t htons(uint16_t __hostshort);
istream * getline<char,std::char_traits<char>,std::allocator<char>>(istream * param_1, string * param_2);
int socket(int __domain, int __type, int __protocol);
ssize_t recv(int __fd, void * __buf, size_t __n, int __flags);
undefined __throw_bad_alloc(void);
undefined __cxa_begin_catch();
undefined c_str(void);
undefined string(string * this, string * param_1);
ostream * endl<char,std::char_traits<char>>(ostream * param_1);
ssize_t send(int __fd, void * __buf, size_t __n, int __flags);
undefined __throw_length_error(char * param_1);
undefined string(string * this, string * param_1);
undefined __throw_invalid_argument(char * param_1);
undefined ~string(string * this);
undefined size(void);
undefined stringstream(stringstream * this);
undefined __libc_start_main();
undefined ~stringstream(stringstream * this);
undefined __throw_bad_array_new_length(void);
int connect(int __fd, sockaddr * __addr, socklen_t __len);
ostream * operator<<(ostream * param_1, string * param_2);
void operator.delete(void * param_1);
undefined begin(void);
undefined operator+=(string * this, char * param_1);
undefined str(void);
ostream * operator<<(ostream * param_1, char * param_2);
void * operator.new(ulong param_1);
undefined operator<<(void * this, _func_ostream_ptr_ostream_ptr * param_1);
undefined operator[](ulong param_1);
undefined __stack_chk_fail();
undefined operator=(string * this, string * param_1);
bool operator.cast.to.bool(ios * this);
undefined string(string * this, char * param_1, allocator * param_2);
undefined string(string * this);
undefined __throw_out_of_range(char * param_1);
undefined __cxa_rethrow();
undefined length(void);
undefined ios_base_library_init(void);
undefined stringstream(stringstream * this, string * param_1, _Ios_Openmode param_2);
undefined __cxa_end_catch();
undefined __gxx_personality_v0();
undefined empty(void);
undefined operator<<(void * this, int param_1);
undefined _ITM_deregisterTMCloneTable();
undefined _Unwind_Resume();
istream * getline<char,std::char_traits<char>,std::allocator<char>>(istream * param_1, string * param_2, char param_3);
undefined end(void);
undefined __gmon_start__();
int inet_pton(int __af, char * __cp, void * __buf);
undefined _ITM_registerTMCloneTable();
int close(int __fd);
undefined __isoc23_strtol();
undefined __cxa_finalize();

