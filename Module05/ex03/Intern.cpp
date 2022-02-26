#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern() {
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern Destructor called" << std::endl;
}

Intern::Intern(const Intern &src) {
	std::cout << "Intern Copy constructor called" << std::endl;
	*this = src;
}

Intern &Intern::operator=(const Intern &src) {
	std::cout << "Intern Asignation operator called" << std::endl;
	if (src)
		return *this;
	return *this;
}

Form *Intern::makeForm(const std::string form, const std::string target) {
	t_forms forms[3] = {
			{"shrubbery creation",  new ShrubberyCreationForm(target)},
			{"presidential pardon", new PresidentialPardonForm(target)},
			{"robotomy request",    new RobotomyRequestForm(target)}
	};
	Form *ret = NULL;
	for (int i = 0; i < 3; ++i) {
		if (form == forms[i]._type) {
			ret = forms[i]._formType;
		} else {
			delete forms[i]._formType;
		}
	}
	if (!ret) {
		std::cout << "Intern was not able to create the following form => " << form << std::endl;
	}
	else {
		std::cout << "Intern creates form " << form << std::endl;
	}
	return ret;
}
