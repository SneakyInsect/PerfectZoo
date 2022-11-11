#ifndef ANIMAL_BREEDER_H
#define ANIMAL_BREEDER_H

#include "Zoo.h"
#include "Animal.h"
#include "Groups\Mammal.h"
#include "Groups\Reptile.h"
#include "Groups\Fish.h"
#include "Groups\Bird.h"
#include "Groups\Amphibian.h"
#include <random>
#include <string>



template <class T>
class Breeder{
    Zoo<T> *zoo;
    float pBreed, pExtinct;
    int maxAnimals;

    public:
        Breeder(Zoo<T> *zoo, float pBreed, float pExtinct, int maxAnimals);
        void breed();
        void extinct();
        void simulate();
        Animal* crossedOver(Animal *a1, Animal *a2);
        string chooseName();


};


template <class T>
Breeder<T>::Breeder(Zoo<T> *zoo, float pBreed, float pExtinct, int maxAnimals)
{
    this->zoo = zoo;
    this->pBreed = pBreed;
    this->pExtinct = pExtinct;
    this->maxAnimals = maxAnimals;
}

template <class T>
void Breeder<T>::breed()
{
    if (zoo->getAnimalsCount() < maxAnimals)
    {
        int index1 = rand() % zoo->getAnimalsCount();
        int index2 = rand() % zoo->getAnimalsCount();
        Animal *a1 = (*zoo)[index1];
        Animal *a2 = (*zoo)[index2];
        Animal *newAnimal = crossedOver(a1, a2);
        zoo->operator+=(newAnimal);
    }
}

template <class T>
void Breeder<T>::extinct()
{
    int index = rand() % zoo->getAnimalsCount();
    Animal *a = (*zoo)[index];
    zoo->operator-=(a);
}

template <class T>
void Breeder<T>::simulate()
{
    float r;
    while(zoo->getAnimalsCount() > 0 && zoo->getAnimalsCount() < maxAnimals)
    {
        r = (float)rand() / RAND_MAX;
        if (r < pBreed)
        {
            breed();
        }
        else if (r < pBreed + pExtinct)
        {
            extinct();
        }
        cout<<zoo->toString()<<endl;
    }
}

template <class T>
Animal* Breeder<T>::crossedOver(Animal *a1, Animal *a2){
    Animal *new_animal;
    string animalType, common_name, specialFeature, name;
    float specialFeature2;

    if((float)rand() / RAND_MAX <= 0.5){
        name = a1->chooseName();
        animalType = a1->whatAmI();
        common_name = a1->getCommonName();
    }else{
        name = a2->chooseName();
        animalType = a2->whatAmI();
        common_name = a2->getCommonName();
    }

    int weight = (a1->getWeight() + a2->getWeight()) / 2;

    if(animalType == "Mammal"){
        specialFeature = Mammal::getSpecialString();
        specialFeature2 = Mammal::getSpecialFloat();
        new_animal = new Mammal(name, common_name, weight, specialFeature, specialFeature2);
    }
    else if(animalType == "Reptile"){
        specialFeature = Reptile::getSpecialString();
        specialFeature2 = Reptile::getSpecialFloat();
        new_animal = new Reptile(name, common_name, weight, specialFeature, specialFeature2);
    }
    else if(animalType == "Bird"){
        specialFeature = Bird::getSpecialString();
        specialFeature2 = Bird::getSpecialFloat();
        new_animal = new Bird(name, common_name, weight, specialFeature, specialFeature2);
    }
    else if(animalType == "Fish"){
        specialFeature = Fish::getSpecialString();
        specialFeature2 = Fish::getSpecialFloat();
        new_animal = new Fish(name, common_name, weight, specialFeature, specialFeature2);
    }
    else if(animalType == "Amphibian"){
        specialFeature = Amphibian::getSpecialString();
        specialFeature2 = Amphibian::getSpecialFloat();
        new_animal = new Amphibian(name, common_name, weight, specialFeature, specialFeature2);
    }
    else{
        new_animal = new Animal(name, common_name, weight);
    }

    return new_animal;
}

#endif //PERFECTZOO_BREEDER_H
