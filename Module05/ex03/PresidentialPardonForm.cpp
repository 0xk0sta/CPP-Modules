#include <fstream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form(25, 5, "Presidential Pardon Form", target) {
	std::cout << this->getName() << "Shrubbery form created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm() : Form(25, 5, "Presidential Pardon Form", "target") {
	std::cout << this->getName() << "Default constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << this->getName() << "Destructor called" << std::endl;
}

PresidentialPardonForm PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
	std::cout << this->getName() << "PresidentialPardonForm assignation operator called" << std::endl;
	if (this == *src) return *this;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src.getSignGrade(), src.getExecGrade(), src.getName(), src.getTarget()){
	std::cout << this->getName() << "Copy constructor called" << std::endl;
	*this = src;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) {
	if (!this->getIsSigned()) {
		std::cout << "The form " << this->_name << " cannot be executed because its not signed" << std::endl;
		return ;
	}
	if (this->getSignGrade() > b.getGrade()) {
		std::cout << "Form " << this->_name << " cannot be executed by " << b.getName() << " because his rank is too high" << std::endl;
		throw Form::gradeTooHighException();
	}
	else if (this->getSignGrade() < b.getGrade()) {
		std::cout << "Form " << this->_name << " cannot be executed by " << b.getName() << " because his rank is too low" << std::endl;
		throw Form::gradeTooLowException();
	}
	else {
			std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
}
