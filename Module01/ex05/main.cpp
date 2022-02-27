#include "Karen.hpp"

int main()
{
	Karen paco;
	paco.complain("DEBUG");
	std::cout << std::endl;
	paco.complain("INFO");
	std::cout << std::endl;
	paco.complain("WARNING");
	std::cout << std::endl;
	paco.complain("ERROR");
	std::cout << std::endl;
}
