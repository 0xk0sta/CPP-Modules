#ifndef CPP_MODULES_SHRUBBERYCREATIONFORM_HPP
#define CPP_MODULES_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm operator=(ShrubberyCreationForm const &src);
		void execute(Bureaucrat const &executor);
private:
	ShrubberyCreationForm(void);

};
#endif
 