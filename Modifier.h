#ifndef MODIFIER_H
#define MODIFIER_H
#include "GridUnit.h"

class Modifier: public GridUnit{
    protected:
    public:
        virtual void apply(GridUnit& unit);
};

void Modifier::apply(GridUnit& unit){

}
#endif