#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle():length(0.0), breath(0.0){}

void Rectangle::get_data() {
	std::cout << "Enter length: " << std::endl;
	std::cin >> length;
	std::cout << "Enter breath: " << std::endl;
	std::cin >> breath;
}

float Rectangle::area_calc() {
	return Area::area_calc(length, breath);
}

float Rectangle::peri_calc() {
	return Perimeter::peri_calc(length, breath);
}
