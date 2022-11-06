#include "Zoo.h"

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

int Zoo::getAnimalsCount()
{
    return this->animals_count;
}

string Zoo::toString()
{
    string result = "Zoo \"" + ZooName + "\" has " + to_string(animals_count) + " animals: \n";
    for (int i = 0; i < animals.size(); i++)
    {
        result += animals[i]->toString() + "\n";
    }
    return result;
}
