#include <iostream>
#include <string>
#include <cmath>

#include "ArtificialPet.h"

using namespace::std;

ArtificialPet::ArtificialPet(string name)
{
	name = name;

	Fullness = 0;

}

int ArtificialPet::getFullness()
{
	return Fullness;
}

void ArtificialPet::setFullness(int Meal)
{
	Fullness = Fullness + Meal;
}

void ArtificialPet::Feed()
{

	if(getFullness() >=10)
{
	cout << "cannot feed, " << name << "is full!" << endl;
}
else
{
	int adjFull = abs(Fullness - 10);

	int amtFeed = (adjFull/2) + 1;

	setFullness(amtFeed);

	if(Fullness > 10)
	{
		setFullness(10);
	}
	else
	{

	}
}
}

bool ArtificialPet::isHungry()
{

if(	getFullness() < 0)
{
	return 1;
}
else
{
	return 0;
}

}

void ArtificialPet::play(int minutes)
{

}
