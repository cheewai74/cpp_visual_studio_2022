#include "Vector.h"
#include <iostream>

Vector::Vector(std::vector<int> newVector) {
	myVec = newVector;
}

void Vector::print() {

	for (int i=0; i < myVec.size(); i++) {
		std::cout << myVec[i] << std::endl;
	}

}