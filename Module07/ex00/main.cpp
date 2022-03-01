#include "whatever.hpp"
#include <iostream>

int main() {
	{
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
	{
		int i = 2;
		int x = 3;
		char c = 'c';
		char b = 'b';
		std::cout << "before swap i -> " << i << " | " << "x -> " << x << " | "
				  << "c -> " << c << " | " << "b -> " << b << std::endl;
		swap(i, x);
		swap(c, b);
		std::cout << "after swap i -> " << i << " | " << "x -> " << x << " | "
				  << "c -> " << c << " | " << "b -> " << b << std::endl;

		std::cout << "min -> " << min(i, x) << std::endl;
		std::cout << "min -> " << min(c, b) << std::endl;
		std::cout << "max -> " << max(i, x) << std::endl;
		std::cout << "max -> " << max(c, b) << std::endl;
		std::string paco = "HOLA";
		std::string jones = "ADIOS";
		std::cout << "BEFORE PACO -> " << paco << " | " << "JONES -> " << jones
				  << std::endl;
		swap(paco, jones);
		std::cout << "AFTER PACO -> " << paco << " | " << "JONES -> " << jones
				  << std::endl;
		std::cout << "MIN -> " << min(paco, jones) << std::endl;
		std::cout << "MAX -> " << max(paco, jones) << std::endl;
	}
}
