#include <iostream>
#include ".\Animal.h"
#include ".\Zoo.h"
#include "Groups\Mammal.h"
#include "Groups\Reptile.h"
#include "Groups\Fish.h"
#include "Groups\Bird.h"
#include "Groups\Amphibian.h"

using namespace std;

int main(){
    Zoo *zoo = new Zoo("Perfect Zoo");

    cout<<zoo->toString()<<endl;

    Animal *a, *b, *c;
    
    a = new Animal("Kasia", "Elephant", 500);
    b = new Mammal("Tomek", "Lion", 200, "Fur", 4);
    c = new Reptile("Kuba", "comodo dragon", 40, "dirt", 0.5);

    *zoo += a;
    *zoo += b;  
    *zoo += c;

    cout<<zoo->toString();

    cout<<"Trying to cut the tail of the second animal:\n\n";

    (*zoo)[1]->LooseTail();
    cout<<(*zoo)[1]->toString();

    delete zoo;
    return 0;
}