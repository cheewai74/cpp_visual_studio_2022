#include <iostream>

int main() {

	// Program for swapping values of 2 variables
	int a = 20;
	int b = 10; 

	// Solution 1
	//int temp = a;
	//a = b;
	//b = temp;

	// Solution 2
	a = a + b; // 30
	b = a - b; // 20
	a = a - b; // 10

	std::cout << " a = " << a << " b = " << b << std::endl;

}