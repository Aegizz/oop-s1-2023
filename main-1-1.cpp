#include "player.h"
#include "wizard.h"
#include "warrior.h"
#include <string>
#include <iostream>
int main(){
    Warrior Player1 = Player("Warrior the Warrior", 100, 10);
    Wizard Player2 = Player("Wizard the Wizard", 100, 10);
    Player2.castSpell(Player1);
}
