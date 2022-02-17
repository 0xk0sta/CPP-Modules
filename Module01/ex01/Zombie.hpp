#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <new>
class Zombie {
	private:
		std::string _name;
	public:
		std::string	getIdentity();
		void 		setName(std::string name);
		void		announce();
		Zombie(std::string name);
		~Zombie();
};
Zombie* newZombie(std::string name);
void	randomChump(std::string name);
#endif
