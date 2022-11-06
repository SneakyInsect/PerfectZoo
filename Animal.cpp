#include "Animal.h"

using namespace std;

Animal::Animal()
{
    common_name = "No name";
    weight = 0;
}

Animal::Animal(string common_name, int weight)
{
    this->common_name = common_name;
    this->weight = weight;
}

Animal::Animal(string name, string common_name, int weight)
{
    this->name = name;
    this->common_name = common_name;
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
    this->common_name = name;
}

void Animal::setWeight(int weight)
{
    this->weight = weight;
}

void Animal::setName(string name)
{
    this->name = name;
}

string Animal::toString()
{
    return "I'm " + name + " the " + common_name + " and I weight " + to_string(weight) + "kg.";
}



// Path: Animal.h

