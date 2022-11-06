#ifndef PERFECTZOO_ZOO_H
#define PERFECTZOO_ZOO_H

#include <string>
#include <vector>
#include "Animal.h"
#include "Groups\Mammal.h"
#include "Groups\Reptile.h"
#include "Groups\Fish.h"
#include "Groups\Bird.h"
#include "Groups\Amphibian.h"

using namespace std;

class Zoo
{
private:
    string ZooName;
    int animals_count;
    vector<Animal*> animals;

public:
    Zoo(string ZooName);
    Zoo& operator+=(Animal *animal);
    Zoo& operator-=(Animal *animal);

    //access the animal at the given index in the animals vector
    Animal* operator[](int index);
    ~Zoo();
    void addRandomAnimal();

    int getAnimalsCount();
    string toString();
};

#endif // PERFECTZOO_ZOO_H
