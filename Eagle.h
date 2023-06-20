#ifndef EAGLE_H
#define EAGLE_H

#include "Aerial.h"

class Eagle:public Aerial{
    protected:
        void voice() final;
    public:
        Eagle();
        ~Eagle() final;
};

#endif