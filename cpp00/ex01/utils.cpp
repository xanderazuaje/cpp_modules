//
// Created by xander on 8/27/24.
//

#include "utils.hpp"

#include <bits/error_constants.h>

bool isValidPhoneNumber(const std::string &phone)
{
	for (size_t i = 0; i < phone.length(); i++)
	{
		if (std::isdigit(phone[i]) ||
			(i == 0 && phone[i] == '+') ||
			phone[i] == ' ' ||
			phone[i] == '-'
			)
			i++;
		else
			return false;
	}
	return true;
}
