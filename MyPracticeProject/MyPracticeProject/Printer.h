#pragma once
#include <iostream>
#include <string>

class Printer {

	std::string _name;
	int _availablePaper = 0;


public:

	Printer(std::string name, int paper);
	void Print(std::string txtDoc);

};

