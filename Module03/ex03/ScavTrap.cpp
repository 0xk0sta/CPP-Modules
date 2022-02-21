#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap parametrized constructor called" << std::endl;
}

ScavTrap::ScavTrap() {}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap-> Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) {
	std::cout << "ScavTrap -> Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &) {
	std::cout << "Asignation operator called" << std::endl;
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << this->_name << " has entered gate keeper mode" << std::endl;
}