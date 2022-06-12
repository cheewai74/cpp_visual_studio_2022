#include "middle.h"
#include <iostream>


void middle::square() {
	getdata();
	b = a * a;
	std::cout << "\n\nSquare Is ::::" << b << std::endl;
}