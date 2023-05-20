#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	Animal	*arr[10];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = new Cat();
		arr[i + 5] = new Dog();
	}
	for (int i = 0; i < 5; i++)
	{
		delete arr[i];
		delete arr[i+5];
	}

	Dog *a = new Dog;
	Dog *b = new Dog;
	Dog *c = new Dog;

	for(int ret = 0; ret < 100 ; ret++)
		a->setIdea(ret, "Let's think of something");
	for(int i = 0 ; i < 100 ; i++)
		b->setIdea(i, "Random thoughts");
	for(int i = 0 ; i < 100 ; i++)
		c->setIdea(i, "This should never show up");
	*c = *a;	//to prove we don't have a shallow copy we have C=A and change the value of A
	*a = *b;	//therefore C isn't just a pointer but has it's own deep copy independent from A;

	c->showBrain();
	a->showBrain();

	delete a;
	delete b;
	delete c;
	return 0;
}
/* 
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
	*c = *a;	//to prove we don't have a shallow copy we have C=A and change the value of A
	*a = *b;	//therefore C isn't just a pointer but has it's own deep copy independent from A;

	c->showBrain();
	a->showBrain();

	delete a;
	delete b;
	delete c;
	return 0;
} */