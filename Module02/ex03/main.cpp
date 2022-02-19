#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point a(7, 7);
	Point b(11, 1);
	Point c(2, 2);
	Point point(7, 3);
	if (bsp(a, b, c, point)) {
		std::cout << "Point is in triangle :>" << std::endl;
	}
	else {std::cout << "Point is not in triangle :<" << std::endl;}
	return 0;
}
