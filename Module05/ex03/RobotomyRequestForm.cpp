#include <fstream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(72, 45, "Robotomy Request", target) {
	std::cout << this->getName() << "Shrubbery form created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() : Form(72, 45, "Robotomy Request", "target") {
	std::cout << this->getName() << "Default constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << this->getName() << "Destructor called" << std::endl;
}

RobotomyRequestForm RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
	std::cout << this->getName() << "RobotomyRequestForm assignation operator called" << std::endl;
	if (this == *src) return *this;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src.getSignGrade(), src.getExecGrade(), src.getName(), src.getTarget()){
	std::cout << this->getName() << "Copy constructor called" << std::endl;
	*this = src;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) {
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
		std::cout << "* DRILLING NOISES *" << std::endl;
		if (rand() % 2 == 0) {
			std::cout << this->getTarget() << " has been robotomized succesfully" << std::endl;
		}
		else {
			std::cout << "Failed to robotomize " << this->getTarget() << std::endl;
		}
	}
}
