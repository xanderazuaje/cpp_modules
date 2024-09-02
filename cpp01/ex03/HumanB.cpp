//
// Created by xander on 9/1/24.
//

#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name):name(name){}

HumanB::~HumanB(){}

void HumanB::attack() const
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}
