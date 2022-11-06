#ifndef ANIMAL_MAMMAL_H
#define ANIMAL_MAMMAL_H

#include "../Animal.h"

#include <iostream>
#include <string>

class Mammal : public Animal {
    string skin_covering;
    int gestation_period;
public:
    Mammal();
    Mammal(string common_name, int weight);
    Mammal(string name, string common_name, int weight);
    Mammal(string name, string common_name, int weight, string skin_covering, int gestation_period);
    string getCommonName();
    int getWeight();
    void setCommonName(string name);
    void setWeight(int weight);
    virtual string toString();
    string getSkinCovering();
    int getGestationPeriod();
    void setSkinCovering(string skin_covering);
    void setGestationPeriod(int gestation_period);

};


#endif //ANIMAL_MAMMAL_H
