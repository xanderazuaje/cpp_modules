//
// Created by xander on 9/1/24.
//

#include "Weapon.hpp"


Weapon::Weapon(const std::string& name):type(name){}

const std::string &Weapon::getType() const
{
	return type;
}

void Weapon::setType(const std::string& name)
{
	type = name;
}

Weapon::Weapon() {}

Weapon::~Weapon() {}
