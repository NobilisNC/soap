#ifndef _SOAP_DEFS_H
#define _SOAP_DEFS_H

#define SOAP_NAMESPACE soap
#define SOAP_BEGIN  namespace SOAP_NAMESPACE {
#define SOAP_END    }
#define USING_SOAP_NAMESPACE using namespace SOAP_NAMESPACE;

using i8 = char;
static_assert(sizeof(i8) == 1, "Size of i8 is not 1 byte");
using i16 = short int;
static_assert(sizeof(i16) == 2, "Size of i16 is not 2 bytes");
using i32 = int;
static_assert(sizeof(i32) == 4, "Size of i32 is not 4 bytes");
using i64 = long int;
static_assert(sizeof(i64) == 8, "Size of i64 is not 8 bytes");

using u8 = unsigned char;
static_assert(sizeof(u8) == 1, "Size of u8 is not 1 byte");
using u16 = unsigned short int;
static_assert(sizeof(u16) == 2, "Size of u16 is not 2 bytes");
using u32 = unsigned int;
static_assert(sizeof(u32) == 4, "Size of u32 is not 4 bytes");
using u64 = unsigned long int;
static_assert(sizeof(u64) == 8, "Size of u64 is not 8 bytes");

using f32 = float;
static_assert(sizeof(f32) == 4, "Size of f32 is not 4 bytes");
using f64 = double;
static_assert(sizeof(f64) == 8, "Size of u64 is not 8 bytes");


#endif
