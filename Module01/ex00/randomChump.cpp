#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie *nZombie = newZombie(name);
	nZombie->announce();
	delete nZombie;
}