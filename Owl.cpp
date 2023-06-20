#include "Owl.h"

void Owl::voice(){
    std::cout << "I'm an owl" << std::endl; 
}

Owl::Owl(){
    r_toe_size = 2;
    p_reversible_toe = new int[r_toe_size];
    voice();
}

Owl::Owl(int size){
    r_toe_size = size;
    p_reversible_toe = new int[r_toe_size];
    voice();
}

Owl::Owl (const Owl& obj){
    this->r_toe_size = obj.r_toe_size;
    p_reversible_toe = new int[r_toe_size];
    for (int i = 0; i < r_toe_size; i++)
        this->p_reversible_toe = obj.p_reversible_toe;
}

Owl& Owl::operator = (const Owl& obj){
    if (this != &obj){
        delete[] this->p_reversible_toe;
        p_reversible_toe = nullptr;
        this->r_toe_size = obj.r_toe_size;
        p_reversible_toe = new int[r_toe_size];
        for (int i = 0; i < r_toe_size; i++)
            this->p_reversible_toe = obj.p_reversible_toe;
    }
    return *this;
}

Owl::~Owl(){
    std::cout << "Destructor Owl" << std::endl;
    delete[] p_reversible_toe;
    p_reversible_toe = nullptr;
}