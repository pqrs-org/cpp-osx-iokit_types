#include <catch2/catch.hpp>

#include <pqrs/osx/iokit_types/extra/boost.hpp>

TEST_CASE("boost") {
  {
    pqrs::osx::iokit_hid_country_code::value_t v(100);
    REQUIRE(std::hash<pqrs::osx::iokit_hid_country_code::value_t>{}(v) ==
            pqrs::osx::hash_value(v));
  }

  {
    pqrs::osx::iokit_hid_location_id v(100);
    REQUIRE(std::hash<pqrs::osx::iokit_hid_location_id>{}(v) ==
            pqrs::osx::hash_value(v));
  }

  {
    pqrs::osx::iokit_hid_product_id v(100);
    REQUIRE(std::hash<pqrs::osx::iokit_hid_product_id>{}(v) ==
            pqrs::osx::hash_value(v));
  }

  {
    pqrs::osx::iokit_hid_usage v(100);
    REQUIRE(std::hash<pqrs::osx::iokit_hid_usage>{}(v) ==
            pqrs::osx::hash_value(v));
  }

  {
    pqrs::osx::iokit_hid_usage_page v(100);
    REQUIRE(std::hash<pqrs::osx::iokit_hid_usage_page>{}(v) ==
            pqrs::osx::hash_value(v));
  }

  {
    pqrs::osx::iokit_hid_vendor_id v(100);
    REQUIRE(std::hash<pqrs::osx::iokit_hid_vendor_id>{}(v) ==
            pqrs::osx::hash_value(v));
  }

  {
    pqrs::osx::iokit_keyboard_type v(100);
    REQUIRE(std::hash<pqrs::osx::iokit_keyboard_type>{}(v) ==
            pqrs::osx::hash_value(v));
  }

  {
    pqrs::osx::iokit_registry_entry_id v(100);
    REQUIRE(std::hash<pqrs::osx::iokit_registry_entry_id>{}(v) ==
            pqrs::osx::hash_value(v));
  }
}
