#ifndef CPP_MODULES_WRONGANIMAL_HPP
#define CPP_MODULES_WRONGANIMAL_HPP
#include "Animal.hpp"
#include <iostream>

class WrongAnimal : public Animal {
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &src);
	~WrongAnimal(void);
	WrongAnimal &operator=(WrongAnimal const &src);
	void makeSound() const;
};



#endif //CPP_MODULES_WRONGANIMAL_HPP
