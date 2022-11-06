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
    virtual string toString();
    virtual void LooseTail();
    virtual string whatAmI();
    virtual string getSpecialString();
    virtual float getSpecialFloat();
};
    

#endif // PERFECTZOO_ANIMAL_H