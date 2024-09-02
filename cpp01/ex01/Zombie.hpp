//
// Created by xander on 9/1/24.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
	std::string name;
public:
	Zombie();

	Zombie(const std::string&);
	~Zombie();
	void announce() const;

};



#endif //ZOMBIE_HPP
