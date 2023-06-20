#include "Aerial.h"

void Aerial::voice(){
    std::cout << "I'm an aerial animal" << std::endl;
}

Aerial::Aerial(){
    feather_size = 5;
    p_feather = new int[feather_size];
    move();
    voice();
}

Aerial::Aerial(int size){
    feather_size = size;
    p_feather = new int[size];
    move();
    voice();
}

Aerial::Aerial (const Aerial& obj){
    this->feather_size = obj.feather_size;
    p_feather = new int[feather_size];
    for (int i = 0; i < feather_size; i++)
        this->p_feather = obj.p_feather;
}

Aerial& Aerial::operator = (const Aerial& obj){
    if (this != &obj){
        delete[] this->p_feather;
        p_feather = nullptr;
        this->feather_size = obj.feather_size;
        p_feather = new int[feather_size];
        for (int i = 0; i < feather_size; i++)
            this->p_feather = obj.p_feather;
    }
    return *this;
}

Aerial::~Aerial(){
    std::cout << "Destructor Aerial" << std::endl;
    delete[] p_feather;
    p_feather = nullptr;
}

void Aerial::move(){
    std::cout << "I can fly" << std::endl;
}