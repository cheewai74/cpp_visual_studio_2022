#pragma once
#include "A.h"
#include "BB.h"
#include <iostream>

class C :
    public A, public BB
{
    int z;

public:

    void getZ() {
        std::cout << "Enter z: " << std::endl;
        std::cin >> z;
    }

    void showZ() {
        std::cout << "\n z : " << z << std::endl;
    }
};

