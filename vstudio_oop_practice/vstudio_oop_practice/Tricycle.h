#pragma once
class Tricycle
{
private:
	int speed;

public:
	Tricycle(int speed);
	int getSpeed();
	void setSpeed(int speed);
	void pedal();
	void brake();
	~Tricycle();
};

