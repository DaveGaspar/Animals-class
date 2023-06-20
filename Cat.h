#ifndef CAT_H
#define CAT_H

#include "Mammal.h"

class Cat:public Mammal{
    protected:
        int r_claws_size;
        int* p_rectable_claws;
        void voice() final;
    public:
        Cat();
        Cat(int);
        Cat (const Cat&);
        Cat& operator = (const Cat&);
        ~Cat() final;
        void purr();
};

#endif