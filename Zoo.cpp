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
