/** *********************************************************************************************************
    Jared Wood
    10/08/18

    Overworld Map
    Renders a map that a player can navigate in into the console. Intended to be used in other functions.
********************************************************************************************************* **/

#include <iostream>
#include <stdlib.h>
#include <vector>
#include "map.h"

using namespace std;

int main()
{
    int scaleX = 5; ///Size of the grid horizontally
    int scaleY = 5; ///Size of the grid vertically
    int playerX = 2; ///Player starting location horizontal (grid starts at 0,0 in top left)
    int playerY = 2; ///Player starting location vertical
    char wallType = '/'; ///Character to represent walls; default: /
    char playerSprite = '@'; ///Player sprite; default: @
    char unexplored = '?'; ///Sprite for unexplored tiles; default: ?

    vector< vector<char> > grid(scaleX, vector<char>(scaleY)); ///Grid generation, default character: '
    for(int i = 0; i < scaleX; i++)
    {
        for(int j = 0; j < scaleY; j++)
        {
            grid[i][j] = '\''; ///<---- Change here
        }
    }

    vector< vector<int> > explore(scaleX, vector<int>(scaleY)); ///Exploration generation, default setting: All unexplored
    for(int i = 0; i < scaleX; i++)
    {
        for(int j = 0; j < scaleY; j++)
        {
            explore[i][j] = 0; ///<---- Change here
        }
    }

    while(true) ///Game Loop
    {
        render(playerX,playerY,scaleX,scaleY,explore,grid,playerSprite,unexplored); //Render function
        twoNumbers result = movementOrthagonal(playerX,playerY,scaleX,scaleY,explore,grid,wallType); ///Movement function, change "Cardinal" to "WASD", "Num", or "NumDiag" to change movement type
        playerX = result.newX;
        playerY = result.newY;
    }

    return 0;
}
