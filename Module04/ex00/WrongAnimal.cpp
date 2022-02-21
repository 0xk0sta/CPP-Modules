#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong animal noise" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->_type = src.getType();
	return *this;
}

