#ifndef CPP_MODULES_WEAPON_HPP
#define CPP_MODULES_WEAPON_HPP
#include <iostream>

class Weapon {
private:
	std::string _type;

public:
	Weapon(const std::string& type);
	~Weapon();
	const std::string& getType();
	void setType(const std::string& type);
};

#endif
