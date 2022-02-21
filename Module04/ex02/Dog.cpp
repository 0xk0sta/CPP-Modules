#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog &src) {
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(const Dog &src) {
	std::cout << "Dog Asignation operator called" << std::endl;
	this->_type = src.getType();
	return *this;
}

void Dog::makeSound() const {
	std::cout << "wooof" << std::endl;
}
