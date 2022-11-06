#ifndef ANIMAL_AMPHIBIAN_H
#define ANIMAL_AMPHIBIAN_H

#include "../Animal.h"

#include <iostream>
#include <string>

using namespace std;

class Amphibian : public Animal {
    string skin_pattern;
    float jump_height;
public:
    Amphibian();
    Amphibian(string common_name, int weight);
    Amphibian(string name, string common_name, int weight);
    Amphibian(string name, string common_name, int weight, string skin_pattern, float jump_height);
    string getCommonName();
    static string chooseCommonName();
    int getWeight();
    void setCommonName(string name);
    void setWeight(int weight);
    virtual string toString();
    string getSkinPattern();
    float getJumpHeight();
    void setSkinPattern(string skin_pattern);
    void setJumpHeight(float jump_height);
    void Ribbit();
    virtual string whatAmI();
    static string getSpecialString();
    static float getSpecialFloat();
    };

#endif //ANIMAL_AMPHIBIAN_H