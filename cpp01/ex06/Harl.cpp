//
// Created by xander on 9/2/24.
//

#include "Harl.hpp"

#include <iostream>
#include <ostream>

void Harl::debug()
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

#define A 54059
#define B 76963
#define C 86969
#define FIRST 37

unsigned int Harl::hash_str(const std::string string)
{
	unsigned h = FIRST;
	for (unsigned i = 0; i < string.length(); i++)
		h = h * A ^ string[i] * B;
	return h;
}

#define DEBUG 1068370916
#define INFO 3598470325
#define WARNING 1620985259
#define ERROR 85543909

void Harl::complain(const std::string& level)
{
	switch (hash_str(level))
	{
		case DEBUG: {
			debug();
			info();
			warning();
			error();
			break;
		}
		case INFO: {
			info();
			warning();
			error();
			break;
		}
		case WARNING: {
			warning();
			error();
			break;
		}
		case ERROR: {
			error();
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
