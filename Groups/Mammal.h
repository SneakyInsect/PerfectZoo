#ifndef ANIMAL_MAMMAL_H
#define ANIMAL_MAMMAL_H

#include "../Animal.h"

#include <iostream>
#include <string>

class Mammal : public Animal {
    string skin_covering;
    float gestation_period;
public:
    Mammal();
    Mammal(string common_name, int weight);
    Mammal(string name, string common_name, int weight);
    Mammal(string name, string common_name, int weight, string skin_covering, float gestation_period);
    string getCommonName();
    static string chooseCommonName();
    int getWeight();
    void setCommonName(string name);
    void setWeight(int weight);
    virtual string toString();
    string getSkinCovering();
    float getGestationPeriod();
    void setSkinCovering(string skin_covering);
    void setGestationPeriod(float gestation_period);
    virtual string whatAmI();
    static string getSpecialString();
    static float getSpecialFloat();
    virtual void setSpecialString(string s);
    virtual void setSpecialFloat(float f);

};


#endif //ANIMAL_MAMMAL_H
