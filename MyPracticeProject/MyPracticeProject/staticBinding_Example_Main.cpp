#include <iostream>

float sumNumbers(float a, float b) {
	return a + b;
}

float sumNumbers(float a, float b, float c) {
	return a + b + c;
}

int main() {

	std::cout << sumNumbers(1, 2) << std::endl;
	std::cout << sumNumbers(1, 2, 3) << std::endl;
}