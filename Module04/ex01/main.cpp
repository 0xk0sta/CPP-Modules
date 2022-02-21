#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
	Animal* t[100];
	for (int i = 0; i < 100; ++i) {
		if (i < 50) t[i] = new Dog();
		else t[i] = new Cat();
	}
	for (int i = 0; i < 100; ++i) {
		if (i < 50) delete t[i];
		else  delete t[i];
	}
	system("leaks -q zombie");
}
