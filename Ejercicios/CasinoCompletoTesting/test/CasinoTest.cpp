//
// Created by lufe0 on 25/10/2021.
//

#include "gtest/gtest.h"
#include "../src/Model/Casino.h"

TEST(Casino, convertirPesosAGonzos){   //Arrange section
    float pesos = 10000;

    //Act section
    Casino casino;
    float gonzos = casino.convertirPesosAGonzos(pesos);

    //Assert section
    EXPECT_EQ(10,gonzos);
}

