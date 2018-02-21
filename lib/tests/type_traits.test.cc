#include <catch.hpp>
#include <type_traits.h>

USING_SOAP_NAMESPACE

TEST_CASE("Type traits") {
  REQUIRE(constant<i32, 5>::value == 5);
  REQUIRE(true_type::value == true);
  REQUIRE(false_type::value == false);

  remove_const<const i32>::type var;
  var = 4;
  REQUIRE(var == 4);

  REQUIRE(is_const<const i8>::value);
  REQUIRE(!is_const_v<f32>);

  REQUIRE(!is_const_v<remove_cv_t<volatile const f64>>);
  REQUIRE(!is_const_v<remove_cv_t<const volatile f64>>);

}
