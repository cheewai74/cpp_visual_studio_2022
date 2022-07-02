#pragma once
#include "Point.h"

class Rectangle1
{
private:
	Point upperLeft;
	Point upperRight;
	Point lowerLeft;
	Point lowerRight;

	int top;
	int left;
	int bottom;
	int right;

public:

	Rectangle1(int newTop, int newLeft, int newBottom, int newRight);
	~Rectangle1();

	const int getTop();
	const int getLeft();
	const int getBottom();
	const int getRight();

	const Point getUpperLeft();
	const Point getLowerLeft();
	const Point getUpperRight();
	const Point getLowerRight();

	void setUpperLeft(Point location);
	void setLowerLeft(Point location);
	void setUpperRight(Point location);
	void setLowerRight(Point location);

	void setTop(int newTop);
	void setLeft(int newLeft);
	void setBottom(int newBottom);
	void setRight(int newRight);

	const int getArea();

};
