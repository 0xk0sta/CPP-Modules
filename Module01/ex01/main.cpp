#include "Zombie.hpp"

void leaks(void)
{
	system("leaks -q zombie");
}

Zombie* zombieHorde(int n, std::string name);
int main ( void )
{

	Zombie* paco = zombieHorde(7, "paco");
	for (int i = 0; i < 7; ++i) {
		std::cout << "index => " << i << " " << paco[i].getIdentity() << std::endl;
	}
	delete[] paco;
	paco = zombieHorde(-1, "hola");
	for (int i = 0; i < -1; ++i) {
		std::cout << "index => " << i << " " << paco[i].getIdentity() << std::endl;
	}
	delete[] paco;
	paco = zombieHorde(100, "adios");
	for (int i = 0; i < 100; ++i) {
		std::cout << "index => " << i << " " << paco[i].getIdentity() << std::endl;
	}
	delete[] paco;
	return 0;;
}
