#include <iostream>
#include <string>

#include "Furby.h"
#include "ArtificialPet.h"

using namespace::std;

void Furby::dance(int minutes){

	cout << "Danced for " << minutes << " minutes." << endl;

	int hunger1 = Furby::getFullness();

	int depleted = hunger1 - 3*minutes;

	Furby::setFullness(depleted);

}

void Furby::play(int minutes){

	cout << "Played for " << minutes << " minutes." << endl;

	int hunger2 = Furby::getFullness();

	int depleted = hunger2 - 2*minutes;

	Furby::setFullness(depleted);

}