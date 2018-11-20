#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <pqrs/osx/iokit_types.hpp>
#include <unordered_map>

TEST_CASE("iokit_hid_location_id") {
  pqrs::osx::iokit_hid_location_id value1(1);
  pqrs::osx::iokit_hid_location_id value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<pqrs::osx::iokit_hid_location_id, bool> map;
  map[value1] = true;
}

TEST_CASE("iokit_hid_product_id") {
  pqrs::osx::iokit_hid_product_id value1(1);
  pqrs::osx::iokit_hid_product_id value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<pqrs::osx::iokit_hid_product_id, bool> map;
  map[value1] = true;
}

TEST_CASE("iokit_hid_usage_page") {
  pqrs::osx::iokit_hid_usage_page value1(1);
  pqrs::osx::iokit_hid_usage_page value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<pqrs::osx::iokit_hid_usage_page, bool> map;
  map[value1] = true;
}

TEST_CASE("iokit_hid_usage") {
  pqrs::osx::iokit_hid_usage value1(1);
  pqrs::osx::iokit_hid_usage value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<pqrs::osx::iokit_hid_usage, bool> map;
  map[value1] = true;
}

TEST_CASE("iokit_hid_vendor_id") {
  pqrs::osx::iokit_hid_vendor_id value1(1);
  pqrs::osx::iokit_hid_vendor_id value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<pqrs::osx::iokit_hid_vendor_id, bool> map;
  map[value1] = true;
}

TEST_CASE("iokit_registry_entry_id") {
  pqrs::osx::iokit_registry_entry_id value1(1);
  pqrs::osx::iokit_registry_entry_id value2(2);

  REQUIRE(value1 != value2);
  REQUIRE(value1 < value2);

  std::unordered_map<pqrs::osx::iokit_registry_entry_id, bool> map;
  map[value1] = true;
}
