#ifndef PERFECTZOO_ZOO_H
#define PERFECTZOO_ZOO_H

#include <string>
#include <vector>
#include "Animal.h"

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

    int getAnimalsCount();
    string toString();
};

#endif // PERFECTZOO_ZOO_H
