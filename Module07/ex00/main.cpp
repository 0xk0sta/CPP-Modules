#include "whatever.hpp"
#include <iostream>

int main() {
	int i = 2;
	int x = 3;
	char c = 'c';
	char b = 'b';
	std::cout << "before swap i -> " << i << " | " << "x -> " << x << " | " << "c -> " << c << " | " <<"b -> " << b << std::endl;
	swap(i, x);
	swap(c, b);
	std::cout << "after swap i -> " << i << " | " << "x -> " << x << " | " << "c -> " << c << " | " << "b -> " << b << std::endl;

	std::cout << "min -> " << min(i, x) << std::endl;
	std::cout << "min -> " << min(c, b) << std::endl;
	std::cout << "max -> " << max(i, x) << std::endl;
	std::cout << "max -> " << max(c, b) << std::endl;
	std::string paco = "HOLA";
	std::string jones = "ADIOS";
	std::cout << "BEFORE PACO -> " << paco << " | " << "JONES -> " << jones << std::endl;
	swap(paco, jones);
	std::cout << "AFTER PACO -> " << paco << " | " << "JONES -> " << jones << std::endl;
	std::cout << "MIN -> " << min(paco, jones) << std::endl;
	std::cout << "MAX -> " << max(paco, jones) << std::endl;
}
