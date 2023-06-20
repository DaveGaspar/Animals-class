#ifndef FROG_H
#define FROG_H

#include "Aquatic.h"

class Frog:public Aquatic{
    protected:
        int v_sacs_size;
        std::string* p_vocal_sacs;
        void voice() final;
    public:
        Frog();
        Frog(int);
        Frog (const Frog&);
        Frog& operator = (const Frog&);
        ~Frog() final;
};

#endif