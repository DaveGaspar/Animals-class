#include "Dog.h"

void Dog::voice(){
    std::cout << "I'm a dog" << std::endl; 
}

Dog::Dog(){
    sweat_gland_size = 5;
    p_sweat_gland = new int[sweat_gland_size];
    voice();
}

Dog::Dog(int size){
    sweat_gland_size = size;
    p_sweat_gland = new int[sweat_gland_size];
    voice();
}

Dog::Dog (const Dog& obj){
    this->sweat_gland_size = obj.sweat_gland_size;
    p_sweat_gland = new int[sweat_gland_size];
    for (int i = 0; i < sweat_gland_size; i++)
        this->p_sweat_gland = obj.p_sweat_gland;
}

Dog& Dog::operator = (const Dog& obj){
    if (this != &obj){
        delete[] this->p_sweat_gland;
        p_sweat_gland = nullptr;
        this->sweat_gland_size = obj.sweat_gland_size;
        p_sweat_gland = new int[sweat_gland_size];
        for (int i = 0; i < sweat_gland_size; i++)
            this->p_sweat_gland = obj.p_sweat_gland;
    }
    return *this;
}

Dog::~Dog(){
    std::cout << "Destructor Dog" << std::endl;
    delete[] p_sweat_gland;
    p_sweat_gland = nullptr;
}

void Dog::wag_tail(){
    std::cout << "Call func wag tail" << std::endl; 
}