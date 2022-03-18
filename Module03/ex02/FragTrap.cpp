#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap parametrized constructor called" << std::endl;
}

FragTrap::FragTrap() {}

FragTrap::~FragTrap() {
	std::cout << "FragTrap-> Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) {
	std::cout << "FragTrap -> Copy constructor called" << std::endl;
	*this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &) {
	std::cout << "Asignation operator called" << std::endl;
	return *this;
}

void FragTrap::highFiveGuys() {
	std::cout << this->_name << " issued " << rand() % 100 <<" high five request(s)" << std::endl;
}