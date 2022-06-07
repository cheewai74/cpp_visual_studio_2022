#include "B.h"
#include <iostream>

void B::getY() {
	std::cout << "Enter y: " << std::endl;
	std::cin >> y;
}

void B::showY() {
	std::cout << "\n y: " << y << std::endl;
}