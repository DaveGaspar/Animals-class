#include "Shark.h"

void Shark::voice(){
    std::cout << "I'm a shark" << std::endl; 
}

Shark::Shark(){
    voice();
}

Shark::~Shark(){
    std::cout << "Destructor Shark" << std::endl;
}