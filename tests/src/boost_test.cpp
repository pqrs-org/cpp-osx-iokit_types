#include <catch2/catch.hpp>

#include <pqrs/osx/iokit_types/extra/boost.hpp>

TEST_CASE("boost") {
  REQUIRE(pqrs::osx::hash_value(pqrs::osx::iokit_hid_location_id(100)) !=
          pqrs::osx::hash_value(pqrs::osx::iokit_hid_location_id(0)));

  REQUIRE(pqrs::osx::hash_value(pqrs::osx::iokit_hid_product_id(100)) !=
          pqrs::osx::hash_value(pqrs::osx::iokit_hid_product_id(0)));

  REQUIRE(pqrs::osx::hash_value(pqrs::osx::iokit_hid_usage(100)) !=
          pqrs::osx::hash_value(pqrs::osx::iokit_hid_usage(0)));

  REQUIRE(pqrs::osx::hash_value(pqrs::osx::iokit_hid_usage_page(100)) !=
          pqrs::osx::hash_value(pqrs::osx::iokit_hid_usage_page(0)));

  REQUIRE(pqrs::osx::hash_value(pqrs::osx::iokit_hid_vendor_id(100)) !=
          pqrs::osx::hash_value(pqrs::osx::iokit_hid_vendor_id(0)));

  REQUIRE(pqrs::osx::hash_value(pqrs::osx::iokit_registry_entry_id(100)) !=
          pqrs::osx::hash_value(pqrs::osx::iokit_registry_entry_id(0)));
}
