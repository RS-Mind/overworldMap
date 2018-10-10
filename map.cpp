/** *********************************************************************************************************
    RS_Mind
    9/21/18

    Overworld Render
    Renders a map into the console. Intended to be used in other functions.
********************************************************************************************************* **/

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

void render(int playerX, int playerY, int scaleX, int scaleY, vector< vector<int> >& explore, vector< vector<char> >& grid, char playerSprite, char unexplored)
{
    explore [playerX][playerY] = 1; ///Exploration addition; default radius 1 orthogonally
    if(playerX > 0)
    {
        explore [playerX-1][playerY] = 1;
    }
    if(playerY > 0)
    {
        explore [playerX][playerY+1] = 1;
    }
    if(playerX < scaleX-1)
    {
        explore [playerX+1][playerY] = 1;
    }
    if(playerY < scaleY-1)
    {
        explore [playerX][playerY-1] = 1;
    }

    system("CLS"); //Clear the console

    for (int i = 0; i <= scaleY-1; i++) ///Render start
    {
        for (int j = 0; j <= scaleX - 1; j++)
        {
            if(j == playerX && i == playerY)
            {
                cout << playerSprite << " "; //Player sprite
            }
            else
            {
                if(explore[j][i] == 0)
                {
                    cout << unexplored << " "; //Unexplored sprite
                }
                else
                {
                    cout << grid[j][i] << " "; //Render space
                }
            }
        }
        cout << endl;
    } ///Render end

    return;
}
