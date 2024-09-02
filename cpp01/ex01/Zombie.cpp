//
// Created by xander on 9/1/24.
//

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie() {}

Zombie::Zombie(const std::string& zombie_name)
{
	name = zombie_name;
}

Zombie::~Zombie()
{
	std::cout << name << " died." << std::endl;
}

void Zombie::announce() const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
