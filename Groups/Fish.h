#ifndef ANIMAL_FISH_H
#define ANIMAL_FISH_H

#include "../Animal.h"

#include <iostream>
#include <string>

using namespace std;

class Fish : public Animal {
    string scales_shape;
    float swim_speed;
public:
    Fish();
    Fish(string common_name, int weight);
    Fish(string name, string common_name, int weight);
    Fish(string name, string common_name, int weight, string scales_shape, float swim_speed);
    string getCommonName();
    virtual string chooseCommonName();
    int getWeight();
    void setCommonName(string name);
    void setWeight(int weight);
    virtual string toString();
    string getScalesShape();
    float getSwimSpeed();
    void setScalesShape(string scales_shape);
    void setSwimSpeed(float swim_speed);
    void Speak();
    virtual string whatAmI();
    virtual string getSpecialString();
    virtual float getSpecialFloat();
    virtual void setSpecialString(string s);
    virtual void setSpecialFloat(float f);
};

#endif //ANIMAL_FISH_H
