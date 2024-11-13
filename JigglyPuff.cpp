/* JigglyPuff
   Method Definitions
*/
#include <iostream>
#include "JigglyPuff.h"

//Constructor
JigglyPuff::JigglyPuff() : Pokemon("JigglyPuff", "Fairy", 150, 25) {};

Pokemon* JigglyPuff::actionMenu(Pokemon& opponent) {
	int choice;
	std::cout << name << ", select an action" << std::endl;
	std::cout << "   1.Body Slam\n   2.Heal\n   3.Run Away" << std::endl;
	std::cin >> choice;

	if (choice == 1) {
		basicAttack(opponent);
	}
	else if (choice == 2) {
		heal(20);
	}
	else if (choice == 3) {
		if (runAway()) {
			health = 0; //end the battle using health=0 for now.
		}
	}
	else {
		std::cout << name << " looks at you funny and shrugs. What does " << choice << " mean?" << std::endl;
	}
	return this;
}

void JigglyPuff::basicAttack(Pokemon& opponent) {
	std::cout << name << " Runs towards " << opponent.getName() << " slamming them with a Body Slam!" << std::endl;
	opponent.takeDamage(calculateDamage(opponent, strength));
}