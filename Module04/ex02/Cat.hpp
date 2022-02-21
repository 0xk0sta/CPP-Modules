#ifndef CPP_MODULES_CAT_HPP
#define CPP_MODULES_CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>


class Cat : public Animal {
	public:
		Cat(void);
		Cat(Cat const &src);
		~Cat(void);
		Cat &operator=(Cat const &src);
		void makeSound() const;

	private:
		Brain* _brain;
};

#endif //CPP_MODULES_CAT_HPP
