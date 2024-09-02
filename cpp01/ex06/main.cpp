//
// Created by xander on 9/1/24.
//

#include <iostream>

#include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("DEBUG");
	std::cout << "------------------------------------" << std::endl;
	harl.complain("INFO");
	std::cout << "------------------------------------" << std::endl;
	harl.complain("WARNING");
	std::cout << "------------------------------------" << std::endl;
	harl.complain("ERROR");
	std::cout << "------------------------------------" << std::endl;
	harl.complain("Danrodri");
	std::cout << "------------------------------------" << std::endl;
	harl.complain("Danrodri");
	harl.complain("error");
	std::cout << "------------------------------------" << std::endl;
	harl.complain("ERORR");

	return 0;
}
