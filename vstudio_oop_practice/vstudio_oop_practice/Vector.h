#pragma once
#include <vector>
#include <iostream>

class Vector
{
	std::vector<int> myVec;

public:

	Vector(std::vector<int> newVector);
	void print();
};

