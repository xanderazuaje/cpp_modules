//
// Created by xander on 9/15/24.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
public:
	FragTrap(const std::string& name);
	~FragTrap();
	FragTrap(const FragTrap& frag_trap);

	void highFivesGuys() const;

	FragTrap & operator = (const FragTrap& frag_trap);
};



#endif //FRAGTRAP_HPP
