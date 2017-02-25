#include "Animals.h"
#include <string>

using namespace std;

Animals::Animals()
{
	_name = "none";
}
Animals::Animals(string name, string species) : _name(name), _species(species)
{
}


Animals::~Animals()
{
}

std::string Animals::getName()
{
	return _name;
}

std::string Animals::getSpecies()
{
	return _species;
}
