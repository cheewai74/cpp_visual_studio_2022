#pragma once
#include "A.h"

class B :
    public A
{
    int y;

public:
    void getY();
    void showY();
    void square();
};

