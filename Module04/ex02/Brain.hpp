#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain {
	public:
		Brain(void);
		Brain(Brain const &src);
		~Brain(void);
		Brain &operator=(Brain const &src);
	private:
		std::string _ideas[100];
};

#endif
