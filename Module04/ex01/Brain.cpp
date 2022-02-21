#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &src) {
	std::cout << "brain copy constructor called" << std::endl;
	*this = src;
}

Brain &Brain::operator=(const Brain &src) {
	std::cout << "Brain asignation operator called" << std::endl;
	for (int i = 0; i < 100 ; ++i) {
		this->_ideas[i] = src._ideas[i];
	}
	return *this;
}
