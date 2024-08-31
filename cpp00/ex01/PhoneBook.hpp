//
// Created by xander on 8/28/24.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"


class PhoneBook {
private:
	int curr;
public:
	PhoneBook();
	Contact contacts[8];
	void add();
	void search();
	void run();
};



#endif //PHONEBOOK_HPP
