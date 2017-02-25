#pragma once
#include "Farmer.h"
#include "Crops.h"
#include "Animals.h"
#include <string>
class Farm
{
private:
	Crops _crops[10];
	Animals _animals[25];
	Farmer _farmer;
public:
	Farm(Farmer farmer);
	~Farm();

	void addCrops(Crops crops, int position);
	void addAnimals(Animals animals, int position);

	std::string farmLife();

};

