#ifndef OWL_H
#define OWL_H

#include "Aerial.h"

class Owl:public Aerial{
    protected:
        int r_toe_size;
        int* p_reversible_toe;
        void voice() final;
    public:
        Owl();
        Owl(int);
        Owl (const Owl&);
        Owl& operator = (const Owl&);
        ~Owl() final;
};

#endif