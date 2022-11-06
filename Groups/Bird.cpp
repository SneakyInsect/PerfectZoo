#include "Bird.h"

Bird::Bird() : 
Animal(), feather_color("NONE"), wing_span(0.0) {}

Bird::Bird(string common_name, int weight) :
Animal(common_name, weight), feather_color("NONE"), wing_span(0.0) {}

Bird::Bird(string name, string common_name, int weight) :
Animal(name, common_name, weight), feather_color("NONE"), wing_span(0.0) {}

Bird::Bird(string name, string common_name, int weight, string feather_color, float wing_span) :
Animal(name, common_name, weight), feather_color(feather_color), wing_span(wing_span) {}

string Bird::toString(){
    return Animal::toString() + " I'm a bird my feathers are " + this->feather_color + " and I have a wingspan of " + to_string(this->wing_span) + " m";
}

string Bird::getFeatherColor(){
    return this->feather_color;
}

float Bird::getWingSpan(){
    return this->wing_span;
}

void Bird::setFeatherColor(string feather_color){
    this->feather_color = feather_color;
}

void Bird::setWingSpan(float wing_span){
    this->wing_span = wing_span;
}

string Bird::whatAmI(){
    return "Bird";
}

string Bird::getSpecialString(){
    vector <string> colors = {"Blue", "yellow", "Orange", "Black", "White", "purple", "Fuxia", "Magenta", "Cyan", "Green", "baby blue"};

    int num = rand() % colors.size();
    return colors[num];
}

float Bird::getSpecialFloat(){

    return ((float)rand() / (float)RAND_MAX) * 200;
}

void Bird::setSpecialString(string s){
    this->feather_color = s;
}

void Bird::setSpecialFloat(float f){
    this->wing_span = f;
}


