#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::~HumanB() {
}

HumanB::HumanB(const std::string& name) : _weapon(NULL), _name(name) {}

void HumanB::attack() {
	if (!this->_weapon) {
		std::cout << "My man " << this->_name << " does not have a weapon" << std::endl;
		return;
	}
	std::cout << this->_name << " attacks with his " << this->_weapon->getType()
			  << std::endl;
}

void HumanB::setWeapon(const Weapon& gun) {
	this->_weapon = (Weapon*)&gun;
}
