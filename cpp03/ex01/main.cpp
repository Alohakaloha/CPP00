#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void){
	ScavTrap	robot("Robert");
	ClapTrap	oldrobot;

//showing it is not the same robot
	oldrobot.attack("something");

	for (int i = 0; i < 8 ; i++)
		robot.attack("\x1B[33myour mom\033[0m");
	
	for (int rounds = 0; rounds < 2 ; rounds++)
		robot.beRepaired(20);
	
	for (int i = 0; i < 2 ; i++)
		robot.attack("\x1B[33myour mom\033[0m");
	
	robot.guardGate();
	robot.takeDamage(50);
	robot.takeDamage(50);
	for (int i = 0; i < 2 ; i++)
		robot.attack("\x1B[33myour mom\033[0m");
	//the 
	robot.guardGate();
	std::cout << "" << std::endl;
	return (0);
}
