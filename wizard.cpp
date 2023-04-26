#include "player.h"
#include "wizard.h"
#include <string>
#include <iostream>

Wizard::Wizard(){
};
Wizard::Wizard(std::string _name, int _health, int _damage){
    name = _name;
    health = _health;
    damage = _damage;
    mana = damage;
};

int Wizard::getMana(){
    return mana;
};

void Wizard::castSpell(Player* opponent){
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
    opponent->takeDamage(mana);
};