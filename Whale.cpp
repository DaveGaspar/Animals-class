#include "Whale.h"

void Whale::voice(){
    std::cout << "I'm a whale" << std::endl; 
}

Whale::Whale(){
    voice();
}

Whale::~Whale(){
    std::cout << "Destructor Whale" << std::endl;
}