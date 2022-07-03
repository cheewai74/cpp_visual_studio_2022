#include <iostream>
#include "SimpleCat.h"

int main() {

	std::cout << "SimpleCat Frisky...\n";
	SimpleCat Frisky;

	std::cout << "SimpleCat *pRags = new SimpleCat ...\n";
	SimpleCat* pRags = new SimpleCat;
	
	std::cout << "delete pRags ....\n";
	delete pRags;

	std::cout << "Exiting, watch Frisky go ....\n";
}