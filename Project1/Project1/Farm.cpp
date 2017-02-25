#include "Farm.h"
#include <string>

using namespace std;


Farm::Farm(Farmer farmer) : _farmer(farmer)
{
}


Farm::~Farm()
{
}

void Farm::addCrops(Crops crops, int position)
{

	if (position <= 9 && _crops[position].getName() == "none")
	{

		_crops[position] = crops;

	}
}

void Farm::addAnimals(Animals animals, int position)
{
	if (position <= 24 && _animals[position].getName() == "none")
	{

		_animals[position] = animals;

	}
}

string Farm::farmLife()
{
	string info = "Farm Status for " + _farmer.getName() + "'s farm.\n\n";
	info += "Farm Animals:\n";

	for (auto Animals : _animals)
	{

		if (Animals.getName() != "none")
		{

			info += Animals.getName() + ", " + Animals.getSpecies() + "\n";

		}
		
	}
	info += "Crops on the farm:\n";

	for (auto Crops : _crops)
	{

		if (Crops.getName() != "none")
		{

			info += Crops.getName() + "\n";

		}

	}

	return info;
}
