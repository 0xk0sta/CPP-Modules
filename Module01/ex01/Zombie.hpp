#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <new>
class Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		std::string	getIdentity();
		void 		setName(std::string name);
		void		announce();
	private:
		std::string _name;
};
#endif
