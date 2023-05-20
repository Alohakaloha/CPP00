#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal	*cat;
	Animal	*dawg;
	Animal	pet;

	cat = new Cat;
	dawg = new Dog;

	pet.makeSound();
	cat->makeSound();//because of the virtual keyword, C++ determines during runtime which function is being used
	dawg->makeSound();

	delete dawg;
	delete cat;

	WrongAnimal	*something;
	WrongAnimal	*fakeCat;

	something = new WrongAnimal;
	fakeCat = new WrongCat;

	something->makeSound();
	fakeCat->makeSound();//does not make fakecat noises because the wronganimal ptr has a higher priority
	
	delete	something;
	delete	fakeCat;
	return 0;
}