#ifndef GAMESESSION_H
#define GAMESESSION_H
#include "Avatar.h"
#include "GridUnit.h"
#include <vector>
using namespace std;
class GameSession{
    private:
        vector<GridUnit*> grid;
        vector<Avatar*> avatars;
    public:
        GameSession();
        vector<GridUnit*>& getGrid();
        initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight);
        gameCycle(int maxCycles, double obstacleActivationDistance);


};
GameSession::GameSession(){

}
vector<GridUnit*>& GameSession::getGrid(){
    return grid;
}
GameSession::initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight){
    grid  = GridUnit(gridWidth, gridHeight);
    for (int i = 0; i < numAvatars; i++){
        avatars[i] = Avatar()
        Helper help;
        tuple<int, int> coords;
        coords = help.generateRandomCoordinates();
        avatars[i]->setCoordinates(get<0>(coords), get<1>(coords));
    }
}
GameSession::gameCycle(int maxCycles, double obstacleActivationDistance){
    for (int i = 0; i <  maxCycles; i++){
        for (int j = 0; j <  numAvatars; j++){
            avatars[j]->shift(1,0);
        }
    }
}

#endif