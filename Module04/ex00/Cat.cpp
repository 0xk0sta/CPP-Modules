#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &src) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

void Cat::makeSound() const {
	std::cout << "miau" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
	std::cout << "cat assignation operator called" << std::endl;
	this->_type = src.getType();
	return *this;
}

