#ifndef ANIMAL_REPTILE_H
#define ANIMAL_REPTILE_H

#include "notmain/Animal.h"

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
    static string chooseCommonName();
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
    static string getSpecialString();
    static float getSpecialFloat();
};

#endif //ANIMAL_REPTILE_H
