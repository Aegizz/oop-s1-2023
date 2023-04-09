#include "player.h"
#include "warrior.h"
#include <iostream>

void Warrior::swingWeapon(Player* opponent){
    std::cout << Warrior::name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
    opponent->takeDamage(damage);
};