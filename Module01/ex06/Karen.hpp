#ifndef CPP_MODULES_KAREN_HPP
#define CPP_MODULES_KAREN_HPP
#include <iostream>

class Karen {
	public:
		void complain(std::string level);
	private:
		typedef struct s_complains {
			std::string name;
			void (Karen::*f)();
		} t_complains;
		void debug();
		void warning();
		void info();
		void error();
};


#endif
