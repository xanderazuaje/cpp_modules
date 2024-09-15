#include <iostream>

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	DiamondTrap diamond_trap("pepe");

	diamond_trap.attack("Lama Matuya");
	diamond_trap.whoAmI();

	return 0;
}
