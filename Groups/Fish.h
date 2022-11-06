#ifndef ANIMAL_FISH_H
#define ANIMAL_FISH_H

#include "../Animal.h"

#include <iostream>
#include <string>

using namespace std;

class Fish : public Animal {
    string scales_shape;
    int swim_speed;
public:
    Fish();
    Fish(string common_name, int weight);
    Fish(string name, string common_name, int weight);
    Fish(string name, string common_name, int weight, string scales_shape, int swim_speed);
    string getCommonName();
    int getWeight();
    void setCommonName(string name);
    void setWeight(int weight);
    virtual string toString();
    string getScalesShape();
    int getSwimSpeed();
    void setScalesShape(string scales_shape);
    void setSwimSpeed(int swim_speed);
    void Speak();
};

#endif //ANIMAL_FISH_H
