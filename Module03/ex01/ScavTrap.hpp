//
// Created by Antonio Costal cardenas on 20/02/2022.
//

#ifndef CPP_MODULES_SCAVTRAP_HPP
#define CPP_MODULES_SCAVTRAP_HPP



class ScavTrap {
public:
	ScavTrap(void);
	ScavTrap(ScavTrap const &src);
	~ScavTrap(void);
	ScavTrap& operator=(ScavTrap const &src);
	int		getRawBits(void) const;
private:
	int					_ScavTrap;
};

std::ostream& operator<<(std::ostream &s, ScavTrap const &c);



#endif //CPP_MODULES_SCAVTRAP_HPP
