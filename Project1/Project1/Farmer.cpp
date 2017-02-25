#include "Farmer.h"
#include <string>
#include "Farmer.h"

using namespace std;

Farmer::Farmer(string name) : _name(name)
{
}


Farmer::~Farmer()
{
}

std::string Farmer::getName()
{
	return _name;
}
