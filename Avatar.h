#ifndef AVATAR_H
#define AVATAR_H
#include <tuple>
#include "GridUnit.h"
class Avatar: public GridUnit{
    private:

    public:
        Avatar(){            
            this->setEntity('A');
        };
        Avatar(int x, int y){
            this->setCoordinates(x, y);
            this->setEntity('A');
        };
        void shift(int dx, int dy){
            this->setCoordinates(get<0>(coordinates)+ dx, get<1>(coordinates)+dy);
        };
};

#endif
