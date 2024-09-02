//
// Created by xander on 9/1/24.
//

#include "Zombie.hpp"

Zombie *newZombie(const std::string& name);
void randomChump(std::string name);

int main()
{
	Zombie *heap_zombie = newZombie("Darodrig");
	delete heap_zombie;
	randomChump("Lyudmyla");
	return 0;
}