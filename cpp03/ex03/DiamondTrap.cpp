//
// Created by xander on 9/15/24.
//

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name),name(name)
{
	hp = FragTrap::hp;
	ep = ScavTrap::ep;
	atk = FragTrap::atk;
	std::cout << hp << std::endl;
	std::cout << ep << std::endl;
	std::cout << atk << std::endl;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(){}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond_trap): ClapTrap(diamond_trap), FragTrap(diamond_trap), ScavTrap(diamond_trap)
{
	atk = diamond_trap.atk;
	ep = diamond_trap.ep;
	atk = diamond_trap.atk;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &diamond_trap)
{
	atk = diamond_trap.atk;
	ep = diamond_trap.ep;
	atk = diamond_trap.atk;
	return *this;
}

void DiamondTrap::attack(const std::string &target) const
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap: " << name << std::endl;
	std::cout << "ClapTrap: " <<  ClapTrap::name << std::endl;
}

