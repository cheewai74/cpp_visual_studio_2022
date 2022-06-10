#include "D.h"
#include <iostream>

D::D() {
	d = 10;
}

void D::cube() {
	getnumber();
	std::cout << "\nCube of the number :::" << (a * a * a);
	std::cout << "\n----------------------------------------";
}