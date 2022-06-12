#include <iostream>

int main() {

	int var = 20;

	// The asterisk (*) is used in declaring a pointer for simple purpose of 
	// indicating that it is a pointer. Don't confuse this with the dereference operator, 
	// which is used to obtain the value located at the specified address.
	int *ptr;

	ptr = &var;  

	std::cout << "var : " << var << std::endl;
	std::cout << "ptr : " << ptr << std::endl;
	std::cout << "*ptr : " << *ptr << std::endl;

}