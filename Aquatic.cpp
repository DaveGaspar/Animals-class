#include "Aquatic.h"

void Aquatic::voice(){
    std::cout << "I'm an aquatic animal" << std::endl;
}

Aquatic::Aquatic(){
    gil_size = 5;
    p_gill = new int[gil_size];
    breath_underwater();
    move();
    voice();
}

Aquatic::Aquatic(int size){
    gil_size = size;
    p_gill = new int[gil_size];
    breath_underwater();
    move();
    voice();
}

Aquatic::Aquatic (const Aquatic& obj){
    this->gil_size = obj.gil_size;
    p_gill = new int[gil_size];
    for (int i = 0; i < gil_size; i++)
        this->p_gill = obj.p_gill;
}

Aquatic& Aquatic::operator = (const Aquatic& obj){
    if (this != &obj){
        delete[] this->p_gill;
        p_gill = nullptr;
        this->gil_size = obj.gil_size;
        p_gill = new int[gil_size];
        for (int i = 0; i < gil_size; i++)
            this->p_gill = obj.p_gill;
    }
    return *this;
}

Aquatic::~Aquatic(){
    std::cout << "Destructor Aquatic" << std::endl;
    delete[] p_gill;
    p_gill = nullptr;
}

void Aquatic::breath_underwater(){
    std::cout << "Call func breath underwater" << std::endl;
}

void Aquatic::move(){
    std::cout << "I can swim" << std::endl;
}