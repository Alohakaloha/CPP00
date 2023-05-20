#include "ClapTrap.hpp"

int	main(void){
	ClapTrap	robot("Robot");
	ClapTrap	newrobot("Youngling");

	robot.takeDamage(50);
	robot.takeDamage(50);

	std::cout << "The Robot is taking parts from Youngling"<< std::endl;
	robot = newrobot;

	for (int i = 0; i < 8 ; i++)
		robot.attack("\x1B[33myour mom\033[0m");
	for (int rounds = 0; rounds < 2 ; rounds++)
		robot.beRepaired(20);
	//is running out of energy points here
	for (int i = 0; i < 2 ; i++)
		robot.attack("\x1B[33myour mom\033[0m");
	return (0);
}
