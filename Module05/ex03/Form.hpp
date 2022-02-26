//
// Created by Antonio Costal cardenas on 2/21/22.
//

#ifndef CPP_MODULES_FORM_HPP
#define CPP_MODULES_FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form(unsigned int const signedGrade, unsigned int const execGrade, std::string const name, std::string const target);
		Form(Form const &src);
		virtual ~Form(void) = 0;
		Form &operator=(Form const &src);
		unsigned int			getSignGrade(void)	const;
		unsigned int			getExecGrade(void)	const;
		const std::string		&getName(void)		const;
		const std::string 		&getTarget(void)	const;
		bool					getIsSigned(void)	const;
		void 					beSigned(Bureaucrat const &b);
		void 					signForm(Bureaucrat const &b);
		virtual					execute(Bureaucrat const &b) const;
	class gradeTooHighException : public std::exception {
		public: virtual const char* what() const throw();
		};
	class gradeTooLowException : public std::exception {
		public: virtual const char* what() const throw();
		};

	private:
		Form();
		bool					_isSigned;
		unsigned int	const	_signedGrade;
		unsigned int	const	_execGrade;
		std::string		const	_name;
		std::string 	const	_tgt;
};

std::ostream &operator<<(std::ostream &s, Form const &c);


#endif //CPP_MODULES_FORM_HPP
