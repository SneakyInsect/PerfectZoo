#ifndef ANIMAL_REPTILE_H
#define ANIMAL_REPTILE_H

#include "../Animal.h"

#include <iostream>
#include <string>

using namespace std;

class Reptile : public Animal {
    string camouflage;
    float tail_length;
public:
    Reptile();
    Reptile(string common_name, int weight);
    Reptile(string name, string common_name, int weight);
    Reptile(string name, string common_name, int weight, string camouflage, float tail_length);
    string getCommonName();
    virtual string chooseCommonName();
    int getWeight();
    void setCommonName(string name);
    void setWeight(int weight);
    virtual string toString();
    string getCamouflage();
    float getTailLength();
    void setCamouflage(string camouflage);
    void setTailLength(float tail_length);
    virtual void LooseTail();
    virtual string whatAmI();
    virtual string getSpecialString();
    virtual float getSpecialFloat();
    virtual void setSpecialString(string s);
    virtual void setSpecialFloat(float f);
};

#endif //ANIMAL_REPTILE_H
