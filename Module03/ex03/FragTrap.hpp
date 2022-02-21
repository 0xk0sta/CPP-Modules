#ifndef FragTrap_HPP
#define FragTrap_HPP
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(std::string const name);
		FragTrap(FragTrap const &src);
		FragTrap(void);
		~FragTrap(void);
		FragTrap &operator=(FragTrap const &src);
		void	highFiveGuys();
private:

};

#endif
