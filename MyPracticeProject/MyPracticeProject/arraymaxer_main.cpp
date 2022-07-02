#include <iostream>

/**
* constexpr:
* 
* 1. funct must return a value
* 2. Must be a single expression than returns an expression
* 3. Must evaluate a const after substitution
*/
constexpr int getArraySize() {
	return 1024;
}

int main() {

	int  bolts[getArraySize()];
	int boltsSize = sizeof(bolts) / sizeof(bolts[0]);

	for (int i = 0; i < boltsSize; i++) {
		bolts[i] = i * boltsSize;
	}

	std::cout << " Value of bolts[10]: " << bolts[10] << std::endl;

	/**
	*  lambda expression does not have access to the variables defined in the scope that
	*  encloses the expression
	*  [] are called captured block.
	*/

	auto aarhus = []() {std::cout << "Solidum petit in profundis!" << std::endl; };
	aarhus();
	auto _aarhus = [] {std::cout << "Solidum petit in profundis!" << std::endl; };
	_aarhus();


	auto multiply = [](int x, int y) {std::cout << "Total: " << x * y << std::endl; };
	multiply(7, 17);

	auto _multiply = [](int x, int y) -> int {return x * y; };
	int sum = _multiply(7, 17);
	std::cout << "Total: " << sum << std::endl;

	// This code puts the capture block to use.
	int x = 7;
	auto __multiply = [x](int y) -> int { return x * y; };
	int _sum = __multiply(17);
	std::cout << "Total: " << _sum << std::endl;



}