#include "Animal.hpp"
Animal::Animal() : _type("") {
	std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(std::string const &type) : _type(type) {
	std::cout << "Parametrized constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Destructor called" << std::endl;
}

Animal::Animal(const Animal &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &src) {
	std::cout << "Asignation operator called" << std::endl;
	this->_type = src._type;
	return *this;
}

void Animal::makeSound() const {
	std::cout << "Unknown sound" << std::endl;
}

std::string Animal::getType() const {
	return this->_type;
}
