#include <iostream>

void convert(std::string const s);

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage ./literal argument" << std::endl;
		return 1;
	}
	convert(argv[1]);
}