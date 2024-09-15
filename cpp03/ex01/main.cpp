#include <iostream>

#include "ScavTrap.hpp"

int main() {
	ScavTrap scav_trap("Migel");
	scav_trap.attack("Sacorder");
	std::cout << scav_trap.get_health() << std::endl;
	scav_trap.takeDamage(10);
	std::cout << scav_trap.get_health() << std::endl;
	scav_trap.guardGate();
	return 0;
}
