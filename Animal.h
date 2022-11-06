#ifndef PERFECTZOO_ANIMAL_H
#define PERFECTZOO_ANIMAL_H

#include <string>

using namespace std;

class Animal
{
private:
    string name;
    string common_name;
    int weight;

public:
    Animal();
    Animal(string common_name, int weight);
    Animal(string name, string common_name, int weight);
    string getCommonName();
    int getWeight();
    void setCommonName(string name);
    void setWeight(int weight);
    void setName(string name);
    string toString();
};
    

#endif // PERFECTZOO_ANIMAL_H