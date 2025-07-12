#include "pch.h"

#define BOOST_TEST_MODULE TestExample

BOOST_AUTO_TEST_CASE(ExampleSuccess)
{
	bool value = true;

	BOOST_CHECK_EQUAL(true, value);
}