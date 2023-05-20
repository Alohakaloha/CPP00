#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int	main()
{
/* 	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	} */
 	{
		std::cout << "\n\n My test\n" << std::endl;
		IMateriaSource *source = new MateriaSource;
		source->learnMateria(new Cure);
		std::cout << "\033[3;30m\nLooking for a non existent Materia\033[0m"<< std::endl;
		AMateria *power;
		power = source->createMateria("random");

		std::cout << "\033[3;30m\nWe now create the character\033[0m" << std::endl;
		ICharacter *Hero = new Character("Wizard");

		std::cout << "\033[3;30m\nLooking for an existing Materia\033[0m"<< std::endl;
		power = source->createMateria("cure");
	
		std::cout << "\033[3;30m\nThe character now equips a Materia\033[0m" << std::endl;
		Hero->equip(power);
		std::cout << "\033[3;30m\nWe create a target so the character has a target\033[0m"<<std::endl;
		ICharacter *bob = new Character("bob");
		Hero->use(0, *bob);
		std::cout << "\033[3;30m\nUnequip and equip\033[0m"<<std::endl;
		Hero->unequip(0);
		Hero->equip(power);
		std::cout << "\033[3;30m\nLearning new Materia\033[0m"<< std::endl;
		for (int i = 0; i < 3; i++)
			source->learnMateria(new Ice());
		std::cout << "\033[3;30m\nUsing an invalid index\033[0m"<<std::endl;
		Hero->use(1, *bob);
		std::cout << "\033[3;30m\nCreating more Materia and equipping beyond the limit\033[0m"<<std::endl;
		for (int i = 0; i < 4 ; i++){
			power= source->createMateria("ice");
			Hero->equip(power);
		}
		std::cout << "\033[3;30m\nUsing the Materia and trying to use more\033[0m"<<std::endl;
		for (int i = 0; i < 5 ; i++)
			Hero->use(i, *bob);
		std::cout << "\033[3;30m\nChecking with copies and deleting original\033[0m"<<std::endl;
		Character	a("OG");
		Character	b("Fake");
		Character	c("OG Faker");
		a = c;
		c = b;
		std::cout << "We check now for Character a = " << a.getName() << std::endl; 
		std::cout << "\033[3;30m\nDeleting\033[0m"<<std::endl;
		delete power;
		delete Hero;
		delete bob;
		delete source;
		return 0;
	} 
}