#include <iostream>

int main() {

	int myAge;				// a variable
	int *pAge = nullptr;	// a pointer

	myAge = 5;
	pAge = &myAge;			// assign address of myAge to pAge
	std::cout << "myAge: " << myAge << std::endl;
	std::cout << "*pAge: " << *pAge << std::endl;

	std::cout << "*pAge = 7 \n";
	*pAge = 7; // sets myAge to 7
	std::cout << "myAge: " << myAge << std::endl;
	std::cout << "*pAge: " << *pAge << std::endl;

	std::cout << "*pAge = 9 \n";
	*pAge = 9; // sets myAge to 9
	std::cout << "myAge: " << myAge << std::endl;
	std::cout << "*pAge: " << *pAge << std::endl;





}