#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


class ClapTrap {
	public:
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);
		ClapTrap &operator=(ClapTrap const &src);
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		unsigned int getHitPoints();
		unsigned int getEnergyPoints();
		unsigned int getAttackDamage();
	private:
		ClapTrap(void);
		std::string	const	_name;
		unsigned int		_hitPoints;
		unsigned int 		_energyPoints;
		unsigned int 		_attackDamage;
};

std::ostream &operator<<(std::ostream &s, ClapTrap const &c);


#endif
