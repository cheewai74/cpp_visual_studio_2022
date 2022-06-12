#pragma once
#include "middle.h"

// Second level inheritance
class bottom :
    public middle
{
public:
    int c;
    void cube();
};

