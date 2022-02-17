#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	Zombie::setName(name);
}

Zombie::~Zombie( void ) {
	std::cout << Zombie::getIdentity() << "commited suicide" << std::endl;
	delete this;
}

std::string Zombie::getIdentity() {
	return (Zombie::_name);
}

void Zombie::announce() {
	std::cout << Zombie::getIdentity() << "BraiiiiiiinnnzzzZ..." << std::endl;
}
