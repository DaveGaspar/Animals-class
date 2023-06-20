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
    Mammal* m = new Mammal;
    std::cout << std::endl;
    Aquatic* aq = new Aquatic;
    std::cout << std::endl;
    Aerial* ae = new Aerial;
    std::cout << std::endl;
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

    Animal* arr[20];
    arr[0] = m;
    arr[1] = aq;
    arr[2] = ae;
    arr[3] = d;
    arr[4] = c;
    arr[5] = l;
    arr[6] = e;
    arr[7] = o;
    arr[8] = h;
    arr[9] = f;
    arr[10] = w;
    arr[11] = s;

    for (int i = 0; i < 12; i++){
        std::cout << std::endl;
        delete arr[i];
    }
    return 0;
}