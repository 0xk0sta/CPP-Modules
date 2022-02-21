#ifndef CPP_MODULES_ANIMAL_HPP
#define CPP_MODULES_ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal(Animal const &src);
		virtual			~Animal(void);
		Animal			&operator=(Animal const &src);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string		_type;

	private:
		Animal(std::string const &type);
		Animal(void);
};

#endif
