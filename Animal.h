#ifndef PERFECTZOO_ANIMAL_H
#define PERFECTZOO_ANIMAL_H

#include <string>

using namespace std;

class Animal
{
private:
    string common_name;
    int weight;

public:
    Animal();
    Animal(string name, int weight);
    string getCommonName();
    int getWeight();
    void setCommonName(string name);
    void setWeight(int weight);
    string toString();
};
    

#endif // PERFECTZOO_ANIMAL_H