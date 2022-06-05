#include <iostream>
#include "MinMax.h"		// Class with no argument example.
#include "Line.h"		// inLine example.
#include "Shape.h"		// Function Overloading.

int main() {

	//  -- CTRL KC to block comment CTRL KU to block uncomment
	
	// =========  Class with no argument example. ===========
	//MinMax tm;
	//std::cout << "Class with no argument example. " << std::endl;
	//tm.getValue();
	//tm.checkMax();

	// ==========  inLine example. =============
	//Line obj;
	//float val1, val2;
	//std::cout << "inLine Function Example. " << std::endl;
	//std::cout << "Enter 2 values: " << std::endl;
	//std::cin >> val1 >> val2;
	//std::cout << "\nMultiplication value is: " << obj.mul(val1, val2) << std::endl;
	//std::cout << "Cube value is: " << obj.cube(val1) << "\t" << obj.cube(val2) << std::endl;

	// ========= Function Overloading =============
	float radius;
	int width, height;
	Shape s;
	std::cout << "Enter the Radius of Circle: " << std::endl;
	std::cin >> radius;
	std::cout << "Area of Circle: " << s.area(radius) << std::endl;
	std::cout << "Enter height and width of Rectangle: " << std::endl;
	std::cin >> width >> height;
	std::cout << "Area of Rectangle: " << s.area(width, height) << std::endl;


}