#ifndef CPP_MODULES_ANIMAL_HPP
#define CPP_MODULES_ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal(std::string const &type);
		Animal(Animal const &src);
		virtual			~Animal(void);
		Animal			&operator=(Animal const &src);
		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;
protected:
		std::string		_type;
private:
		Animal(void);
};

#endif
