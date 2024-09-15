//
// Created by xander on 9/15/24.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap: public FragTrap, public ScavTrap {
private:
	const std::string name;
public:
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &diamond_trap);
	~DiamondTrap();

	DiamondTrap & operator = (const DiamondTrap &diamond_trap);

	void attack(const std::string &target) const;
	void whoAmI();
};



#endif //DIAMONDTRAP_HPP
