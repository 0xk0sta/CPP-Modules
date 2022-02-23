#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm(void);
		RobotomyRequestForm operator=(RobotomyRequestForm const &src);
		void execute(Bureaucrat const &executor);
private:
	RobotomyRequestForm(void);

};
#endif
 