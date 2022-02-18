#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::~HumanA() {
}

HumanA::HumanA(const std::string& name, Weapon& gun) : _weapon(gun), _name(name) {}

void HumanA::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
