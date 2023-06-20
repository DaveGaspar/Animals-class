#ifndef AQUATIC_H
#define AQUATIC_H

#include "Animal.h"

class Aquatic:public Animal{
    protected:
        int gil_size;
        int* p_gill;
        int fin;
        void voice() override;
        void move() final;
    public:
        Aquatic();
        Aquatic(int);
        Aquatic (const Aquatic&);
        Aquatic& operator = (const Aquatic&);
        ~Aquatic() override;
        void breath_underwater();
};

#endif