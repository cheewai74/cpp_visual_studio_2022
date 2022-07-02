#include <iostream>
#include "Rectangle1.h"

Rectangle1::Rectangle1(int newTop, int newLeft, int newBottom, int newRight) {

	top = newTop;
	left = newLeft;
	bottom = newBottom;
	right = newRight;

	upperLeft.setX(left);
	upperLeft.setY(top);

	upperRight.setX(right);
	upperRight.setY(top);

	lowerLeft.setX(left);
	lowerLeft.setY(bottom);

	lowerRight.setX(right);
	lowerRight.setY(bottom);



}

Rectangle1::~Rectangle1() {}

const int Rectangle1::getTop() {
	return top;
}

const int Rectangle1::getLeft() {
	return left;
}

const int Rectangle1::getBottom() {
	return bottom;
}

const int Rectangle1::getRight() {
	return right;
}

const Point Rectangle1::getUpperLeft() {
	return upperLeft;
}

const Point Rectangle1::getLowerLeft() {
	return lowerLeft;
}

const Point Rectangle1::getUpperRight() {
	return upperRight;
}

const Point Rectangle1::getLowerRight() {
	return lowerRight;
}

void Rectangle1::setUpperLeft(Point location) {
	upperLeft = location;
	upperRight.setY(location.getY());
	lowerLeft.setX(location.getX());
	top = location.getY();
	left = location.getX();
}

void Rectangle1::setLowerLeft(Point location) {
	lowerLeft = location;
	lowerRight.setY(location.getY());
	upperLeft.setX(location.getX());
	bottom = location.getY();
	left = location.getX();
}

void Rectangle1::setUpperRight(Point location) {
	upperRight = location;
	upperLeft.setX(location.getY());
	lowerRight.setX(location.getX());
	top = location.getY();
	right = location.getX();
}

void Rectangle1::setLowerRight(Point location) {
	lowerRight = location;
	lowerLeft.setY(location.getY());
	upperRight.setX(location.getX());
	bottom = location.getY();
	right = location.getX();
}

void Rectangle1::setTop(int newTop) {
	top = newTop;
	upperLeft.setY(top);
	upperRight.setY(top);
}

void Rectangle1::setLeft(int newLeft) {
	left = newLeft;
	upperLeft.setX(left);
	lowerLeft.setX(left);
}

void Rectangle1::setBottom(int newBottom) {
	bottom = newBottom;
	lowerLeft.setY(bottom);
	lowerRight.setY(bottom);
}

void Rectangle1::setRight(int newRight) {
	right = newRight;
	upperRight.setX(right);
	lowerRight.setX(right);
}

const int Rectangle1::getArea() {
	int width = right - left;
	int height = top - bottom;
	return width * height;
}