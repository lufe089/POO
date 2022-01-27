//
// Created by lufe0 on 24/10/2021.
//

#include "Calculator.h"

int Calculator::add(int value1, int value2){
    return value1 + value2;
}

int Calculator::add(int value1, int value2, int value3){
    //return value1 + value2 + value3;
    return Calculator::add(value1,value2) + value3;
}

int Calculator::substract(int value1, int value2){
    // TO avoid negative numbers
    if (value1 > value2) {
        return value1 - value2;
    }else{
        return value2 - value1;
    }
}
int Calculator::multiply(int value1, int value2){
    return value1* value2;
}
