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

}