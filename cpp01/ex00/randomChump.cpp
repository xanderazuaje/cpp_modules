//
// Created by xander on 9/1/24.
//

#include <string>

#include "Zombie.hpp"

void randomChump(std::string name)
{
	const Zombie zombie = Zombie(name);
	zombie.announce();
}
