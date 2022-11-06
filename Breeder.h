#ifndef ANIMAL_BREEDER_H
#define ANIMAL_BREEDER_H

#include "Zoo.h"
#include "Groups\Mammal.h"
#include "Groups\Reptile.h"
#include "Groups\Fish.h"
#include "Groups\Bird.h"
#include "Groups\Amphibian.h"
#include <random>
#include <string>


class Breeder{
    Zoo *zoo;
    float pBreed, pExtinct;
    int maxAnimals;

    public:
        Breeder(Zoo *zoo, float pBreed, float pExtinct, int maxAnimals);
        void breed();
        void extinct();
        void simulate();
        Animal* crossedOver(Animal *a1, Animal *a2);
        string chooseName();

    
};


#endif //PERFECTZOO_BREEDER_H
