#ifndef AVATAR_H
#define AVATAR_H
#include <tuple>
#include "GridUnit.h"
class Avatar: public GridUnit{
    private:

    public:
        Avatar(){};
        Avatar(int x, int y){
            coordinates = make_tuple(x, y);
            entity = 'A';
        };
        void shift(int dx, int dy){
            coordinates = make_tuple(get<0>(coordinates)+ dx, get<1>(coordinates)+dy);
        };
};

#endif
