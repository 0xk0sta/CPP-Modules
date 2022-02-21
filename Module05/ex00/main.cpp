#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat l("LOLO", 100);

	std::cout << l << std::endl;

	Bureaucrat t("T", 10);
	std::cout << "T -> " << t << std::endl;
	t.decrementGrade();
	std::cout << "T -> " << t << std::endl;
	t.decrementGrade(5);
	std::cout << "T -> " << t << std::endl;
	t.incrementGrade(5);
	std::cout << "T -> " << t << std::endl;
	t.incrementGrade(10);
	std::cout << "T -> " << t << std::endl;

	try {
		Bureaucrat paco("Paco", 1);
		Bureaucrat paco2("Paco2", 149);
		paco2.decrementGrade();
		paco2.decrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "test" << std::endl;
}