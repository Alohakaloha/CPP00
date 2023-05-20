#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/* int main()
{
	// AAnimal	*something = new AAnimal(); will not work
	AAnimal	*abstractCat = new Cat;

	abstractCat->makeSound();
	delete abstractCat;
	return 0;
} */

int main()
{
	Cat *a = new Cat;
	Cat *b = new Cat;
	Cat *c = new Cat;

	for(int ret = 0; ret < 100 ; ret++)
		a->setIdea(ret, "Let's think of something");
	for(int i = 0 ; i < 100 ; i++)
		b->setIdea(i, "Random thoughts");
	for(int i = 0 ; i < 100 ; i++)
		c->setIdea(i, "This should never show up");
	std::cout << "\nreassigning here for checkup of a deep copy" << std::endl;
	*c = *a;	//to prove we don't have a shallow copy we have C=A and change the value of A
	*a = *b;	//therefore C isn't just a pointer but has it's own deep copy independent from A;

	c->showBrain();
	a->showBrain();

	delete a;
	delete b;
	delete c;
	return 0;
}