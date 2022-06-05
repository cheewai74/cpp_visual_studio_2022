#pragma once
class Line
{
public:

	//  Inline function is a function that is expanded in line when it is called. 
	inline float mul(float x, float y) {
		return (x * y);
	}

	inline float cube(float x) {
		return (x * x * x);
	}

};

