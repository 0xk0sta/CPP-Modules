#include "Fixed.hpp"
#include "Point.hpp"

Fixed checkSide(Point const point, Point const p1, Point const p2) {
	return (p2.getY() - p1.getY()) * (point.getX() - p1.getX())
			+ ((p2.getX() * -1) + p1.getX()) * (point.getY() - p1.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	bool sides[3];
	sides[0] = checkSide(point, a, b) > 0;
	sides[1] = checkSide(point, b, c) > 0;
	sides[2] = checkSide(point, c, a) > 0;
	return sides[0] && sides[1] && sides[2];
}
