#ifndef WHALE_H
#define WHALE_H

#include "Aquatic.h"

class Whale:public Aquatic{
    protected:
        void voice() final;
    public:
        Whale();
        ~Whale() final;
};

#endif