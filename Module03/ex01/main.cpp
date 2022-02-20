#include "ClapTrap.hpp"

int main(void) {
	ClapTrap paco("paco");
	paco.attack("jones");
	paco.takeDamage(9);
	paco.beRepaired(4);
	paco.takeDamage(5);
}
