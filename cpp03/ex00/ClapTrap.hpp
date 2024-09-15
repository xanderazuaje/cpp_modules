//
// Created by xander on 9/11/24.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap {
private:
	std::string name;
	unsigned int hp;
	unsigned int ep;
	unsigned int atk;
public:
	ClapTrap(const std::string& name);
	~ClapTrap();
	ClapTrap(const ClapTrap &claptrap);

	void attack(const std::string& target) const;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string get_name() const;
	unsigned int get_health() const;

	ClapTrap & operator = (const ClapTrap& claptrap);
};



#endif //CLAPTRAP_HPP
