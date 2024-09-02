//
// Created by xander on 9/1/24.
//

#include <fstream>
#include <iostream>

std::string replace(std::string line, std::string s1, std::string s2)
{
	std::string final;
	std::string linedup = std::string(line);
	size_t pos;
	while ((pos = linedup.find(s1)) != std::string::npos)
	{
		std::string prefix = linedup.substr(0, pos);
		final += prefix;
		final += s2;
		linedup.erase(0, pos + s1.length());
	}
	final += linedup;
	return final;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Execute like: <filename> <string to search> <string to replace>" << std::endl;
		return 1;
	}
	std::ifstream infile(argv[1]);
	if (!infile.is_open())
	{
		std::cerr << "Failed to open file \"" << argv[1] << "\"" << std::endl;
		return 1;
	}
	std::string line;
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::ofstream out;
	out.open(std::string(argv[1]).append(".replace").c_str());
	if (!out.is_open())
	{
		std::cerr << "Failed to create file \"" << argv[1] << "\"" << std::endl;
		return 1;
	}

	while (std::getline(infile, line))
	{
		out << replace(line, s1, s2) << std::endl;
	}
}
