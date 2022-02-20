//
// Created by Antonio Costal cardenas on 20/02/2022.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _ScavTrap(0) {
	std::cout << "Default constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
	std::cout << "Asignation operator called" << std::endl;
	this->_ScavTrap = src.getRawBits();
	return *this;
}

int ScavTrap::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_ScavTrap;
}
