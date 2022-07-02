#include <iostream>

#include "MinMax.h"		// Class with no argument example.
#include "Line.h"		// inLine example.
#include "Shape.h"		// Function Overloading.

// ===== Inheritance =====
#include "Derived.h"    // Single Inheritance Example 1 (Base, Derived)
#include "B.h"			// Single Inheritance Example 2 (Base, Derived)

// ===== Multiple Inheritance =====
#include "Rectangle.h"  // Multiple Inheritance Example 1 
#include "C.h"			// Multiple Inheritance Example 2

// ===== Dynamic Binding =====
#include <list>
#include "Superuser.h"

// ===== Using Virtual keyword: Inheritance =====
#include "G.h"
#include "CC.h"

// ===== MultiLevel Inheritance  Example 1 =====
#include "bottom.h"

// ==========  Vector ============
#include "Vector.h"
#include <vector>

// ======= Tricycle ===========
#include "Tricycle.h"

#include "Rectangle1.h"

int main() {

	//  -- CTRL KC to block comment CTRL KU to block uncomment
	
	// =========  Class with no argument example. ===========
	//MinMax tm;
	//std::cout << "Class with no argument example. " << std::endl;
	//tm.getValue();
	//tm.checkMax();

	// ==========  inLine example. =============
	//Line obj;
	//float val1, val2;
	//std::cout << "inLine Function Example. " << std::endl;
	//std::cout << "Enter 2 values: " << std::endl;
	//std::cin >> val1 >> val2;
	//std::cout << "\nMultiplication value is: " << obj.mul(val1, val2) << std::endl;
	//std::cout << "Cube value is: " << obj.cube(val1) << "\t" << obj.cube(val2) << std::endl;

	// ========= Function Overloading ===========================================
	//float radius;
	//int width, height;
	//Shape s;
	//std::cout << "Enter the Radius of Circle: " << std::endl;
	//std::cin >> radius;
	//std::cout << "Area of Circle: " << s.area(radius) << std::endl;
	//std::cout << "Enter height and width of Rectangle: " << std::endl;
	//std::cin >> width >> height;
	//std::cout << "Area of Rectangle: " << s.area(width, height) << std::endl;

	// ============ Single Inheritance Example 1 ===================================
	//Derived d;
	//d.setData(10);
	//d.cube();

	// ============ Single Inheritance Example 2 ===================================
	//B b1;
	//b1.getX();
	//b1.getY();
	//b1.showX();
	//b1.showY();

	// ============ Multiple Inheritance Example 1 ===================================
	//Rectangle r;
	//r.get_data();
	//std::cout << "Area = " << r.area_calc() << std::endl;
	//std::cout << "\nPerimeter = " << r.peri_calc() << std::endl;

	// ============ Dynamic Binding Example 1 ===================================

	//User u;
	//Superuser s;
	//std::list<User*>users;
	//users.push_back(&u);
	//users.push_back(&s);

	//for (User* usrPtr : users)
	//	usrPtr->getPermissions();

	// ============ Multiple Inheritance Example 2 ===================================

	//C c1;
	//c1.getX();
	//c1.getY();
	//c1.getZ();
	//c1.showX();
	//c1.showY();
	//c1.showZ();

	// ======= Virtual Base Class - Inheritance =========================================

	/**

		Virtual base classes offer a way to save space and avoid 
		ambiguities in class hierarchies that use multiple inheritances.
		When a base class is specified as a virtual base, it can act as an 
		indirect base more than once without duplication of its data members. 
		A single copy of its data members is shared by all the base classes that use virtual base.

		https://www.geeksforgeeks.org/virtual-base-class-in-c/#:~:
		text=Virtual%20base%20classes%20are%20used,
		we%20have%20one%20class%20A%20.

	*/

	//G g;
	//std::cout << "d= " << g.d << std::endl;

	// ======= Hierarchical Inheritance =========================================
	//B b1;
	//b1.square();
	//D d1;
	//d1.cube();

	// ======= Hierarchical Inheritance II =========================================

	//B b1;
	//CC c1;
	//b1.getX();
	//b1.getY();
	//c1.getX();
	//c1.getZ();
	//b1.showX();
	//b1.showY();
	//c1.showX();
	//c1.showZ();

	// ======= MultiLevel Inheritance I =========================================
	//bottom b1;
	//b1.cube();

	//  ======= Vectors =========================================
	//  == https://www.freecodecamp.org/news/cpp-vector-how-to-initialize-a-vector-in-a-constructor/ ==
	
	//std::vector<int> vec;

	//vec.push_back(5);
	//vec.push_back(10);
	//vec.push_back(15);

	//Vector vect(vec);
	//vect.print();

	// ==========  Tricycle =======================================
    //Tricycle wichita;
	
	//Tricycle wichita(0);
	//wichita.setSpeed(0);
	//wichita.pedal();
	//wichita.pedal();
	//wichita.brake();
	//wichita.brake();
	//wichita.brake();

	Rectangle1 myRectangle(100, 20, 50, 80);
	int area = myRectangle.getArea();

	std::cout << "Area: " << area << std::endl;

}