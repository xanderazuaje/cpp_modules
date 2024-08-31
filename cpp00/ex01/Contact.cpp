//
// Created by xander on 8/27/24.
//

#include "Contact.hpp"

#include <iostream>

#include "utils.hpp"

Contact::Contact()
{
	this->set = false;
}

Contact::Contact(const bool willFill)
{
	(void) willFill;
	std::cout << "Enter first name: ";
	std::getline(std::cin,  firstName);
	if (std::cin.eof())
		throw std::runtime_error("Canceled operation");
	std::cout << "Enter last name: ";
	std::getline(std::cin,  lastName);
	if (std::cin.eof())
		throw std::runtime_error("Canceled operation");
	std::cout << "Enter nickname: ";
	std::getline(std::cin,  nickname);
	if (std::cin.eof())
		throw std::runtime_error("Canceled operation");
	std::cout << "Enter phone number: ";
	std::getline(std::cin,  phoneNumber);
	if (std::cin.eof())
		throw std::runtime_error("Canceled operation");
	if (!isValidPhoneNumber(phoneNumber))
		throw std::runtime_error("invalid phone number");
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin,  darkestSecret);
	this->set = true;
}

std::string Contact::getFirstName() {
	return firstName;
}
std::string Contact::getLastName() {
	return lastName;
}
std::string Contact::getNickname()
{
	return nickname;
}
std::string Contact::getPhoneNumber()
{
	return phoneNumber;
}
