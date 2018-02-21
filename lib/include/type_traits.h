#ifndef _SOAP_TYPE_TRAITS_H
#define _SOAP_TYPE_TRAITS_H

#include <soap.h>

SOAP_BEGIN

template<typename... Args>
using void_t = void;

template<class T, T v>
struct constant {
  inline static constexpr T value = v;
  using value_type = T;
};


struct true_type : public constant<bool, true>
{};

struct false_type : public constant<bool, false>
{};


template<bool condition, typename when_true, typename when_false>
struct conditional {
  using type = when_false;
};

template<bool condition, typename when_true, typename when_false>
struct conditional<true, when_true, when_false> {
  using type = when_true;
};

/* *** Remove qualifier *** */
template<typename T>
struct remove_const {
  using type = T;
};

template<typename T>
struct remove_const<const T> {
  using type = T;
};

template<typename T>
using remove_const_t = typename remove_const<T>::type;

template<typename T>
struct remove_volatile {
  using type = T;
};

template<typename T>
struct remove_volatile<volatile T> {
  using type = T;
};

template<typename T>
using remove_volatile_t = typename remove_volatile<T>::type;

template<typename T>
struct remove_cv {
  using type = remove_volatile_t<remove_const_t<T>>;
};

template<typename T>
using remove_cv_t = typename remove_cv<T>::type;

/* *** Check qualifier *** */
template<typename T>
struct is_const : public false_type
{};

template<typename T>
struct is_const<const T> : public true_type
{};

template<typename T>
inline constexpr bool is_const_v = is_const<T>::value;

template<typename T>
struct is_volatile : public false_type
{};

template<typename T>
struct is_volatile<volatile T> : public true_type
{};

template<typename T>
inline constexpr bool is_volatile_v = is_volatile<T>::value;










SOAP_END


#endif
