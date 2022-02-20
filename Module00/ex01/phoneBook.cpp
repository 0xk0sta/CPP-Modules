#include "phoneBook.hpp"

std::string contact::getFName() {return this->fName;}

std::string contact::getSName() {return this->sName;}

std::string contact::getNickname() {return this->nickName;}

std::string contact::getPhoneNumber() {return this->phoneNumber;}

std::string contact::getDarkestSecret() {return this->darkestSecret;}

void phoneBook::search(void)
{
	std::string	input;
	size_t		i;

	for (int j = 0; j < 8; ++j) {
		if (phoneBook::kontact[j].getFName().empty())
			break ;
		std::cout << std::right << "Index: " << std::setw(10) << j + 1 << " | ";
		if (phoneBook::kontact[j].getFName().length() >= 10) {
			std::cout << std::right << "First Name: " << std::setw(10)
					  << phoneBook::kontact[j].getFName().substr(0, 9) << "."
					  << " | ";
		}
		else {
			std::cout << std::right << "First Name: " << std::setw(10)
					  << phoneBook::kontact[j].getFName() << " | ";
		}
		if (phoneBook::kontact[j].getSName().length() >= 10) {
			std::cout << std::right << "Last Name: " << std::setw(10)
					  << phoneBook::kontact[j].getSName().substr(0, 9) << "."
					  << " | ";
		}
		else {
			std::cout << std::right << "Last Name: " << std::setw(10)
					  << phoneBook::kontact[j].getSName() << " | ";
		}
		if (phoneBook::kontact[j].getNickname().length() >= 10) {
			std::cout << std::right << "Nickname: " << std::setw(10)
					  << phoneBook::kontact[j].getNickname().substr(0, 9) << "."
					  << std::endl;
		}
		else {
			std::cout << std::right << "Nickname: " << std::setw(10)
					  << phoneBook::kontact[j].getNickname() << std::endl;
		}
	}
	std::cout << "Contact Index => ";
	std::getline(std::cin, input);
	if (std::cin.eof()) {
		std::cout << std::endl <<"Bye! Clearing phonebook..." << std::endl;
		exit (0);
	}
	if (input == "EXIT\0") {
		exit(0);
	}
	for (size_t j = 0; j < input.length(); ++j) {
		if (std::isdigit(input[j]) == 0)
		{
			std::cout << "Input is not digit" << std::endl;
			return ;
		}
	}
	i = std::atoi(input.c_str());
	if (i >= 8) {
		std::cout << "Invalid index, max index = 8" << std::endl;
		return ;
	}
	if (phoneBook::kontact[i - 1].getFName().empty()) {
		std::cout << "Selected contact is empty" << std::endl;
		return ;
	}
	else {
		std::cout << "First name: " << phoneBook::kontact[i - 1].getFName() << std::endl;
		std::cout << "Last name: " << phoneBook::kontact[i - 1].getSName() << std::endl;
		std::cout << "Nickname: " << phoneBook::kontact[i - 1].getNickname() << std::endl;
		std::cout << "Phone number: " << phoneBook::kontact[i - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << phoneBook::kontact[i - 1].getDarkestSecret() << std::endl;
	}
}

int contact::add(void)
{
	std::string aux;

	if (std::cin.eof())
		return (2);
	std::cout << "First Name => ";
	std::getline(std::cin, aux);
	if (std::cin.eof())
		return (2);
	if (aux.length() == 0 && !std::cin.eof()) {
		std::cout << "Error: cannot store a empty contact" << std::endl;
		return (1);
	}
	if (std::cin.eof())
		return (2);
	contact::fName = aux;
	std::cout << "Last Name => ";
	std::getline(std::cin, contact::sName);
	if (std::cin.eof())
		return (2);
	std::cout << "Nickname => ";
	std::getline(std::cin, contact::nickName);
	if (std::cin.eof())
		return (2);
	std::cout << "Phone Number => ";
	std::getline(std::cin, contact::phoneNumber);
	if (std::cin.eof())
		return (2);
	std::cout << "Darkest Secret => ";
	std::getline(std::cin, contact::darkestSecret);
	if (std::cin.eof())
		return (2);
	return (0);
}
