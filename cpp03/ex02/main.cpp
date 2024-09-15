#include <iostream>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ScavTrap scav_trap("Migel");
	scav_trap.attack("Sacorder");
	std::cout << scav_trap.get_health() << std::endl;
	scav_trap.takeDamage(10);
	std::cout << scav_trap.get_health() << std::endl;
	scav_trap.guardGate();

	FragTrap frag_trap("Restrepo");
	frag_trap.attack("Joe");
	std::cout << frag_trap.get_health() << std::endl;
	frag_trap.takeDamage(10);
	std::cout << frag_trap.get_health() << std::endl;
	frag_trap.highFivesGuys();
	return 0;
}
