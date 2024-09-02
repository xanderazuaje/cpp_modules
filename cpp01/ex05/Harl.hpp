//
// Created by xander on 9/2/24.
//

#ifndef HARL_HPP
#define HARL_HPP
#include <string>

class Harl {
typedef void (Harl::*memberFn)();
private:
	void debug();
	void info();
	void warning();
	void error();
public:
	void complain(const std::string& level);
};
#endif //HARL_HPP
