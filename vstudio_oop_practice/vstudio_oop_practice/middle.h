#pragma once
#include "top.h"

// First level inheritance
class middle :
    public top
{
public :
    int b;
    void square();
};

