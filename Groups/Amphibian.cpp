#include "Amphibian.h"

Amphibian::Amphibian() : Animal() {
    skin_pattern = "none";
    jump_height = 0;
}

Amphibian::Amphibian(string common_name, int weight) : Animal(common_name, weight) {
    skin_pattern = "none";
    jump_height = 0;
}

Amphibian::Amphibian(string name, string common_name, int weight) : Animal(name, common_name, weight) {
    skin_pattern= "none";
    jump_height = 0;
}

Amphibian::Amphibian(string name, string common_name, int weight, string skin_pattern, float jump_height) : Animal(name, common_name, weight) {
    this->skin_pattern = skin_pattern;
    this->jump_height = jump_height;
}

string Amphibian::toString(){
    return Animal::toString() + " I'm an amphibian my skin is " + this->skin_pattern + " and I can jump " + to_string(this->jump_height) + " m";
}

float Amphibian::getJumpHeight(){
    return this->jump_height;
}

string Amphibian::getSkinPattern(){
    return this->skin_pattern;
}

void Amphibian::setJumpHeight(float jump_height){
    this->jump_height = jump_height;
}

void Amphibian::setSkinPattern(string skin_pattern){
    this->skin_pattern = skin_pattern;
}

void Amphibian::Ribbit(){
    cout<<"Ribbit, I just jumped " + to_string(this->jump_height) + " metres.";
}

string Amphibian::whatAmI(){
    return "Amphibian";
}