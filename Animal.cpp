#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal()
{
    this->name = "NOT SET";
    this->common_name = "UNKNOWN";
    this->weight = 0;
}

Animal::Animal(string common_name, int weight)
{
    this->name = "NOT SET";
    this->common_name = common_name;
    this->weight = weight;
}

Animal::Animal(string name, string common_name, int weight)
{
    this->name = name;
    this->common_name = common_name;
    this->weight = weight;
}

string Animal::getCommonName()
{
    return common_name;
}

int Animal::getWeight()
{
    return weight;
}

void Animal::setCommonName(string name)
{
    this->common_name = name;
}

void Animal::setWeight(int weight)
{
    this->weight = weight;
}

void Animal::setName(string name)
{
    this->name = name;
}

string Animal::toString()
{
    return "I'm " + name + " the " + common_name + " and I weight " + to_string(weight) + "kg.";
}

void Animal::LooseTail()
{
    cout << "I'm not a lizard >.<" << endl;
}

string Animal::whatAmI() {
    return "Animal";
}

string Animal::getSpecialString() {
    return "random";
}


float Animal::getSpecialFloat() {
    return 23.0;
}

string Animal::chooseName() {
    vector <string> names = {"Bobby", "Sally", "Bob", "Sue", "John", "Jane",
"Joe", "Mary", "Tom", "Jerry", "Mickey", "Donald", "Goofy", "Minnie",
"Mickey", "Pluto", "Daisy", "Bugs", "Daffy", "Elmer", "Tweety", "Sylvester",
"Foghorn", "Pepe", "Porky", "Wile E. Coyote", "Road Runner", "Yosemite Sam",
"Taz", "Speedy Gonzales", "Pepé Le Pew", "Marvin the Martian", "Bugs Bunny",
"Tweety Bird", "Sylvester", "Yosemite Sam", "Porky Pig", "Daffy Duck", "Elmer Fudd",
"Foghorn Leghorn", "Wile E. Coyote", "Road Runner", "Speedy Gonzales", "Marvin the Martian",
"Taz", "Pepé Le Pew", "Bart", "Lisa", "Marge", "Homer", "Maggie", "Ned", "Maude", "Barney",
"Moe", "Lenny", "Carl", "Apu", "Krusty", "Sideshow Bob", "Milhouse", "Ralph", "Nelson",
"Otto", "Kearney", "Edna", "Todd", "Rod", "Jimbo", "Dolph", "Groundskeeper Willie",
"Chief Wiggum", "Seymour Skinner", "Hans Moleman", "Waylon Smithers", "Kang", "Kodos",
"Dr. Nick", "Dr. Hibbert", "Professor Frink", "Comic Book Guy", "Lenny", "Carl", "Moe",
"Barney", "Apu", "Krusty", "Sideshow Bob", "Milhouse", "Ralph", "Nelson", "Otto", "Kearney",
"Edna", "Todd", "Rod", "Jimbo", "Dolph", "Groundskeeper Willie", "Chief Wiggum", "Seymour Skinner",
"Hans Moleman", "Waylon Smithers", "Kang", "Kodos", "Dr. Nick", "Dr. Hibbert", "Professor Frink", "Comic Book"};
    
    int num = rand() % names.size();
    return names[num];
}

string Animal::chooseCommonName() {
    return "random";   
}



// Path: Animal.h

