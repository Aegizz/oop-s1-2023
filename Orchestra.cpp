#include "Orchestra.h"
#include "Musician.h"

Orchestra::Orchestra(){
    int size = 0;
    Musician* list = new char[size];

}
Orchestra::Orchestra(int _size){
    int size = _size
    Musician* list;
    list = new Musician[size];

}
int Orchestra::get_current_number_of_members(){
    return size;
}
bool Orchestra::has_instrument(std::string instrument){
    for (int i =0; i < size; i++){
        if (list[i].get_instrument == instrument){
            return true;
        } else {
            return false;
        }
    }
}
bool Orchestra::get_members(){
    return list;
}
bool Orchestra::add_musician(Musician new_musician){
    if (sizeof(list) < size*8){
        list[size - 1] = new_musician
        return true;
    }   
}