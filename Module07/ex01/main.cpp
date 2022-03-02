#include "iter.hpp"

template<typename T>
void print(T& something) {
	std::cout << "-> " <<something << std::endl;
}

int main(void) {
	int ar[10] = {5, 1, 2, 4, 8, 1, 9, 10, 2, 9};
	std::string r[5] = {"HOLA", "ADIOS", "PACO", "JONES", "AAAAAAAAAAAA"};
	iter(ar, 10, &print);
	iter(r, 5, &print);
}