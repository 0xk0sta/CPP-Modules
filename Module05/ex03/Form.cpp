#include "Form.hpp"

Form::Form(const unsigned int signedGrade, const unsigned int execGrade,
		   std::string const name, std::string const target) : _isSigned(false), _signedGrade(signedGrade), _execGrade(execGrade), _name(name) , _tgt(target) {
	if (this->_signedGrade < 1 || this->_execGrade < 1) throw Form::gradeTooHighException();
	if (this->_execGrade > 150 || this->_execGrade > 150) throw Form::gradeTooLowException();
	std::cout << "Parametrized constructor called" << std::endl;
}

Form::Form() : _isSigned(false), _signedGrade(150), _execGrade(150), _name("name"), _tgt("target"){}

Form::~Form() {
	std::cout << "Form " << this->_name <<" Destructor called" << std::endl;
}

Form::Form(const Form &src) : _isSigned(src._isSigned), _signedGrade(src._signedGrade), _execGrade(src._execGrade), _name(src._name) {
	std::cout << "Form Copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &src) {
	std::cout << "Asignation operator called" << std::endl;
	if (this == &src) return *this;
	return *this;
}

void Form::beSigned(const Bureaucrat &b) {
	if (this->getIsSigned() == true) {
		std::cout << "The form " << this->_name << " has already been signed" << std::endl;
		return ;
	}
	if (this->getSignGrade() > b.getGrade()) {
		std::cout << "Form " << this->_name << " cannot be signed by " << b.getName() << " because his rank is too high" << std::endl;
		throw Form::gradeTooHighException();
	}
	else if (this->getSignGrade() < b.getGrade()) {
		std::cout << "Form " << this->_name << " cannot be signed by " << b.getName() << " because his rank is too low" << std::endl;
		throw Form::gradeTooLowException();
	}
	else {
		this->_isSigned = true;
		std::cout << "Form " << this->getName() << " has been signed by " << b.getName() << std::endl;
	}
}

unsigned int Form::getExecGrade() const { return this->_execGrade; }

unsigned int Form::getSignGrade() const { return this->_signedGrade; }

const std::string &Form::getName() const { return this->_name; }

const std::string &Form::getTarget() const { return this->_tgt; }

bool Form::getIsSigned() const { return this->_isSigned; }

const char *Form::gradeTooHighException::what() const throw() {
	return "EXCEPTION -> Grade too high";
}

const char *Form::gradeTooLowException::what() const throw() {
	return "EXCEPTION -> Grade too low";
}

std::ostream & operator<<(std::ostream &s, Form const &c)
{
	if (c.getIsSigned()) std::cout << "Form" << c.getName() << " is signed.";
	else std::cout << "Form" << c.getName() << " isn't signed.";
	std::cout << "This form requires grade " << c.getSignGrade() << " to sign it and grade " << c.getExecGrade() << " to be executed" << std::endl;
	return s;
}
