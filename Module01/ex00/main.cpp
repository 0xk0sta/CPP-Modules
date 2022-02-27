#include "Zombie.hpp"

void leaks(void)
{
	system("leaks -q zombie");
}

int main ( void )
{
	atexit(leaks);
	Zombie *zombie1;

	randomChump("JONES");
	zombie1 = newZombie("PACO");
	delete zombie1;
	return 0;
}
