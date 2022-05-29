#include <iostream>
#include "Myclass.h";

int main() {

	MyClass myObj; // Object Created

	// Access attributes and set values
	myObj.myNumber = 15;
	myObj.myString = "Nice Try at ";

	//Print values
	std::cout << myObj.myNumber << std::endl;
	std::cout << myObj.myString << std::endl;


}
