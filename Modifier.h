#ifndef MODIFIER_H
#define MODIFIER_H
#include "GridUnit.h"

class Modifier{
    private:

    public:
        virtual void apply(GridUnit& unit);
};
#endif