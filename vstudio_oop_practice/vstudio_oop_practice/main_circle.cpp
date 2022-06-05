/**
	this pointer example.
*/
#include <iostream>
#include "Circle.h"

int main() {

	Circle c1;
	c1.setRadius(10);

	float a = c1.area();
	std::cout << "\n Radius: " << c1.getRadius() << std::endl;
	std::cout << "\n Area of Circle: " << a << std::endl;


}