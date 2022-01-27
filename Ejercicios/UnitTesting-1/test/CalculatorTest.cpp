//
// Created by lufe0 on 25/10/2021.
//

#include "gtest/gtest.h"
#include "../src/Calculator.h"

TEST(CalculatorTest, add){   //Arrange section
    int value1 = 5;
    int value2 = 10;
    int result = 0;

    //Act section
   Calculator myCalculator;
    result = myCalculator.add(value1, value2);

    //Assert section
    EXPECT_EQ(15,result);
}

TEST(CalculatorTest, addThreeValues){   //Arrange section
    int value1 = 5;
    int value2 = 10;
    int value3 = 15;
    int result = 0;

    //Act section
    Calculator myCalculator;
    result = myCalculator.add(value1, value2, value3);

    //Assert section
    EXPECT_EQ(15,result);
}

TEST(CalculatorTest, substractLowerNumber){
    int value1 = 5;
    int value2 = 10;
    int result = 0;

    //Act section
    Calculator myCalculator;
    result = myCalculator.substract(value1, value2);

    //Assert section
    EXPECT_EQ(5,result);
}

TEST(CalculatorTest, substractHighNumber){
    int value1 = 5;
    int value2 = 10;
    int result = 0;

    //Act section
    Calculator myCalculator;
    result = myCalculator.substract(value2, value1);

    //Assert section
    EXPECT_EQ(5,result);
}

TEST(CalculatorTest, multiply){
    int value1 = 5;
    int value2 = 10;
    int result = 0;

    //Act section
    Calculator myCalculator;
    result = myCalculator.multiply(value1, value2);

    //Assert section
    EXPECT_EQ(50,result);
}