#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
    protected:
        int dna_size;
        std::string* p_dna;
        virtual void voice();
        virtual void move();
        void breath();
        void eat();
        void reproduce();
    public:
        Animal();
        Animal(int);
        Animal (const Animal&);
        Animal& operator = (const Animal&);
        virtual ~Animal();
};

#endif