#include <iostream>

auto findArea(float length, float width, float height) {
	return length * width * height;
}

int main() {
	auto length = 50.0;
	auto width = 30.0;
	auto height = 3.5;

	auto area = findArea(length, width, height);
	std::cout << " Area: " << area << std::endl;

}