#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void){
	FragTrap	robot;
	ScavTrap	robo("A ScavTrap");
	FragTrap	robot2("Chocolate"); //this is personal

	robot = robot2;

	robo.attack("nothing");
	robot.attack("something");
	for (int i = 0; i < 8 ; i++)
		robot.attack("\x1B[33myour mom\033[0m");
	for (int rounds = 0; rounds < 2 ; rounds++)
		robot.beRepaired(20);
	for (int i = 0; i < 2 ; i++)
		robot.attack("\x1B[33myour mom\033[0m");
	robot.takeDamage(50);
	robot.takeDamage(50);
	
	robot.highFiveGuys();
	for (int i = 0; i < 2 ; i++)
		robot.attack("\x1B[33myour mom\033[0m");
	robot.takeDamage(50);
	robot.takeDamage(50);
	robot.takeDamage(50);
	robot.highFiveGuys();
	return (0);
}
