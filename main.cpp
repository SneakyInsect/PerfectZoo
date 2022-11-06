#include <iostream>
#include ".\Animal.h"
#include ".\Zoo.h"
#include ".\Breeder.h"
#include "Groups\Mammal.h"
#include "Groups\Reptile.h"
#include "Groups\Fish.h"
#include "Groups\Bird.h"
#include "Groups\Amphibian.h"

using namespace std;

int main(){
    Zoo *zoo = new Zoo("Perfect Zoo");

    int n;
    cout<<"How many starting animals would you like: (int)"<<endl;
    cin>>n;
    for(int i = 0; i < n; i++) {
        zoo->addRandomAnimal();
    }

    cout<<zoo->toString()<<endl;

    float pb = 0.6;
    float pe = 1-pb;

    Breeder *breeder = new Breeder(zoo, pb, pe, 10);
    breeder->simulate();
    
    delete zoo;
    return 0;
}