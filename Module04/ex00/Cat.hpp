#ifndef CPP_MODULES_CAT_HPP
#define CPP_MODULES_CAT_HPP
#include "Animal.hpp"
#include <iostream>


class Cat : public Animal {
	public:
		Cat(void);
		Cat(Cat const &src);
		~Cat(void);
		Cat &operator=(Cat const &src);
		void makeSound() const;
};

#endif //CPP_MODULES_CAT_HPP
