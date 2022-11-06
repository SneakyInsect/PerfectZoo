#ifndef ANIMAL_BIRD_H
#define ANIMAL_BIRD_H

#include "../Animal.h"

#include <iostream>
#include <string>

using namespace std;

class Bird : public Animal {
    string feather_color;
    int wing_span;
public:
    Bird();
    Bird(string common_name, int weight);
    Bird(string name, string common_name, int weight);
    Bird(string name, string common_name, int weight, string feather_color, int wing_span);
    string getCommonName();
    int getWeight();
    void setCommonName(string name);
    void setWeight(int weight);
    virtual string toString();
    string getFeatherColor();
    int getWingSpan();
    void setFeatherColor(string feather_color);
    void setWingSpan(int wing_span);
};

#endif //ANIMAL_BIRD_H