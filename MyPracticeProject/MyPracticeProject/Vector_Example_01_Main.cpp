/*
  Reference: https://www.freecodecamp.org/news/c-vector-std-pattern-vector-in-cpp-with-example-code/
*/
#include <iostream>
#include <vector> // Are simple and effective way of storing data and keeping it organized. They are a template class in the STL.

int main() {

	// 1. Create a vector name prices.
	// 2. It will hold floating point numbers
	// 3. The initial size of the vector is set to 10
	std::vector<double> prices(10);

	// Using .size() function to return the number of elements contained in a vector
	std::cout << prices.size() << std::endl;

	// Note: Vectors are dynamic containers of elements and their size can grow throughout 
	//       the life of a program, depending on it's needs.
	// 1. To add items one at a time to the end of a vector, you use the .push_back() method.

	std::vector<std::string> names;

	names.push_back("Sam");
	names.push_back("Tim");
	names.push_back("John");
	names.push_back("Amy");

	std::cout << names.size() << std::endl;

	std::cout << names[0] << std::endl;
	std::cout << names[1] << std::endl;
	std::cout << names[2] << std::endl;
	std::cout << names[3] << std::endl;


	// remove the last item
	names.pop_back();

	std::cout << names.size() << std::endl;

	std::cout << names[0] << std::endl;
	std::cout << names[1] << std::endl;
	std::cout << names[2] << std::endl;

}