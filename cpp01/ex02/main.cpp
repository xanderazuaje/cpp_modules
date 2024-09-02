//
// Created by xander on 9/1/24.
//

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    const std::string &stringREF = str;

    std::cout << &str << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}
