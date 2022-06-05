#include "MinMax.h"
#include <iostream>

void MinMax::getValue() {
	std::cout << "Enter A: ";
	std::cin >> val_A;
	std::cout << "Enter B: ";
	std::cin >> val_B;
}

void MinMax::checkMax() {
	if (val_A > val_B)
	{
		std::cout << "A is max" << std::endl;
	}
	else {
		std::cout << "B is max" << std::endl;
	}
}