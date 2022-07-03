#include "SimpleCat.h"
#include <iostream>

SimpleCat::SimpleCat() {
	std::cout << "Constructor called\n";
	itsAge = 2;
}

SimpleCat::~SimpleCat() {
	std::cout << "Destructor called\n";
}

const int SimpleCat::GetAge() {
	return itsAge;
}

void SimpleCat::setAge(int age) {
	itsAge = age;
}
