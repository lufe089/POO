//
// Created by lufe0 on 24/10/2021.
//

#ifndef UNITTESTING_1_CALCULATOR_H
#define UNITTESTING_1_CALCULATOR_H


class Calculator {
public:
    int add(int value1, int value2);

    // Params
    int add(int value1, int value2, int value3);

    int add(int value1, float value2);

    // Params type
    int add(float value1, float value2);

    // Return type
    float add(int value1, int value2, int value3, int value4);

    int substract(int value1, int value2);
    int multiply(int value1, int value2);
};


#endif //UNITTESTING_1_CALCULATOR_H
