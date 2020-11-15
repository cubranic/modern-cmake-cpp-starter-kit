#include "gtest/gtest.h"

#include "calc.h"

TEST(Calc, Log2)
{
    EXPECT_EQ(calc_log2(1024), 10) << "log2 1024 == 10";
}