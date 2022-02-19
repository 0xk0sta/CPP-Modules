#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::~Point() {
	//std::cout << "Destructor called" << std::endl;
}

Point::Point(const Point &src) : _x(src._x), _y(src._y) {
//	std::cout << "Copy constructor called" << std::endl;
}

Point &Point::operator=(const Point &) {
//	std::cout << "Asignation operator called" << std::endl;
	return *this;
}

float Point::getX() const {
//	std::cout << "getX member function called" << std::endl;
	return this->_x.getRawBits();
}

float Point::getY() const {
//	std::cout << "getY member function called" << std::endl;
	return this->_y.getRawBits();
}
