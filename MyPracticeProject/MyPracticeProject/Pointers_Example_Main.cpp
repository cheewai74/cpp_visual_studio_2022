#include <iostream>

int main() {

	int x = 7;
	// int y = 42;
	
	// The asterisk (*) is used in declaring a pointer for simple purpose of 
	// indicating that it is a pointer. Don't confuse this with the dereference operator, 
	// which is used to obtain the value located at the specified address.
	int *ip = &x; 

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