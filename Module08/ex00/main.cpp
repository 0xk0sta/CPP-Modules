#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include "easyfind.hpp"

void print(const int& n) {
	std::cout << "x -> " << n << std::endl;
}

int main(void) {
	{
		std::vector<int> paco;
		std::vector<int>::iterator i;
		srand(getpid());
		for (int x = 0; x < 10; ++x)
			paco.push_back(rand() % 10000);
		std::for_each(paco.begin(), paco.end(), print);
		i = easyfind(paco, 500);
		std::cout << *i << std::endl;
	}
	{
		std::vector<char> paco;
		std::vector<char>::iterator i;
		srand(getpid());
		int z = rand() % 127;
		paco.push_back(z);
		for (int x = 1; x < 10; ++x)
			paco.push_back(rand() % 127);
		std::for_each(paco.begin(), paco.end(), print);
		i = easyfind(paco, z);
		std::cout << *i << std::endl;
	}
}