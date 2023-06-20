#include "Cat.h"

void Cat::voice(){
    std::cout << "I'm a cat" << std::endl; 
}
Cat::Cat(){
    r_claws_size = 5;
    p_rectable_claws = new int[r_claws_size];
    voice();
}
Cat::Cat(int size){
    r_claws_size = size;
    p_rectable_claws = new int[r_claws_size];
    voice();
}
Cat::Cat (const Cat& obj){
    this->r_claws_size = obj.r_claws_size;
    p_rectable_claws = new int[r_claws_size];
    for (int i = 0; i < r_claws_size; i++)
        this->p_rectable_claws = obj.p_rectable_claws;
}
Cat& Cat::operator = (const Cat& obj){
    if (this != &obj){
        delete[] this->p_rectable_claws;
        p_rectable_claws = nullptr;
        this->r_claws_size = obj.r_claws_size;
        p_rectable_claws = new int[r_claws_size];
        for (int i = 0; i < r_claws_size; i++)
            this->p_rectable_claws = obj.p_rectable_claws;
    }
    return *this;
}
Cat::~Cat(){
    std::cout << "Destructor Cat" << std::endl;
    delete[] p_rectable_claws;
    p_rectable_claws = nullptr;
}
void Cat::purr(){
    std::cout << "Call func purr" << std::endl; 
}