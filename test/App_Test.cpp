#include "App.hpp"
#define BOOST_TEST_MODULE MyTest
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(IsFour)
{
  BOOST_CHECK_EQUAL(getRandomNumber(), 4);
}
