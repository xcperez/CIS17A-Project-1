#pragma once
#include <string>
class Crops
{
private:
	std::string _name;
public:
	Crops();
	Crops(std::string name);
	~Crops();

	std::string getName();
};

