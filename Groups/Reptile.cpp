#include "Reptile.h"

using namespace std;

Reptile::Reptile() :
Animal(), camouflage("NOT SET"), tail_length(0) {}

Reptile::Reptile(string common_name, int weight) :
Animal(common_name, weight), camouflage("NOT SET"), tail_length(0) {}

Reptile::Reptile(string name, string common_name, int weight) :
Animal(name, common_name, weight), camouflage("NOT SET"), tail_length(0) {}

Reptile::Reptile(string name, string common_name, int weight, string camouflage, float tail_length) :
Animal(name, common_name, weight), camouflage(camouflage), tail_length(tail_length) {}

string Reptile::toString()
{
    return Animal::toString() + " I'm a reptile my camouflage is " + this->camouflage + " and my tail is " + to_string(this->tail_length) + "  m long";
}

string Reptile::getCamouflage()
{
    return camouflage;
}

float Reptile::getTailLength()
{
    return tail_length;
}

void Reptile::setCamouflage(string camouflage)
{
    this->camouflage = camouflage;
}

void Reptile::setTailLength(float tail_length)
{
    this->tail_length = tail_length;
}

void Reptile::LooseTail() 
{
    if(tail_length != 0){
    cout<<"Oh no! My tail is gone!"<<endl;
    this->tail_length = 0;
    }
    else{
        cout<<"No tail no problem 8)"<<endl;
    }
}
string Reptile::whatAmI() {
    return "Reptile";
}

string Reptile::getSpecialString(){
    vector <string> fh = {"Khaki", "Green", "Brown", "Black", "White", "Light Blue", "Dark Blue", "Red", "Yellow", "Orange", "Leopard", "Zebra", "Camo"};
    int num = rand() % fh.size();
    return fh[num];
}

float Reptile::getSpecialFloat(){
    return ((float) rand() / (float) RAND_MAX) * 2;
}

string Reptile::chooseCommonName(){
    vector <string> cn = {"Snake", "Lizard", "Turtle", "Crocodile", "Alligator", "Iguana", "Gecko", "Chameleon", "Monitor Lizard", "Komodo Dragon", "Gila Monster", "Salamander", "Frog", "Toad", "Newt", "Tortoise", "Snapping Turtle", "Box Turtle", "Soft Shell Turtle", "Sea Turtle", "Alligator Snapping Turtle", "American Crocodile", "American Alligator", "Asian Water Monitor", "Burmese Python", "Caiman Lizard"};
    int num = rand() % cn.size();
    return cn[num];
}