#include "Animal.h"
#include "Aerial.h"
#include "Aquatic.h"
#include "Mammal.h"
#include "Dog.h"
#include "Lion.h"
#include "Cat.h"
#include "Eagle.h"
#include "Owl.h"
#include "Hummingbird.h"
#include "Frog.h"
#include "Whale.h"
#include "Shark.h"

int main(){
    Dog* d = new Dog;
    std::cout << std::endl;
    Cat* c = new Cat(4);
    std::cout << std::endl;
    Lion* l = new Lion(3);
    std::cout << std::endl;
    Eagle* e = new Eagle;
    std::cout << std::endl;
    Owl* o = new Owl;
    std::cout << std::endl;
    Hummingbird* h = new Hummingbird;
    std::cout << std::endl;
    Frog* f = new Frog;
    std::cout << std::endl;
    Whale* w = new Whale;
    std::cout << std::endl;
    Shark* s = new Shark;
    std::cout << std::endl;

    Animal* arr[10];
    arr[0] = d;
    arr[1] = c;
    arr[2] = l;
    arr[3] = e;
    arr[4] = o;
    arr[5] = h;
    arr[6] = f;
    arr[7] = w;
    arr[8] = s;

    for (int i = 0; i < 9; i++){
        std::cout << std::endl;
        delete arr[i];
    }
    return 0;
}