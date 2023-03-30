#include "Musician.h"
#include "Orchestra.h"

Orchestra::Orchestra() {
    int size = 0;
    Musician* list;
    list = new Musician[size];
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
        }
    }
        return false;
}
Musician* Orchestra::get_members(){
    return list;
}
bool Orchestra::add_musician(Musician new_musician){
    for (int i =0; i < size; i++){
        if (list[i] == NULL){
            list[size - 1] = new_musician;
            return true;
        }
    }
}