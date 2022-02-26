#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"

class Intern {
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);
		Intern &operator=(Intern const &src);
		Form *makeForm(std::string const form, std::string const target);
	private:
		typedef struct s_forms {
			std::string _type;
			Form	*_formType;
		}t_forms;
};

#endif
