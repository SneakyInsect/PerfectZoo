#include <iostream>
#include "notmain/Animal.h"
#include "notmain/Zoo.h"
#include "notmain/Breeder.h"
#include "Groups\Mammal.h"
#include "Groups\Reptile.h"
#include "Groups\Fish.h"
#include "Groups\Bird.h"
#include "Groups\Amphibian.h"

using namespace std;

int main(){
    Zoo<Animal*> zoo("PerfectZoo");

    int n;
    cout<<"How many starting animals would you like: (int)"<<endl;
    cin>>n;
    for(int i = 0; i < n; i++) {
        zoo.addRandomAnimal();
    }

    cout<<zoo.toString()<<endl;

    float pb = 0;
    float pe = 1-pb;
    int maxAnimals = 100;

    Breeder<Animal*> *breeder = new Breeder<Animal*>(&zoo, pb, pe, maxAnimals);
    breeder->simulate();
    
    //delete zoo;
    return 0;
}