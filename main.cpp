#include <iostream>
#include ".\Animal.h"
#include ".\Zoo.h"
#include "Groups\Mammal.h"

using namespace std;

int main(){
    Zoo *zoo = new Zoo("Perfect Zoo");

    cout<<zoo->toString()<<endl;

    Animal *a, *b;
    
    b = new Animal("Kasia", "Elephant", 500);
    a = new Animal("Tomek", "Lion", 200);

    *zoo += a;
    *zoo += b;  

    cout<<zoo->toString()<<endl;

}