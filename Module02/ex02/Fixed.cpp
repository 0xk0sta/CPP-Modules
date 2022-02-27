#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : _fixed(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &src) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = src.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed = raw;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = n << Fixed::_fb;
}

Fixed::Fixed(const float n) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = roundf(n * (1 << Fixed::_fb));
}

float Fixed::toFloat() const {
	return (float)this->_fixed / (1 << Fixed::_fb);
}

int Fixed::toInt() const {
	return this->_fixed >> Fixed::_fb;
}

bool Fixed::operator>(const Fixed &src) const {
	if (this->_fixed > src._fixed)
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &src) const {
	if (*this > src)
		return false;
	return true;
}

bool Fixed::operator==(const Fixed &src) const {
	if ((*this)._fixed == src._fixed)
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &src) const {
	if (*this == src)
		return false;
	return true;
}

bool Fixed::operator>=(const Fixed &src) const {
	if (*this > src || *this == src)
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &src) const {
	if (*this < src || *this == src)
		return true;
	return false;
}

Fixed Fixed::operator+(const Fixed &src) const {
	Fixed ret = Fixed(this->toFloat() + src.toFloat());
	return ret;
}

Fixed Fixed::operator-(const Fixed &src) const {
	Fixed ret = Fixed(this->toFloat() - src.toFloat());
	return ret;
}

Fixed Fixed::operator*(const Fixed &src) const {
	Fixed ret = Fixed(this->toFloat() * src.toFloat());
	return ret;
}

Fixed Fixed::operator/(const Fixed &src) const {
	Fixed ret = Fixed(this->toFloat() / src.toFloat());
	return ret;
}

Fixed Fixed::operator++(int) {
	Fixed out;
	out._fixed = _fixed++;
	return out;
}

Fixed Fixed::operator--(int) {
	Fixed out;
	out._fixed = _fixed--;
	return out;
}

Fixed &Fixed::operator++() {
	++(this->_fixed);
	return *this;
}

Fixed &Fixed::operator--() {
	--(this->_fixed);
	return *this;
}

const Fixed &Fixed::min(const Fixed &lhs, const Fixed &rhs) {
	if (lhs < rhs)
		return lhs;
	return rhs;
}

Fixed &Fixed::min(Fixed &lhs, Fixed &rhs) {
	if (lhs < rhs)
		return lhs;
	return rhs;
}

const Fixed &Fixed::max(const Fixed &lhs, const Fixed &rhs) {
	if (lhs > rhs)
		return lhs;
	return rhs;
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs) {
	if (lhs > rhs)
		return lhs;
	return rhs;
}

std::ostream& operator<<(std::ostream &s, Fixed const &c) {
	s << c.toFloat();
	return s;
}
