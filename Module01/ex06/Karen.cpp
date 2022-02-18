#include "Karen.hpp"

void Karen::complain(std::string level) {
	t_complains list[4] = {
			{"DEBUG", &Karen::debug},
			{"INFO", &Karen::info},
			{"WARNING", &Karen::warning},
			{"ERROR", &Karen::error}
	};
	int index = -1;
	for (int i = 0; i < 4; ++i) {
		if (level == list[i].name) {
			index = i;
			break;
		}
	}
	switch (index) {
		case 0:
			debug();
			info();
			warning();
			error();
			break;
		case 1:
			info();
			warning();
			error();
			break;
		case 2:
			warning();
			error();
			break;
		case 3:
			error();
			break;
		default:
			break ;
	}
}

void Karen::debug() {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout
			<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
			<< std::endl;
}

void Karen::info() {
	std::cout << "[ INFO ]" << std::endl;
	std::cout
			<< "cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
			<< std::endl;
}

void Karen::warning() {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout
			<< "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
			<< std::endl;
}

void Karen::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now."
			  << std::endl;
}