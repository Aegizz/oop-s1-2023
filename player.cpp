#include "player.h"
#include <string>
#include <iostream>

Player::Player(){
    return;
}

Player::Player(std::string _name, int _health, int _damage){
    name = _name;
    health = _health;
    damage = _damage;
};
void Player::takeDamage(int _damage){
    health = health - _damage;

    std::cout << name << " takes " << _damage << " damage. Remaining health: " << health << "\n";
};
void Player::attack(Player* opponent, int damage){
    opponent->takeDamage(damage);

};
int Player::getDamage(){
    return damage;
};
void Player::setDamage(int _damage){
    damage = _damage;
};
int Player::getHealth(){
    return health;
};
void Player::setHealth(int _health){
    health = _health;
};
std::string Player::getName(){
    return name;
};