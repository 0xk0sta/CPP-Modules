#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name);
int main ( void )
{

	Zombie* paco = zombieHorde(7, "paco");
	for (int i = 0; i < 7; ++i) {
		std::cout << "index => " << i << " " << paco[i].getIdentity() << std::endl;
	}
	return 0;
}
