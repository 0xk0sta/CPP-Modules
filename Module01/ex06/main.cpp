#include "Karen.hpp"

int main(int ac, char **av) {
	if (ac != 2)
		return 0;
	Karen paco;
	paco.complain(av[1]);
}
