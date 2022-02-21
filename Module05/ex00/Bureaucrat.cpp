#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name) {
	if (grade < 1) throw Bureaucrat::gradeTooHighException();
	if (grade > 150) throw Bureaucrat::gradeTooLowException();
	this->_grade = grade;
	std::cout << this->_name << " bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
	std::cout << "Asignation operator called" << std::endl;
	this->_name = src.getName();
	this->_grade = src.getGrade();
	return *this;
}

unsigned int Bureaucrat::getGrade() const {return this->_grade;}

std::string const &Bureaucrat::getName() const {return this->_name;}

std::ostream & operator<<(std::ostream &s, Bureaucrat const &c)
{
	s << c.getName() << " bureaucrat grade " << c.getGrade();
	return s;
}

void Bureaucrat::decrementGrade() {
	if (this->_grade + 1 > 150) throw Bureaucrat::gradeTooLowException();
	if (this->_grade + 1 < 1) throw Bureaucrat::gradeTooHighException();
	this->_grade++;
}

void Bureaucrat::decrementGrade(unsigned int i) {
	if (this->_grade + i < 1) throw Bureaucrat::gradeTooHighException();
	if (this->_grade + i > 150) throw Bureaucrat::gradeTooLowException();
	this->_grade += i;
}

void Bureaucrat::incrementGrade() {
	if (this->_grade - 1 > 150) throw Bureaucrat::gradeTooLowException();
	if (this->_grade - 1 < 1) throw Bureaucrat::gradeTooHighException();
	this->_grade--;
}

void Bureaucrat::incrementGrade(unsigned int i) {
	if (this->_grade - i > 150) throw Bureaucrat::gradeTooLowException();
	if (this->_grade - i < 1) throw Bureaucrat::gradeTooHighException();
	this->_grade -= i;
}

const char *Bureaucrat::gradeTooHighException::what() const throw() {
	return "EXCEPTION -> Grade too high";
}

const char *Bureaucrat::gradeTooLowException::what() const throw() {
	return "EXCEPTION -> Grade too low";
}