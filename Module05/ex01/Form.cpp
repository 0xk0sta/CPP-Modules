//
// Created by Antonio Costal cardenas on 2/21/22.
//

#include "Form.hpp"

Form::Form(const unsigned int signedGrade, const unsigned int execGrade,
		   std::string const name) : _isSigned(false), _signedGrade(signedGrade), _execGrade(execGrade), _name(name) {
	if (this->_signedGrade < 1 || this->_execGrade < 1) throw
	std::cout << "Parametrized constructor called" << std::endl;
}

Form::Form() {}

Form::~Form() {
	std::cout << "Destructor called" << std::endl;
}

Form::Form(const Form &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Form &Form::operator=(const Form &src) {
	std::cout << "Asignation operator called" << std::endl;
	this->_Form = src.getRawBits();
	return *this;
}

const char *Form::gradeTooHighException::what() const throw() {
	return "EXCEPTION -> Grade too high";
}

const char *Form::gradeTooLowException::what() const throw() {
	return "EXCEPTION -> Grade too low";
}
