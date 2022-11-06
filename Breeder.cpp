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
    string name = chooseName();
    string animalType, common_name, specialFeature;
    float specialFeature2;

    if((float)rand() / RAND_MAX <= 0.5){
        animalType = a1->whatAmI();
        common_name = a1->getCommonName();
        specialFeature = a1->getSpecialString();
        specialFeature2 = a1->getSpecialFloat();
        }else{
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
    string name;
    int index = rand() % 3;
    switch(index){
        case 0:
            name = "A";
            break;
        case 1:
            name = "B";
            break;
        case 2:
            name = "C";
            break;
    }
    return name;
}


