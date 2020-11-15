#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "calc.h"

TEST(Calc, Sqrt)
{
  EXPECT_THAT(calc_sqrt(4), ::testing::Eq(2));
  // ASSERT_THAT(0, ::testing::Eq(1));
}