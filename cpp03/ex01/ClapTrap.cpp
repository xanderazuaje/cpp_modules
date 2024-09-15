//
// Created by xander on 9/11/24.
//

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(const std::string& name) : name(name), hp(10), ep(10), atk(0)
{
	std::cout << "ClapTrap: " << name << ": Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) : name(claptrap.name), hp(claptrap.hp), ep(claptrap.ep), atk(claptrap.atk)
{
	std::cout << "ClapTrap: " << name << ": Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: " << name << ": Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& claptrap)
{
	std::cout << "ClapTrap: " << name << ": = operator called" << std::endl;
	name = claptrap.name;
	hp = claptrap.hp;
	ep = claptrap.ep;
	atk = claptrap.atk;
	return *this;
}

void ClapTrap::attack(const std::string &target) const
{
	std::cout <<  name << " attacks " << target << std::endl;
}

std::string ClapTrap::get_name() const
{
	return name;
}

unsigned int ClapTrap::get_health() const
{
	return hp;
}

void ClapTrap::beRepaired(const unsigned int amount)
{
	hp += amount;
	std::cout <<  name << " repairs itself" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (static_cast<int>(hp - amount) < 0)
		hp = 0;
	else
		hp -= amount;
	std::cout <<  name << " took damage" << std::endl;
}
