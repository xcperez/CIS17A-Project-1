#pragma once
#include <string>

class Farmer
{
private:

	std::string _name;

public:
	Farmer(std:: string name);
	~Farmer();

	std::string getName();
};

