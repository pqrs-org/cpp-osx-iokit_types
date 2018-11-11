#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <pqrs/osx/iokit_types.hpp>

TEST_CASE("iokit_registry_entry_id") {
  pqrs::osx::iokit_registry_entry_id id1(1);
  pqrs::osx::iokit_registry_entry_id id2(2);

  REQUIRE(id1 != id2);
  REQUIRE(id1 < id2);
}
