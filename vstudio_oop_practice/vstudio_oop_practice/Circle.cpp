#include "Circle.h"
#define PI 3.14

void Circle::setRadius(float radius) {
	this->radius = radius;
}

float Circle::getRadius() {
	return this->radius;
}

float Circle::area() {
	return PI * radius * radius;
}