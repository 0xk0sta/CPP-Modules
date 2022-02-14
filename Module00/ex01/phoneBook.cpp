#include "phoneBook.hpp"

int main(void)
{
	phoneBook	pb;
	std::string	s;
	static int	index = 0;

	while (1)
	{
		std::cin >> s;
		if (s.compare("EXIT\0") == 0) {
			exit(0);
		}
		else if (s.compare("SEARCH\0") == 0) {
			pb.search();
		}
		else if (s.compare("ADD\0") == 0) {
				if (index == 8)
					index = 0;
				pb.contact[index].add();
				index++;
		}
		else
			continue;
	}
}
