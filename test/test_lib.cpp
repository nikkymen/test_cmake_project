#include "catch.hpp"

#include "module.h"

TEST_CASE( "test_1" )
{
    std::string result = test::test_function();

    REQUIRE( result == "hello world" );
}

TEST_CASE( "test_2" )
{
    std::string result = test::test_function();

    REQUIRE( result == "hello world" );
}
