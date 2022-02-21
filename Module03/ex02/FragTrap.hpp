#ifndef FragTrap_HPP
#define FragTrap_HPP
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {
	public:
		FragTrap(std::string const name);
		FragTrap(FragTrap const &src);
		~FragTrap(void);
		FragTrap &operator=(FragTrap const &src);
		void	highFiveGuys();
	private:
		FragTrap(void);

};

#endif
