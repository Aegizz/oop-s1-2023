#include "Musician.h"

Musician::Musician(){
    instrument = "null";
    experience = 0;
}

Musician::Musician(std::string _instrument, int _experience){
    experience = _experience;
    instrument = _instrument;

}
std::string Musician::get_instrument(){
    return instrument;

}
int Musician::get_experience(){
    return experience;

}