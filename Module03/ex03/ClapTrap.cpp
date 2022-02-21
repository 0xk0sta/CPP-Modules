#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap -> Parametrized constructor called" << std::endl;
}

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0) {}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap -> Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	this->_name = src._name;
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	return *this;
}

void ClapTrap::attack(std::string const &target) {
	std::cout << "ClapTrap " << this->_name << " attacks " << target
			  << " causing " << this->_attackDamage << " points of damage"
			  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	if (this->_hitPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " died" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " just took " << amount
			  << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " just healed itself for "
			  << amount << " hit points" << std::endl;
}

unsigned int ClapTrap::getHitPoints() const {
	return this->_hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
	return this->_attackDamage;
}
