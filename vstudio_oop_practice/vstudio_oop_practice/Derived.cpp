#include "Derived.h"
#include <iostream>

void Derived::cube() {
	std::cout << "Cube of: " << val << " is " << val * val * val << std::endl;
}