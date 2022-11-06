#include "Breeder.h"

using namespace std;

Breeder::Breeder(Zoo *zoo, float pBreed, float pExtinct, int maxAnimals)
{
    this->zoo = zoo;
    this->pBreed = pBreed;
    this->pExtinct = pExtinct;
    this->maxAnimals = maxAnimals;
}

void Breeder::breed()
{
    if (zoo->getAnimalsCount() < maxAnimals)
    {
        int index1 = rand() % zoo->getAnimalsCount();
        int index2 = rand() % zoo->getAnimalsCount();
        Animal *a1 = (*zoo)[index1];
        Animal *a2 = (*zoo)[index2];
        Animal *newAnimal = crossedOver(a1, a2);
        zoo->operator+=(newAnimal);
    }
}

void Breeder::extinct()
{
    int index = rand() % zoo->getAnimalsCount();
    Animal *a = (*zoo)[index];
    zoo->operator-=(a);
}

void Breeder::simulate()
{
    float r;
    while(zoo->getAnimalsCount() > 0 && zoo->getAnimalsCount() < maxAnimals)
    {
        r = (float)rand() / RAND_MAX;
        if (r < pBreed)
        {
            breed();
        }
        else if (r < pBreed + pExtinct)
        {
            extinct();
        }
        cout<<zoo->toString()<<endl;
    }
}

Animal* Breeder::crossedOver(Animal *a1, Animal *a2){
    Animal *new_animal;
    string animalType, common_name, specialFeature, name;
    float specialFeature2;

    if((float)rand() / RAND_MAX <= 0.5){
        name = a1->chooseName();
        animalType = a1->whatAmI();
        common_name = a1->getCommonName();
        specialFeature = a1->getSpecialString();
        specialFeature2 = a1->getSpecialFloat();
        }else{
        name = a2->chooseName();
        animalType = a2->whatAmI();
        common_name = a2->getCommonName();
        specialFeature = a2->getSpecialString();
        specialFeature2 = a2->getSpecialFloat();
    }
    
    int weight = (a1->getWeight() + a2->getWeight()) / 2;

    if(animalType == "Mammal"){
        new_animal = new Mammal(name, common_name, weight, specialFeature, specialFeature2);
    }
    else if(animalType == "Reptile"){
        new_animal = new Reptile(name, common_name, weight, specialFeature, specialFeature2);
    }
    else if(animalType == "Bird"){
        new_animal = new Bird(name, common_name, weight, specialFeature, specialFeature2);
    }
    else if(animalType == "Fish"){
        new_animal = new Fish(name, common_name, weight, specialFeature, specialFeature2);
    }
    else if(animalType == "Amphibian"){
        new_animal = new Amphibian(name, common_name, weight, specialFeature, specialFeature2);
    }
    else{
        new_animal = new Animal(name, common_name, weight);
    }
    
    return new_animal;
}

string Breeder::chooseName(){
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


