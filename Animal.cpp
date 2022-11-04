#include "Animal.h"

using namespace std;

Animal::Animal()
{
    common_name = "No name";
    weight = 0;
}

Animal::Animal(string name, int weight)
{
    common_name = name;
    this->weight = weight;
}

string Animal::getCommonName()
{
    return common_name;
}

int Animal::getWeight()
{
    return weight;
}

void Animal::setCommonName(string name)
{
    common_name = name;
}

void Animal::setWeight(int weight)
{
    this->weight = weight;
}

string Animal::toString()
{
    return "I'm " + common_name + " and I weight " + to_string(weight) + "kg.";
}



// Path: Animal.h

