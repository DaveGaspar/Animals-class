#ifndef HUMMINGBIRD_H
#define HUMMINGBIRD_H

#include "Aerial.h"

class Hummingbird:public Aerial{
    protected:
        void voice() final;
    public:
        Hummingbird();
        ~Hummingbird() final;
};

#endif