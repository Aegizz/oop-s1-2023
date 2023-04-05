#include "player.h"
#include "wizard.h"
#include <iostream>

int Wizard::getMana(){
    return mana;
};

void Wizard::castSpell(Player* opponent){
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
    opponent->takeDamage(mana);
};