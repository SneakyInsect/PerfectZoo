#include "Zoo.h"
#include <iostream>

using namespace std;

Zoo::Zoo(string ZooName)
{
    this->ZooName = ZooName;
    this->animals_count = 0;
}

Zoo& Zoo::operator+=(Animal *animal)
{
    animals.push_back(animal);
    animals_count++;
    return *this;
}

Zoo& Zoo::operator-=(Animal *animal)
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

Animal* Zoo::operator[](int index)
{
    //access the animal at the given index in the animals vector
    return animals[index];
}

Zoo::~Zoo()
{
    for (int i = 0; i < this->animals_count; i++){
        delete this->animals[i];
    }
}

int Zoo::getAnimalsCount()
{
    return this->animals_count;
}

string Zoo::toString()
{
    string result = "Zoo \"" + ZooName + "\" has " + to_string(animals_count) + " animal(s): \n";
    for (int i = 0; i < animals.size(); i++)
    {
        result += animals[i]->toString() + "\n";
    }
    return result;
}

void Zoo::addRandomAnimal()
{
    int num = rand() % 5;
    string name, common_name, weight, trait1;
    float trait2;
    Animal *animal;
    switch (num)
    {
        case 0:
            animal = new Mammal();
            break;
        case 1:
            animal = new Bird();
            break;
        case 2:
            animal = new Fish();
            break;
        case 3:
            animal = new Reptile();
            break;
        case 4:
            animal = new Amphibian();
            break;        
    }
    
            animal->setName(animal->chooseName());
            animal->setCommonName(animal->chooseCommonName());
            animal->setWeight(rand() % 1000);
            animal->setSpecialString(animal->getSpecialString());
            animal->setSpecialFloat(animal->getSpecialFloat());
    *this += animal;
    this->animals_count++;
}
