//
// Created by xander on 8/28/24.
//

#include "PhoneBook.hpp"

#include <cstdlib>
#include <iostream>
#include <stdio.h>

PhoneBook::PhoneBook()
{
	this->curr = 0;
}


void PhoneBook::run()
{
	std::string action;
	while (true)
	{
		if (std::cin.eof())
			return;
		std::cout << "Enter command (\"ADD, SEARCH, EXIT\"): ";
		std::getline(std::cin, action);
		if (action == "ADD")
			this->add();
		else if (action == "SEARCH")
			this->search();
		else if (action == "EXIT" || action.empty())
			exit(0);
		action = "";
	}
}


void PhoneBook::add()
{
	try
	{
		this->contacts[curr] = Contact(true);
		if (curr < 7)
			this->curr++;
		else
			this->curr = 0;
	}
	catch (std::exception &exception)
	{
		std::cerr  << exception.what() << std::endl;
	}
}

#define ROWS 5
void PhoneBook::search()
{
	for (int j  = 0; j < ROWS; j++)
		std::cout << "|----------";
	std::cout << "|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].set)
		{
			const std::string str[4] = {
			contacts[i].getFirstName(),
			contacts[i].getLastName(),
			contacts[i].getNickname(),
			contacts[i].getPhoneNumber()
			};
			std::cout << "|" << i << "         ";
			for (int j  = 0; j < 4; j++)
			{
				std::cout << "|";
				if (str[j].length() > 10)
					std::cout << str[j].substr(0, 9) << ".";
				else
					std::cout << str[j];
				for (size_t k = str[j].length(); k < 10; k++)
					std::cout << " ";
			}
			std::cout << "|" << std::endl;
			for (int j  = 0; j < ROWS; j++)
				std::cout << "|----------";
			std::cout << "|" << std::endl;
		}
	}
	std::cout << "Select: ";
	std::string nbr;
	getline(std::cin, nbr);
	int index = atoi(nbr.c_str());
	if (index > 7 || index < 0 )
		std::cerr << "Number must be between 0 and 8";
	else
	{
		Contact selected = contacts[index];
		std::cout
		<< selected.getFirstName()
		<< " "
		<< selected.getLastName()
		<< " aka. "
		<< selected.getNickname()
		<< ": "
		<< selected.getPhoneNumber()
		<< std::endl;
	}
}
