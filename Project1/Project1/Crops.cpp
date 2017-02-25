#include "Crops.h"
#include <string>

using namespace std;

Crops::Crops(string name) : _name(name)
{
}


Crops::~Crops()
{
}

std::string Crops::getName()
{
	return _name;
}


