#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(std::string const name);
		ScavTrap(void);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);
		ScavTrap &operator=(ScavTrap const &src);
		void	guardGate();
private:

};

#endif
