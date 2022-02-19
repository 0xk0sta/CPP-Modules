//
// Created by Antonio Costal cardenas on 2/19/22.
//

#ifndef CPP_MODULES_POINT_HPP
#define CPP_MODULES_POINT_HPP
#include "Fixed.hpp"

class Point {
public:
	Point(void);
	Point(const float x, const float y);
	Point(Point const &src);
	~Point(void);
	Point &operator=(Point const &src);
	float getX(void) const;
	float getY(void) const;

private:
	Fixed const _x;
	Fixed const _y;
};

std::ostream &operator<<(std::ostream &s, Point const &c);


#endif //CPP_MODULES_POINT_HPP
