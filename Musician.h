#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
    private:
        std::string instrument;
        int experience;

    public:
        Musician::Musician(){
            instrument = "";
            experience = 0;
        }

        Musician::Musician(std::string instrument, int experience){
            int experience;
            std::string instrument;
        };

        std::string get_instrument(){
            return instrument;
        }
        int get_experience(){
            return experience;
        }
};

#endif
