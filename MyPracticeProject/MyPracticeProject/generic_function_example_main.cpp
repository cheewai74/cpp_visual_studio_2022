#include <iostream>

// Generic data type.
template<typename T>

void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;

}

//void swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//
//}
//
//void swap(char& a, char& b) {
//	char temp = a;
//	a = b;
//	b = temp;
//}


int main() {


	int a = 5, b = 7;
	std::cout << a << " - " << b << std::endl;
	// swap(a, b);
	swap<int>(a, b);
	std::cout << a << " - " << b << std::endl;

	char c = 'c', d = 'd';
	std::cout << c << " - " << d << std::endl;
	//swap(c, d);
	swap<char>(c, d);
	std::cout << c << " - " << d << std::endl; 


}