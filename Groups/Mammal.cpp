#include "Mammal.h"

using namespace std;

Mammal::Mammal() : 
Animal(), skin_covering("NOT SET"), gestation_period(0){}

Mammal::Mammal(string common_name, int weight) : 
Animal(common_name, weight), skin_covering("NOT SET"), gestation_period(0){}

Mammal::Mammal(string name, string common_name, int weight) : 
Animal(name, common_name, weight), skin_covering("NOT SET"), gestation_period(0){}

Mammal::Mammal(string name, string common_name, int weight, string skin_covering, int gestation_period) : 
Animal(name, common_name, weight), skin_covering(skin_covering), gestation_period(gestation_period){}

string Mammal::getSkinCovering()
{
    return skin_covering;
}

int Mammal::getGestationPeriod()
{
    return gestation_period;
}

void Mammal::setSkinCovering(string skin_covering)
{
    this->skin_covering = skin_covering;
}

void Mammal::setGestationPeriod(int gestation_period)
{
    this->gestation_period = gestation_period;
}

string Mammal::toString()
{
    return Animal::toString() + " I'm a mammal and I have " + this->skin_covering + " and my gestation period is " + to_string(this->gestation_period) + " months";
}



