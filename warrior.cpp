#include "player.h"
#include "warrior.h"
#include <iostream>
#include <string>

Warrior::Warrior(std::string _name, int _health, int _damage){
    name = _name;
    health = _health;
    damage = _damage;
};

Warrior::Warrior(){
    return;
}


void Warrior::swingWeapon(Player* opponent){
    std::cout << Warrior::name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
    opponent->takeDamage(damage);
};