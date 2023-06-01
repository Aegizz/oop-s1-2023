#ifndef GAMESESSION_H
#define GAMESESSION_H

#include "GridUnit.h"
#include <vector>
using namespace std;
class GameSession{
    private:
        vector<GridUnit*> grid;
    public:
        GameSession();
        vector<GridUnit*>& getGrid();
        initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight);
        gameCycle(int maxCycles, double obstacleActivationDistance);


};
vector<GridUnit*>& GameSession::getGrid(){
    return grid;
}
GameSession::initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight){

}

#endif