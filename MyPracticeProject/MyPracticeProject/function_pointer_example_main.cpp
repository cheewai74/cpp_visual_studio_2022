/*
* 
* We can call the function with the help of a function pointer 
* by simply using the name of the function pointer.
*
* Syntax:
* int (*FuncPtr) (int,int);  
* void(*ptr)(char*);
* 
*/
#include <iostream>

int add(int b, int c) {
	return b + c ;
}

void printname(char *name) {
	std::cout << "Name is : " << name << std::endl;
}

void func1() {
	std::cout << "func1 is called";
}

// Passing a function
void func2(void (* _funcptr)()) {
	_funcptr();
}

int main() {

	//std::cout << "Address of a main function " << &main << std::endl;

	//int(*funcPtr)(int, int);
	//funcPtr = add;
	//int sum = funcPtr(5, 5);
	//std::cout << "Sum of 5 + 5 = " << sum << std::endl;

	char s[20]; // array declaration.
	void(*ptr)(char*); // function pointer declaration 
	ptr = printname;  // storing the address of printname in ptr. 
	std::cout << "Enter the name of the person: " << std::endl;
	std::cin >> s;
	std::cout << s << std::endl;
	ptr(s); // callinng printname function


	// Passing a function pointer as a parameter
	func2(func1);







}