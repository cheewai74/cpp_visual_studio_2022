#pragma once
#include "Area.h"
#include "Perimeter.h"

class Rectangle :
    private Area, private Perimeter
{
    float length, breath;

    public:
        Rectangle();
        void get_data();
        float area_calc();
        float peri_calc();
};

