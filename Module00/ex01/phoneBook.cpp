#include "phoneBook.hpp"

int main(void)
{
	phoneBook	pb;
	std::string	s;
	static int	index = 0;

	while (1)
	{
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
				if (pb.contact[index].add() == 0)
					index++;
		}
		else
			continue;
	}
}
