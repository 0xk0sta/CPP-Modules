#include "phoneBook.hpp"

int main(void)
{
	phoneBook	pb;
	std::string	s;
	int ret = 0;
	static int	index = 0;

	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, s);
		if (s == "EXIT\0") {
			exit(0);
		}
		else if (s == "SEARCH\0") {
			if (index == 0) {
				std::cout << "Phone book is empty" << std::endl;
				continue ;
			}
			pb.search();
		}
		else if (s == "ADD\0") {
			if (index == 8)
				index = 0;
			ret = pb.kontact[index].add();
			if (ret == 0)
				index++;
			else if (ret == 2) {
				std::cout << std::endl <<"Bye! Clearing phonebook..." << std::endl;
				break;
			}
		}
		else if (std::cin.eof()) {
			std::cout << "Bye! Clearing phonebook..." << std::endl;
			break ;
		}
		else {
			continue;
		}
	}
}
