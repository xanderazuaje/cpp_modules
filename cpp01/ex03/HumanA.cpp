//
// Created by xander on 9/1/24.
//

#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon):weapon(weapon),name(name){}

HumanA::~HumanA(){}

void HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

