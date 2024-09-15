//
// Created by xander on 9/15/24.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap(const std::string& name);
	~ScavTrap();
	ScavTrap(const ScavTrap& scav_trap);

	void guardGate() const;

	ScavTrap & operator = (const ScavTrap& scav_trap);
};

#endif //SCAVTRAP_HPP
