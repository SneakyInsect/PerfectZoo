#include "Fish.h"

Fish::Fish() : Animal() {
    scales_shape = "none";
    swim_speed = 0.0;
}

Fish::Fish(string common_name, int weight) : Animal(common_name, weight) {
    scales_shape = "none";
    swim_speed = 0.0;
}

Fish::Fish(string name, string common_name, int weight) : Animal(name, common_name, weight) {
    scales_shape = "none";
    swim_speed = 0.0;
}

Fish::Fish(string name, string common_name, int weight, string scales_shape, float swim_speed) : Animal(name, common_name, weight) {
    this->scales_shape = scales_shape;
    this->swim_speed = swim_speed;
}

string Fish::toString(){
    return Animal::toString() + " I'm a fish my scales are " + this->scales_shape + " and I can swim " + to_string(this->swim_speed) + " km/h";
}

string Fish::getScalesShape(){
    return scales_shape;
}

float Fish::getSwimSpeed(){
    return swim_speed;
}

void Fish::setScalesShape(string scales_shape){
    this->scales_shape = scales_shape;
}

void Fish::setSwimSpeed(float swim_speed){
    this->swim_speed = swim_speed;
}

void Fish::Speak() {
    cout<<"Blub blub blub"<<endl;
}

string Fish::whatAmI() {
    return "Fish";
}

