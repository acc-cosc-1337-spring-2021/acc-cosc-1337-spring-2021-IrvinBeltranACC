#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "variables.h"


TEST_CASE("Test get_sales_tax_amount(10)")
{
	REQUIRE(get_sales_tax_amount(10)==.675);
}

TEST_CASE("Test get_sales_tax_amount(20)")
{
	REQUIRE(get_sales_tax_amount(20)==1.35);
}

TEST_CASE("Test get_tip_amount(20, 15%)")
{
	REQUIRE(get_tip_amount(20,.15)==3);
}

TEST_CASE("Test get_tip_amount(20, 20%)")
{
	REQUIRE(get_tip_amount(20,.2)==4);
}