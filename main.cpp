#include <iostream>
#include <string>

#include "ArtificialPet.h"
#include "Furby.h"

using namespace::std;


int main() {

ArtificialPet a("jeff");

Furby b();

cout << a.getFullness() << endl;

a.Feed();

a.Feed();

cout << a.getFullness() << endl;

a.play(3);

	return 0;
}