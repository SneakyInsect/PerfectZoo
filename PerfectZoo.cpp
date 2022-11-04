#include "Animal.h"
#include "Zoo.h"

#include <iostream>

using namespace std;

int main()
{
    Animal *animal1 = new Animal("Lion", 200);
    Animal *animal2 = new Animal("Tiger", 150);
    Animal *animal3 = new Animal("Elephant", 5000);
    Animal *animal4 = new Animal("Giraffe", 1000);
    Animal *animal5 = new Animal("Monkey", 50);
    Animal *animal6 = new Animal("Zebra", 200);
    Animal *animal7 = new Animal("Hippo", 1000);
    Animal *animal8 = new Animal("Gorilla", 200);
    Animal *animal9 = new Animal("Panda", 100);
    Animal *animal10 = new Animal("Penguin", 10);

    Zoo *zoo = new Zoo("Perfect Zoo");
    *zoo += animal1;
    *zoo += animal2;
    *zoo += animal3;
    *zoo += animal4;
    *zoo += animal5;
    *zoo += animal6;
    *zoo += animal7;
    *zoo += animal8;
    *zoo += animal9;
    *zoo += animal10;

    cout << zoo->toString() << endl;

    *zoo -= animal1;
    *zoo -= animal2;
    *zoo -= animal3;
    *zoo -= animal4;
    *zoo -= animal5;
    *zoo -= animal6;
    *zoo -= animal7;
    *zoo -= animal8;
    *zoo -= animal9;
    *zoo -= animal10;

    cout << zoo->toString() << endl;

    return 0;
}
