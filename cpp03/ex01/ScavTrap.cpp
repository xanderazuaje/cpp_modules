//
// Created by xander on 9/15/24.
//

#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
	hp = 100;
	ep = 50;
	atk = 20;
	std::cout << "ScavTrap: " << name << ": Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: " << name << ": Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav_trap):ClapTrap(scav_trap)
{
	std::cout << "ScavTrap: " << name << ": Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav_trap)
{
	std::cout << "ScavTrap: " << name << ": = operator called" << std::endl;
	name = scav_trap.name;
	hp = scav_trap.hp;
	ep = scav_trap.ep;
	atk = scav_trap.atk;
	return *this;
}


void ScavTrap::guardGate() const
{
	std::cout << name << ": is on now in Gate Keeper mode" << std::endl;
}

