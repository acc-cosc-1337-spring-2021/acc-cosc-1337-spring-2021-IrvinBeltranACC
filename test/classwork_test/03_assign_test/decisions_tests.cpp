#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decision.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_letter_grade_using_if function")
{
	REQUIRE(get_letter_grade_using_if(67)== "D");
	REQUIRE(get_letter_grade_using_if(100)== "A");
	REQUIRE(get_letter_grade_using_if(101)== "Out of range");
	REQUIRE(get_letter_grade_using_if(1)== "F");
	REQUIRE(get_letter_grade_using_if(-100)== "Out of range");
	REQUIRE(get_letter_grade_using_if(59.111)== "F");
	REQUIRE(get_letter_grade_using_if(59.999)== "F");

}

TEST_CASE("Verify get_letter_grade_using_swtich function")
{
	REQUIRE(get_letter_grade_using_switch(60)== "D");
	REQUIRE(get_letter_grade_using_switch(100)== "A");
	REQUIRE(get_letter_grade_using_switch(111)== "Out of range");
	REQUIRE(get_letter_grade_using_switch(23)== "F");
}