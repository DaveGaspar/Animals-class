#include "Frog.h"

void Frog::voice(){
    std::cout << "I'm a frog" << std::endl; 
}

Frog::Frog(){
    v_sacs_size = 2;
    p_vocal_sacs = new std::string[v_sacs_size];
    voice();
}
Frog::Frog(int size){
    v_sacs_size = size;
    p_vocal_sacs = new std::string[v_sacs_size];
    voice();
}
Frog::Frog (const Frog& obj){
    this->v_sacs_size = obj.v_sacs_size;
    p_vocal_sacs = new std::string[v_sacs_size];
    for (int i = 0; i < v_sacs_size; i++)
        this->p_vocal_sacs = obj.p_vocal_sacs;
}
Frog& Frog::operator = (const Frog& obj){
    if (this != &obj){
        delete[] this->p_vocal_sacs;
        p_vocal_sacs = nullptr;
        this->v_sacs_size = obj.v_sacs_size;
        p_vocal_sacs = new std::string[v_sacs_size];
        for (int i = 0; i < v_sacs_size; i++)
            this->p_vocal_sacs = obj.p_vocal_sacs;
    }
    return *this;
}
Frog::~Frog(){
    std::cout << "Destructor Frog" << std::endl;
    delete[] p_vocal_sacs;
    p_vocal_sacs = nullptr;
}