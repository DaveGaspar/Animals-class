#ifndef DOG_H
#define DOG_H

#include "Mammal.h"

class Dog:public Mammal{
    protected:
        int sweat_gland_size;
        int* p_sweat_gland;
        void voice() final;
    public:
        Dog();
        Dog(int);
        Dog (const Dog&);
        Dog& operator = (const Dog&);
        ~Dog() final;
        void wag_tail();
};

#endif