#ifndef AERIAL_H
#define AERIAL_H

#include "Animal.h"

class Aerial:public Animal{
    protected:
        int feather_size;
        int wing;
        int* p_feather;
        void voice() override;
        void move() final;
    public:
        Aerial();
        Aerial(int);
        Aerial (const Aerial&);
        Aerial& operator = (const Aerial&);
        ~Aerial() override;
};

#endif