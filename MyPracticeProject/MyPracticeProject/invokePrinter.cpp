#include <iostream>
#include "Printer.h"

int main() {

	Printer myPrinter("HP DeskJet 1234", 10);
	try {
		myPrinter.Print("Hello, my name is Chee Wai. I am a Software Engineer");
		myPrinter.Print("Hello, my name is Chee Wai. I am a Software Engineer");
		myPrinter.Print("Hello, my name is Chee Wai. I am a Software Engineer");
	}
	catch (const char* _txtException) {
		std::cout << "Exception: " << _txtException << std::endl;
	}
	//catch (int exCode) {
	//	std::cout << "Exception: " << exCode << std::endl;
	//}
	catch (...) { // ... will handle any type of exception
		std::cout << "Exception happened! " << std::endl;
	}
}