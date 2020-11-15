#include "gtest/gtest.h"

#include "calc.h"

TEST(Calc, Ln)
{
    EXPECT_DOUBLE_EQ(calc_ln(7.38905609893065022723), 2) << "log == 2";
}