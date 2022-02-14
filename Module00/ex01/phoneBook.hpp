#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class contact {
	private:
		std::string darkestSecret;
		std::string phoneNumber;
	public:
		bool 		isEmpty;
		std::string fName;
		std::string sName;
		std::string nickName;
		int			add(void);
		void 		getDarkestSecret(void);
		void		getPhoneNumber(void);
};

class phoneBook {
	public:
		contact contact[8];
		void	search(void);
};

void contact::getPhoneNumber(void)
{
	std::cout << contact::phoneNumber << std::endl;
}

void contact::getDarkestSecret(void)
{
	std::cout << contact::darkestSecret << std::endl;
}

void phoneBook::search(void)
{
	std::string	input;
	size_t		i;

	for (int j = 0; j < 8; ++j) {
		if (phoneBook::contact[j].fName.empty())
			break ;
		std::cout << std::right << "Index: " << j + 1 << " | ";
		if (phoneBook::contact[j].fName.length() >= 10) {
			std::cout << std::right << "First Name: " << std::setw(10)
					  << phoneBook::contact[j].fName.substr(0, 9) << "."
					  << " | ";
		}
		else {
			std::cout << std::right << "First Name: " << std::setw(10)
					  << phoneBook::contact[j].fName << " | ";
		}
		if (phoneBook::contact[j].sName.length() >= 10) {
			std::cout << std::right << "Last Name: " << std::setw(10)
					  << phoneBook::contact[j].sName.substr(0, 9) << "."
					  << " | ";
		}
		else {
			std::cout << std::right << "Last Name: " << std::setw(10)
					  << phoneBook::contact[j].sName << " | ";
		}
		if (phoneBook::contact[j].nickName.length() >= 10) {
			std::cout << std::right << "Nickname: " << std::setw(10)
					  << phoneBook::contact[j].nickName.substr(0, 9) << "."
					  << std::endl;
		}
		else {
			std::cout << std::right << "Nickname: " << std::setw(10)
					  << phoneBook::contact[j].nickName << std::endl;
		}
	}
	std::cout << "Contact Index => ";
	std::getline(std::cin, input);
	if (input == "EXIT\0") {
		exit(0);
	}
	i = std::atoi(input.c_str());
	if (i >= 8) {
		std::cout << "Invalid index, max index = 8" << std::endl;
		return ;
	}
	if (phoneBook::contact[i - 1].isEmpty == true) {
		std::cout << "Selected contact is empty" << std::endl;
		search();
	}
	else {
		std::cout << "First name: " << phoneBook::contact[i - 1].fName << std::endl;
		std::cout << "Last name: " << phoneBook::contact[i - 1].sName << std::endl;
		std::cout << "Nickname: " << phoneBook::contact[i - 1].nickName << std::endl;
		std::cout << "Phone number: ";
		phoneBook::contact[i - 1].getPhoneNumber();
		std::cout << "Darkest secret: ";
		phoneBook::contact[i - 1].getDarkestSecret();
	}
}

int contact::add(void)
{
	std::string aux;

	std::cout << "First Name => ";
	std::getline(std::cin, aux);
	if (aux.length() == 0) {
		std::cout << "Error: cannot store a empty contact" << std::endl;
		return (1);
	}
	contact::fName = aux;
	std::cout << "Last Name => ";
	std::getline(std::cin, contact::sName);
	std::cout << "Nickname => ";
	std::getline(std::cin, contact::nickName);
	std::cout << "Phone Number => ";
	std::getline(std::cin, contact::phoneNumber);
	std::cout << "Darkest Secret => ";
	std::getline(std::cin, contact::darkestSecret);
	contact::isEmpty = false;
	return (0);
}

#endif
