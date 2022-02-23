#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form(145, 137, "Shrubbery Creation", target) {
	std::cout << "Shrubbery form created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form(145, 137, "Shrubbery Creation", "target") {
	std::cout << "Default constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Destructor called" << std::endl;
}

ShrubberyCreationForm ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
	std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
	if (this == *src) return *this;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src.getSignGrade(), src.getExecGrade(), src.getName(), src.getTarget()){
	std::cout << this->getName() << "Copy constructor called" << std::endl;
	*this = src;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) {
	if (!this->getIsSigned()) {
		std::cout << "Form " << this->getName() << " cannot be executed cuz its not signed" << std::endl;
		return;
	}
	if (executor.getGrade() < this->getExecGrade())
	{
		std::cout << "Form " << this->_name << " cannot be executed by " << executor.getName() << " because his rank is too low" << std::endl;
		throw Form::gradeTooLowException();
	}
	else if (executor.getGrade() > this->getExecGrade())
	{
		std::cout << "Form " << this->_name << " cannot be executed by " << executor.getName() << " because his rank is too high" << std::endl;
		throw Form::gradeTooLowException();
	}
	else {
		std::cout << "My man " << executor.getName() << " decided it was a good idea to plant shrubbery at " << this->getTarget() << std::endl;
		std::ofstream file;
		file.open(this->getTarget().append("_shrubbery").c_str(), std::ofstream::out | std::ofstream::trunc);
		file <<	"		oxoxoo    ooxoo		" << std::endl;
		file <<	"	  ooxoxo oo  oxoxooo	" << std::endl;
		file <<	"	 oooo xxoxoo ooo ooox	" << std::endl;
		file <<	"	  oxo o oxoxo  xoxxoxo	" << std::endl;
		file <<	"	   oxo xooxoooo o ooo	" << std::endl;
		file <<	"	     ooo\\oo\\  /o/o	" << std::endl;
		file <<	"	         \\  \\/ /		" << std::endl;
		file <<	"	         |   /			" << std::endl;
		file <<	"	         |  |			" << std::endl;
		file <<	"	         |  |			" << std::endl;
		file <<	"	         |  |			" << std::endl;
		file <<	"	         |  |			" << std::endl;
		file <<	"	  ______/____\\____		" << std::endl;
		file.close();
	}
}
