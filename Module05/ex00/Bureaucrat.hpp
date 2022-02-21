#ifndef CPP_MODULES_BUREAUCRAT_HPP
#define CPP_MODULES_BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);
		Bureaucrat &operator=(Bureaucrat const &src);
		unsigned int		getGrade(void) const;
		std::string const	&getName(void) const;
		void				incrementGrade(void);
		void 				incrementGrade(unsigned int i);
		void				decrementGrade(void);
		void 				decrementGrade(unsigned int i);
	class gradeTooHighException : public std::exception {
		public: virtual const char* what() const throw();
	};
	class gradeTooLowException : public std::exception {
	public: virtual const char* what() const throw();
	};
	private:
		Bureaucrat(void);
		unsigned int	_grade;
		std::string		_name;
};

std::ostream &operator<<(std::ostream &s, Bureaucrat const &c);

#endif
