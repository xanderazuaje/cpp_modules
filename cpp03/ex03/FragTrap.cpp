//
// Created by xander on 9/15/24.
//

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string &name):ClapTrap(name)
{
	hp = 100;
	ep = 100;
	atk = 30;
	std::cout << "FragTrap: " << name << ": Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: " << name << ": Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag_trap):ClapTrap(frag_trap)
{
	std::cout << "FragTrap: " << name << ": Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &frag_trap)
{
	std::cout << "FragTrap: " << name << ": = operator called" << std::endl;
	name = frag_trap.name;
	hp = frag_trap.hp;
	ep = frag_trap.ep;
	atk = frag_trap.atk;
	return *this;
}

void FragTrap::highFivesGuys() const
{
	std::cout << name << ": Gimme a five!" << std::endl;
}

