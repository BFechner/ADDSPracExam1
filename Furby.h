#ifndef FURBY_H
#define FURBY_H

#include <iostream>
#include <string>

#include "ArtificialPet.h"

using namespace::std;

class Furby : public ArtificialPet {
private:


public:
	Furby();

	void dance(int minutes);

	void play(int minutes);

};

#endif