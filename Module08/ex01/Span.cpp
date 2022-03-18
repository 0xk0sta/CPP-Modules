#include "Span.hpp"

Span::Span(unsigned int n) : _size(n) {
	std::cout << "Default constructor called" << std::endl;
}

Span::Span() {
	std::cout << "Default constructor called" << std::endl;
}

Span::~Span() {
	std::cout << "Destructor called" << std::endl;
}

Span::Span(const Span &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

int Span::longestSpan() {
	if (this->_n.size() < 2 || this->_size)
		throw Span::spanIsNotBigEnough();
	return std::max_element(this->_n.begin(), this->_n.end()) - std::min_element(this->_n.begin(), this->_n.end());
}

int Span::shortestSpan() {
	if (this->_n.size() < 2 || this->_size)
		throw Span::spanIsNotBigEnough();
	std::vector<int> cp(this->_n);
	std::sort(cp.begin(), cp.end());
	int ret = *(cp.begin + 1) - *cp.begin();
	for (IT i = cp.begin(); i < cp.end(); i++) {
		if (*(i + 1) - *it < ret) ret = *(i + 1) - *it;
	}
	return ret;
}

void Span::addNumber(int n) {
	if (this->_n.size() >= this->_size)
		throw Span::spanIsFull();
	this->_n.push_back(n);
}

const char *Span::spanIsNotBigEnough::what() const throw() {
	return "Span is not big enough APE";
}

const char *Span::spanIsFull::what() const throw() {
	return "Span is full, you must be an APE";
}
//TODO Function addRange(IT beg, IT end);
Span &Span::operator=(const Span &src) {
	std::cout << "Asignation operator called" << std::endl;
	if (this == src) return *this;
	this->_n = src._n;
	this->_size = src._size;
	return *this;
}
