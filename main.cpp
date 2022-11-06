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

    cout<<zoo->toString()<<endl;

    Animal *a, *b, *c, *d, *e;
    
    a = new Amphibian("Teresa", "frog", 1, "striped", 0.5);
    b = new Bird("Polly", "parrot", 2, "green", 0.5);
    c = new Fish("Nemo", "clownfish", 0.5, "triangle", 20);
    d = new Mammal("Bobby", "dog", 10, "fur", 3);
    e = new Reptile("Sally", "snake", 3, "Scottish Flag", 1);

    *zoo += a;
    *zoo += b;  
    *zoo += c;
    *zoo += d;
    *zoo += e;

    cout<<zoo->toString()<<endl;

    float pb = 0.6;
    float pe = 1-pb;

    Breeder *breeder = new Breeder(zoo, pb, pe, 10);
    breeder->simulate();
    
    delete zoo;
    return 0;
}