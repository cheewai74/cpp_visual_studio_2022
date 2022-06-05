#include "Shape.h"

float Shape::area(float rd) {
	r = rd;
	return (pi*r*r);
}

int Shape::area(int ht, int wt) {
	h = ht;
	w = wt;
	return (h * w);
}