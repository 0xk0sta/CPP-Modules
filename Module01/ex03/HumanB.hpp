#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB {
	private:
		Weapon* _weapon;
		std::string _name;
	public:
		HumanB(const std::string& name);
		~HumanB();
		void attack();
		void setWeapon(const Weapon& gun);
};

#endif
