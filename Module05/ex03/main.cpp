#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {

	try {
		Form f( 5, 6, "FORM1");
		Bureaucrat b("Pacolo", 5);
		Bureaucrat paco("Paco", 1);
		Bureaucrat paco2("Paco2", 149);
		b.signForm(f);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "test" << std::endl;
}