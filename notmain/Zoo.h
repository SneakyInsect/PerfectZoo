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

template <class T>
class Zoo{
private:
    string ZooName;
    int animals_count;
    vector<T> animals;

public:
    Zoo(string ZooName);
    Zoo& operator+=(Animal *animal);
    Zoo& operator-=(Animal *animal);
    Animal* operator[](int index);
    ~Zoo();
    void addRandomAnimal();
    int getAnimalsCount();
    string toString();
};

template <class T>
Zoo<T>::Zoo(string ZooName)
{
    this->ZooName = ZooName;
    this->animals_count = 0;
}

template <class T>
Zoo<T>& Zoo<T>::operator+=(Animal *animal)
{
    animals.push_back(animal);
    animals_count++;
    return *this;
}

template <class T>
Zoo<T>& Zoo<T>::operator-=(Animal *animal)
{
    for (int i = 0; i < animals.size(); i++)
    {
        if (animals[i] == animal)
        {
            animals.erase(animals.begin() + i);
            animals_count--;
            break;
        }
    }
    return *this;
}

template <class T>
Animal* Zoo<T>::operator[](int index)
{
    //access the animal at the given index in the animals vector
    return animals[index];
}

template <class T>
Zoo<T>::~Zoo()
{
    for (int i = 0; i < this->animals_count; i++){
        delete this->animals[i];
    }
}

template <class T>
int Zoo<T>::getAnimalsCount()
{
    return this->animals_count;
}

template <class T>
string Zoo<T>::toString()
{
    string result = "Zoo \"" + ZooName + "\" has " + to_string(animals_count) + " animal(s): \n";
    for (int i = 0; i < animals.size(); i++)
    {
        result += animals[i]->toString() + "\n";
    }
    return result;
}

template <class T>
void Zoo<T>::addRandomAnimal()
{
    int num = rand() % 5;
    string name, common_name, trait1;
    int weight = rand() % 1000;
    float trait2;
    Animal *animal;

    name = Animal::chooseName();
    switch (num){
        case 0:
            common_name = Mammal::chooseCommonName();
            trait1 = Mammal::getSpecialString();
            trait2 = Mammal::getSpecialFloat();
            animal = new Mammal(name, common_name, weight, trait1, trait2);
            break;
        case 1:
            common_name = Bird::chooseCommonName();
            trait1 = Bird::getSpecialString();
            trait2 = Bird::getSpecialFloat();
            animal = new Bird(name, common_name, weight, trait1, trait2);
            break;
        case 2:
            common_name = Fish::chooseCommonName();
            trait1 = Fish::getSpecialString();
            trait2 = Fish::getSpecialFloat();
            animal = new Fish(name, common_name, weight, trait1, trait2);
            break;
        case 3:
            common_name = Reptile::chooseCommonName();
            trait1 = Reptile::getSpecialString();
            trait2 = Reptile::getSpecialFloat();
            animal = new Reptile(name, common_name, weight, trait1, trait2);
            break;
        case 4:
            common_name = Amphibian::chooseCommonName();
            trait1 = Amphibian::getSpecialString();
            trait2 = Amphibian::getSpecialFloat();
            animal = new Amphibian(name, common_name, weight, trait1, trait2);
            break;
    }

    *this += animal;
}


#endif // PERFECTZOO_ZOO_H
