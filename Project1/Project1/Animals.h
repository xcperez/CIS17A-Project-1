#pragma once
#include <string>
class Animals
{
private:

	std::string _species;
	std::string _name;
public:
	Animals(std::string name, std::string species);
	~Animals();

	std::string getName();
	std::string getSpecies();
};

