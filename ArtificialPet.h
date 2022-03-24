#ifndef ARTIFICIALPET_H
#define ARTIFICIALPET_H

using namespace::std;

#include <iostream>
#include <string>

class ArtificialPet {
private:
	string name;
	int Fullness;

public:
	ArtificialPet(string name);

	int getFullness();

	void setFullness(int Meal);

	void Feed();

	bool isHungry();

	void play(int minutes);
};

#endif