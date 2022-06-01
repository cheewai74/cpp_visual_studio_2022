#pragma once
#include <iostream>
#include <string>

class Printer {

	std::string _name;
	int _availablePaper = 0;


public:

	Printer(std::string name, int paper) {
		_name = name;
		_availablePaper = paper;
	}

	void Print(std::string txtDoc) {

		int requiredPaper = txtDoc.length() / 10;  // 40/10, required 4 sheets of paper.
		if (requiredPaper > _availablePaper)
			// throw "No paper";
			throw 101;

		std::cout << "Printing..." << txtDoc << std::endl;
		_availablePaper -= requiredPaper;
	}
};

