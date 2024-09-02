//
// Created by xander on 9/1/24.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
private:
	std::string type;

public:
	Weapon(const std::string& name);
	Weapon();
	~Weapon();
	const std::string &getType() const;
	void setType(const std::string& name);
};



#endif //WEAPON_HPP
