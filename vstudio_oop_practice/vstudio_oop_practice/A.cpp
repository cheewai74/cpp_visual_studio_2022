#include "A.h"
#include <iostream>

void A::getX()
{
	std::cout << "Enter x : " << std::endl;
	std::cin >> x ;
}

void A::showX()
{
	std::cout << "\n x : " << x << std::endl;
}