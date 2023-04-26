#ifndef WARRIOR_H
#define WARRIOR_H
#include "player.h"
#include <string>

class Warrior: public Player{
    private:
        std::string weapon;
    public:
        Warrior();
        Warrior(std::string name, int health, int damage);
        void swingWeapon(Player* opponent);

};
#endif