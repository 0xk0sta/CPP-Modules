#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->_name = "DiamondTrap";
	this->ClapTrap::_name = std::string("DiamondTrap").append("_clap_name");
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << this->_name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	this->_name = name;
	this->ClapTrap::_name = name.append("_clap_name");
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << this->_name <<" constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << this->_name << " Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) {
	std::cout << this->_name <<" Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src) {
	this->ClapTrap::_name = src.ClapTrap::_name;
	this->_name = src._name;
	this->_hitPoints = src.FragTrap::_hitPoints;
	this->_energyPoints = src.ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << this->_name << " assignation operator called" << std::endl;
	return *this;
}

void DiamondTrap::attack(const std::string &target) {
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "My real name is " << this->_name << ", my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}