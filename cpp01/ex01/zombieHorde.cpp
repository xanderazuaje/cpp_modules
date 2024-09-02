//
// Created by xander on 9/1/24.
//

#include "Zombie.hpp"
Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		zombies[i] = Zombie(name);
		i++;
	}
	return zombies;
}