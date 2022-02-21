#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const &src);
		virtual ~ClapTrap(void);
		ClapTrap &operator=(ClapTrap const &src);
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		unsigned int getHitPoints() const;
		unsigned int getEnergyPoints() const;
		unsigned int getAttackDamage() const;
	protected:
		ClapTrap(void);
		std::string			_name;
		unsigned int		_hitPoints;
		unsigned int 		_energyPoints;
		unsigned int 		_attackDamage;
};

std::ostream &operator<<(std::ostream &s, ClapTrap const &c);


#endif
