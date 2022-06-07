#include <iostream>
#include <fstream>
#include <string> // used getline 

int main() {

	std::fstream myfile;
	//myfile.open("test.txt", std::ios::out); // write
	//if (myfile.is_open()) {
	//	myfile << "Hello\n";
	//	myfile << "This is second line.\n";
	//	myfile.close();
	//}

	//myfile.open("test.txt", std::ios::app); // Append 
	//if (myfile.is_open()) {
	//	myfile << "This is third line.\n";
	//	myfile.close();
	//}

	myfile.open("test.txt", std::ios::in); // read
	if (myfile.is_open()) {
		std::string line;
		while (getline(myfile, line)) {
			std::cout << line << std::endl;
		}
		myfile.close();
	}
}