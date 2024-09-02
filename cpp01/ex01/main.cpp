//
// Created by xander on 9/1/24.
//

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main()
{
	const Zombie *horde = zombieHorde(10, "psegura-");
	for (int i = 0; i < 10; i++)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return 0;
}