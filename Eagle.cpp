#include "Eagle.h"

void Eagle::voice(){
    std::cout << "I'm an eagle" << std::endl; 
}

Eagle::Eagle(){
    voice();
}

Eagle::~Eagle(){
    std::cout << "Destructor Eagle" << std::endl;
}