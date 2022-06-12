/*
  Reference: 
  
  https://www.freecodecamp.org/news/c-vector-std-pattern-vector-in-cpp-with-example-code/

  https://www.freecodecamp.org/news/cpp-vector-how-to-initialize-a-vector-in-a-constructor/

  vector <data_type> vector_name
*/
#include <iostream>
#include <vector> // Are simple and effective way of storing data and keeping it organized. They are a template class in the STL.

int main() {

	// ============  Example 1 =====================================

	// 1. Create a vector name prices.
	// 2. It will hold floating point numbers
	// 3. The initial size of the vector is set to 10
	std::vector<double> prices(10);

	// Using .size() function to return the number of elements contained in a vector
	std::cout << prices.size() << std::endl;


	// ============  Example 2 =====================================

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


	// ============  Example 3 =====================================
	std::vector<int> my_vector;
	my_vector.push_back(5);
	my_vector.push_back(10);
	my_vector.push_back(15);

	for (int x : my_vector) {
		std::cout << "\nx ::: " << x << std::endl;
	}

	// ============  Example 4 =====================================
	std::vector<int> my_vector1{ 5, 10, 15 };
	for (int y : my_vector1) {
		std::cout << "\ny ::: " << y << std::endl;
	}

	// ============  Example 5 =====================================
	// Initialize a Vector From an Array in C++

	int myArray[] = {5, 10, 15};
	std::vector<int> my_vector2{ std::begin(myArray), std::end(myArray)};
	for (int z : my_vector2) {
		std::cout << "\nz ::: " << z << std::endl;
	}

	// ============  Example 6 =====================================
	int num_of_items = 5;
	std::vector<int> my_vector3(num_of_items, 2);
	for (int w : my_vector3) {
		std::cout << "\nw ::: " << w << std::endl;
	}


}