#include "gtest/gtest.h"

#include "calc.h"

TEST(Calc, Log)
{
    EXPECT_EQ(calc_log(100), 2) << "log 100 == 2";
}