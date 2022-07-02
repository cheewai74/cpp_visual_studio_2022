#include <iostream>
#include "Tricycle.h"

Tricycle::Tricycle(int initialSpeed) {
	setSpeed(initialSpeed);
}

int Tricycle::getSpeed() {
	return speed;
}

void Tricycle::setSpeed(int newSoeed) {
	if (newSoeed >= 0) {
		speed = newSoeed;
	}
}

void Tricycle::pedal() {
	setSpeed(speed + 1);
	std::cout << "\nPedaling tricycle speed " << speed << "mph\n";

}

void Tricycle::brake() {
	setSpeed(speed - 1);
	std::cout << "\nBraking tricycle speed " << speed << "mph\n";
}

Tricycle::~Tricycle() {
	// Do Nothing
}