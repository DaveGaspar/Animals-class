#ifndef SHARK_H
#define SHARK_H

#include "Aquatic.h"

class Shark:public Aquatic{
    protected:
        void voice() final;
    public:
        Shark();
        ~Shark() final;
};

#endif