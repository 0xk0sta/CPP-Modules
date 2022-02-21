//
// Created by Antonio Costal cardenas on 2/21/22.
//

#ifndef CPP_MODULES_FORM_HPP
#define CPP_MODULES_FORM_HPP


class Form {
public:
	Form(unsigned int const signedGrade, unsigned int const execGrade, std::string const name);
	Form(Form const &src);
	~Form(void);
	Form &operator=(Form const &src);
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
};

std::ostream &operator<<(std::ostream &s, Form const &c);


#endif //CPP_MODULES_FORM_HPP
