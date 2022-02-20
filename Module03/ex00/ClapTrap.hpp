#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);
		ClapTrap &operator=(ClapTrap const &src);
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		unsigned int getHitPoints() const;
		unsigned int getEnergyPoints() const;
		unsigned int getAttackDamage() const;
	private:
		ClapTrap(void);
		std::string	const	_name;
		unsigned int		_hitPoints;
		unsigned int 		_energyPoints;
		unsigned int 		_attackDamage;
};

#endif
