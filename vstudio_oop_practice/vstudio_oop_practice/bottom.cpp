#include "bottom.h"
#include <iostream>

void bottom::cube() {
	square();
	c = b * a;
	std::cout << "\n\nCube ::: " << c << std::endl;
}