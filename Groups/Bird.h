#ifndef ANIMAL_BIRD_H
#define ANIMAL_BIRD_H

#include "../Animal.h"

#include <iostream>
#include <string>

using namespace std;

class Bird : public Animal {
    string feather_color;
    float wing_span;
public:
    Bird();
    Bird(string common_name, int weight);
    Bird(string name, string common_name, int weight);
    Bird(string name, string common_name, int weight, string feather_color, float wing_span);
    string getCommonName();
    static string chooseCommonName();
    int getWeight();
    void setCommonName(string name);
    void setWeight(int weight);
    virtual string toString();
    string getFeatherColor();
    float getWingSpan();
    void setFeatherColor(string feather_color);
    void setWingSpan(float wing_span);
    virtual string whatAmI();
    static string getSpecialString();
    static float getSpecialFloat();
    virtual void setSpecialString(string s);
    virtual void setSpecialFloat(float f);
};

#endif //ANIMAL_BIRD_H