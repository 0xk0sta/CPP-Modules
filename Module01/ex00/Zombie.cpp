#include "Zombie.hpp"

void Zombie::setName(std::string name) { this->_name = name; }

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie( void ) { std::cout << Zombie::getIdentity() << " commited suicide" << std::endl; }

std::string Zombie::getIdentity() { return (Zombie::_name); }

void Zombie::announce() { std::cout << Zombie::getIdentity() << " BraiiiiiiinnnzzzZ..." << std::endl; }
