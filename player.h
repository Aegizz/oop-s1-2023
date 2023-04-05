#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{
    private:
        std::string name;
        int health;
        int damage;
    public:
        Player(std::string name, int health, int damage);
        void attack(Player* opponent, int damage);
        void takeDamage(int damage);
        int getHealth();
        void setHealth(int _health);
        int getDamage();
        void setDamage(int _damage);
        std::string getName();

};
#endif