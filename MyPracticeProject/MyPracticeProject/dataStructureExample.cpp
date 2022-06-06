#include <iostream>

struct Smartphone{
	std::string name;
	int storageSpace;
	std::string color;
	float price;
};

struct Person {
	std::string name;
	int age;
	Smartphone smartphone;
};

void printSmartphoneInfo(Smartphone smartphone) {
	std::cout << "name: "<< smartphone.name << std::endl;
	std::cout << "storage space: " << smartphone.storageSpace << std::endl;
	std::cout << "color: " << smartphone.color << std::endl;
	std::cout << "price: " << smartphone.price << std::endl;
}

void printPersonInfo(Person person) {

	std::cout << "name: " << person.name << std::endl;
	std::cout << "age:" << person.age << std::endl;
	printSmartphoneInfo(person.smartphone);
}


int main() {

	Smartphone smartphone;
	smartphone.name = "iPhone 12";
	smartphone.storageSpace = 32;
	smartphone.color = "black";
	smartphone.price = 999.99;


	printSmartphoneInfo(smartphone);

	Smartphone smartphone2;
	smartphone2.name = "Samsung Galaxy S21";
	smartphone2.storageSpace = 64;
	smartphone2.color = "gray";
	smartphone2.price = 888.88;

	printSmartphoneInfo(smartphone2);

	Person userA;
	userA.name = "Moses Wong";
	userA.age = 48;
	userA.smartphone = smartphone2;
	printPersonInfo(userA);
}