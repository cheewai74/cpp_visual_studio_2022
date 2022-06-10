#pragma once
#include "A.h"
#include "BB.h"
#include <iostream>

class C :
    public A, public BB
{
    int z;

public:

    void getZ();
    void showZ();
};

