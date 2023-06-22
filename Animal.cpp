#include "Animal.h"

void Animal::breath(){
    std::cout << "Call func breath" << std::endl;
}
void Animal::eat(){
    std::cout << "Call func eat" << std::endl;
}
void Animal::reproduce(){
    std::cout << "Call func reproduce" << std::endl;
}

Animal::Animal(){
    dna_size = 5;
    p_dna = new std::string[dna_size];
    breath();
}

Animal::Animal(int size){
    dna_size = size;
    p_dna = new std::string[dna_size];
    breath();
}

Animal::Animal (const Animal& obj){
    this->dna_size = obj.dna_size;
    p_dna = new std::string[dna_size];
    for (int i = 0; i < dna_size; i++)
        this->p_dna = obj.p_dna;
}

Animal& Animal::operator = (const Animal& obj){
    if (this != &obj){
        delete[] this->p_dna;
        p_dna = nullptr;
        this->dna_size = obj.dna_size;
        p_dna = new std::string[dna_size];
        for (int i = 0; i < dna_size; i++)
            this->p_dna = obj.p_dna;
    }
    return *this;
}

Animal::~Animal(){
    std::cout << "Destructor Animal" << std::endl;
    delete[] p_dna;
    p_dna = nullptr;
}