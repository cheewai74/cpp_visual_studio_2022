#include <iostream>
#include "Food.h"

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

void GetPizzaRecipe() {
	std::cout << "To make pizza you need...." << std::endl;
}