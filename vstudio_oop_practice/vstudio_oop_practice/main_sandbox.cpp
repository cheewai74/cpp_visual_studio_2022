#include <iostream>
#include "MinMax.h"		// Class with no argument example.
#include "Line.h"		// inLine example.

int main() {

	// Class with no argument example.

	MinMax tm;
	std::cout << "Class with no argument example. " << std::endl;
	tm.getValue();
	tm.checkMax();

	// inLine example.
	Line obj;
	float val1, val2;
	std::cout << "inLine Function Example. " << std::endl;
	std::cout << "Enter 2 values: " << std::endl;
	std::cin >> val1 >> val2;
	std::cout << "\nMultiplication value is: " << obj.mul(val1, val2) << std::endl;
	std::cout << "Cube value is: " << obj.cube(val1) << "\t" << obj.cube(val2) << std::endl;

}