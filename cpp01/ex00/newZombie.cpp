//
// Created by xander on 9/1/24.
//

#include "Zombie.hpp"
Zombie *newZombie(const std::string& name)
{
	Zombie *zombie = new Zombie(name);
	zombie->announce();
	return zombie;
}