#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Destructor called" << std::endl;
}

Dog::Dog(const Dog &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(const Dog &src) {
	std::cout << "Asignation operator called" << std::endl;
	this->_type = src.getType();
	return *this;
}

void Dog::makeSound() const {
	std::cout << "wooof" << std::endl;
}
