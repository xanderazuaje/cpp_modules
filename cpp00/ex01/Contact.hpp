//
// Created by xander on 8/27/24.
//

#ifndef CONTACT_H
#define CONTACT_H
#include <string>

class Contact {
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
public:
	bool set;
	Contact();
	explicit Contact(bool willFill);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getPhoneNumber();
};

#endif //CONTACT_H
