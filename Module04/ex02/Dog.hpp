#ifndef CPP_MODULES_DOG_HPP
#define CPP_MODULES_DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog const &src);
		~Dog(void);
		Dog &operator=(Dog const &src);
		void makeSound() const;

	private:
		Brain* _brain;
};

#endif //CPP_MODULES_DOG_HPP
