//
//  main.cpp
//  Tests
//
//  Created by MariyaShestakova on 5/28/19.
//  Copyright © 2019 MariyaShestakova. All rights reserved.
//

#include <iostream>
#include "MathLibStat.hpp"
#include <gtest/gtest.h>

TEST(sum, 3_sum_5_eq_8) {
    EXPECT_EQ(8, sum(3, 5));
}

TEST(minus, 8_minus_3_eq_5) {
    EXPECT_EQ(5, minus(8, 3));
}

TEST(multiply, 3_mult_3_eq_9) {
    EXPECT_EQ(9, multiply(3, 3));
}

TEST(divide, 9_divide_3_eq_3) {
    EXPECT_EQ(3, divide(9, 3));
}
