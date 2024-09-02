//
// Created by xander on 9/1/24.
//

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
private:
	const Weapon *weapon;
	std::string name;
public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(const Weapon &weapon);
	void attack() const;
};



#endif //HUMANB_HPP
