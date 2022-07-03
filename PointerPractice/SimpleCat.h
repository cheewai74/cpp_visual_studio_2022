#pragma once
class SimpleCat
{
private:
	int itsAge;
public:
	SimpleCat();
	~SimpleCat();
	const int GetAge();
	void setAge(int age);
};

