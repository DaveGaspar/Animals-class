#include "Hummingbird.h"

void Hummingbird::voice(){
    std::cout << "I'm a hummingbird" << std::endl; 
}

Hummingbird::Hummingbird(){
    voice();
}

Hummingbird::~Hummingbird(){
    std::cout << "Destructor Hummingbird" << std::endl;
}