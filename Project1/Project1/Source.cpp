#include <iostream>
#include "Animals.h"
#include "Crops.h"
#include "Farm.h"
#include "Farmer.h"

using namespace std;

int main()
{

	Farmer om = Farmer("Old McDonald");
	Farm farm = Farm(om);
	Animals pig = Animals("Hamilton", "Pig");
	Animals duck = Animals("Foie Gras", "Duck");
	Crops lettuce = Crops("Lettuce");

	farm.addAnimals(pig, 0);
	farm.addAnimals(duck, 1);

	farm.addCrops(lettuce, 0);

	cout << farm.farmLife() << endl;

	return 0;

}