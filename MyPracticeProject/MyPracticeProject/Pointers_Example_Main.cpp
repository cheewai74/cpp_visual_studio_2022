#include <iostream>

int main() {

	int x = 7;
	// int y = 42;
	int *ip = &x; // Deferencing the address that store the value x.
	int& y = x;

	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of *ip is %d\n\n", *ip);

	//x = 73;
	//printf("The value of *ip is %d\n\n", *ip);

	//ip = &y;
	//printf("The value of *ip is %d\n\n", *ip);

	y = 73;
	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of *ip is %d\n\n", *ip);

	int z= 42;
	ip = &z;
	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of *ip is %d\n\n", *ip);

	*ip = 103;
	y = 142;
	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of z is %d\n\n", z);


}