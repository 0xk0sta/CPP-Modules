#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);
		ScavTrap &operator=(ScavTrap const &src);
		void	guardGate();
	private:
		ScavTrap(void);

};

#endif
