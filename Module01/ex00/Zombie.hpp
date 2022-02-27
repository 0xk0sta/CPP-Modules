#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <new>
class Zombie {
	public:
		std::string	getIdentity();
		void 		setName(std::string name);
		void 		getName();
		void		announce();
		Zombie(std::string name);
		~Zombie();
	private:
		std::string _name;
};
Zombie* newZombie(std::string name);
void	randomChump(std::string name);
#endif
