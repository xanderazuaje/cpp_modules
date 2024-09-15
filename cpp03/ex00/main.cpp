#include <iostream>

#include "ClapTrap.hpp"

int main() {
	ClapTrap clap_trap("Danrodri");
	ClapTrap clap_trap_copy(clap_trap);
	ClapTrap clap_trap_copy2("Santi");
	clap_trap_copy2 = clap_trap;

	std::cout << clap_trap.get_name() << std::endl;
	std::cout << clap_trap_copy.get_name() << std::endl;
	std::cout << clap_trap_copy2.get_name() << std::endl;

	clap_trap.attack("Xazuaje");
	std::cout << clap_trap.get_health() << std::endl;
	clap_trap.takeDamage(3);
	std::cout << clap_trap.get_health() << std::endl;
	clap_trap.beRepaired(2);
	std::cout << clap_trap.get_health() << std::endl;
	clap_trap.takeDamage(42);
	std::cout << clap_trap.get_health() << std::endl;
	return 0;
}
