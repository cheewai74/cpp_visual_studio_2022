#include <iostream>
#include "Food.h"

// const char* RecommendMeAFood(char firstLetter);

int main() {

	// int age;
	// age = 25;
	std::cout << "Today I will eat " << RecommendMeAFood('c') << std::endl;
	GetPizzaRecipe();

}

/*
const char* RecommendMeAFood(char firstLetter) {
	if (firstLetter == 'a' || firstLetter == 'A')
		return "apple";
	else if (firstLetter == 'b' || firstLetter == 'B')
		return "banana";
	else if (firstLetter == 'c' || firstLetter == 'C')
		return "chocolate cake";
	else
		return "pizza";
}
*/