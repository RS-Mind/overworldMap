/** ********************************************************************************
    Jared Wood
    9/21/18

    Overworld Movement
    Receives a directional input and modifies the player's coordinates accordingly.
****************************************************************************** * **/

#include <iostream>
#include <stdlib.h>
#include <vector>
#include "map.h"

using namespace std;

twoNumbers movementCardinal(int playerX, int playerY, int scaleX, int scaleY, vector< vector<int> >& explore, vector< vector<char> >& grid, char wallType) ///Cardinal Direction Movement
{
    char dir;

    cout << "----------" << endl << "  N  " << endl << "W   E" << endl << "  S  " << endl;

    cin.clear(); //clear input
    fflush(stdin);

    cin >> dir;

    if(dir == 'n') //move north
    {
        playerY -= 1;
        if(playerY <= -1 || grid[playerX][playerY] == wallType)
        {
            playerY += 1;
        }
    }

    if(dir == 'e') //move east
    {
        playerX += 1;
        if(playerX >= scaleX || grid[playerX][playerY] == wallType)
        {
            playerX -= 1;
        }
    }

    if(dir == 's') //move south
    {
        playerY += 1;
        if(playerY >= scaleY || grid[playerX][playerY] == wallType)
        {
            playerY -= 1;
        }
    }

    if(dir == 'w') //move west
    {
        playerX -= 1;
        if(playerX <= -1 || grid[playerX][playerY] == wallType)
        {
            playerX += 1;
        }
    }

    return twoNumbers{playerX,playerY};
}

twoNumbers movementWASD(int playerX, int playerY, int scaleX, int scaleY, vector< vector<int> >& explore, vector< vector<char> >& grid, char wallType) ///WASD Movement
{
    char dir;

    cout << "----------" << endl << "  W  " << endl << "A   D" << endl << "  S  " << endl;

    cin.clear(); //clear input
    fflush(stdin);

    cin >> dir;

    if(dir == 'w') //move north
    {
        playerY -= 1;
        if(playerY <= -1 || grid[playerX][playerY] == wallType)
        {
            playerY += 1;
        }
    }

    if(dir == 'd') //move east
    {
        playerX += 1;
        if(playerX >= scaleX || grid[playerX][playerY] == wallType)
        {
            playerX -= 1;
        }
    }

    if(dir == 's') //move south
    {
        playerY += 1;
        if(playerY >= scaleY || grid[playerX][playerY] == wallType)
        {
            playerY -= 1;
        }
    }

    if(dir == 'a') //move west
    {
        playerX -= 1;
        if(playerX <= -1 || grid[playerX][playerY] == wallType)
        {
            playerX += 1;
        }
    }

    return twoNumbers{playerX,playerY};
}

twoNumbers movementNum(int playerX, int playerY, int scaleX, int scaleY, vector< vector<int> >& explore, vector< vector<char> >& grid, char wallType) ///Numpad Movement
{
    char dir;

    cout << "----------" << endl << "  8  " << endl << "4   6" << endl << "  2  " << endl;

    cin.clear(); //clear input
    fflush(stdin);

    cin >> dir;

    if(dir == '8') //move north
    {
        playerY -= 1;
        if(playerY <= -1 || grid[playerX][playerY] == wallType)
        {
            playerY += 1;
        }
    }

    if(dir == '6') //move east
    {
        playerX += 1;
        if(playerX >= scaleX || grid[playerX][playerY] == wallType)
        {
            playerX -= 1;
        }
    }

    if(dir == '2') //move south
    {
        playerY += 1;
        if(playerY >= scaleY || grid[playerX][playerY] == wallType)
        {
            playerY -= 1;
        }
    }

    if(dir == '4') //move west
    {
        playerX -= 1;
        if(playerX <= -1 || grid[playerX][playerY] == wallType)
        {
            playerX += 1;
        }
    }

    return twoNumbers{playerX,playerY};
}

twoNumbers movementNumDiag(int playerX, int playerY, int scaleX, int scaleY, vector< vector<int> >& explore, vector< vector<char> >& grid, char wallType) ///Numpad Movement Diagonal Enabled
{
    char dir;

    cout << "----------" << endl << "7 8 9" << endl << "4   6" << endl << "1 2 3" << endl;

    cin.clear(); //clear input
    fflush(stdin);

    cin >> dir;

    if(dir == '8') //move north
    {
        playerY -= 1;
        if(playerY <= -1 || grid[playerX][playerY] == wallType)
        {
            playerY += 1;
        }
    }

    if(dir == '9') //move northeast
    {
        playerY -= 1;
        playerX += 1;
        if(playerX >= scaleX || playerY <= -1 || grid[playerX][playerY] == wallType)
        {
            playerY += 1;
            playerX -= 1;
        }
    }

    if(dir == '6') //move east
    {
        playerX += 1;
        if(playerX >= scaleX || grid[playerX][playerY] == wallType)
        {
            playerX -= 1;
        }
    }

    if(dir == '3') //move southeast
    {
        playerX += 1;
        playerY += 1;
        if(playerY >= scaleY || playerX >= scaleX || grid[playerX][playerY] == wallType)
        {
            playerX -= 1;
            playerY -= 1;
        }
    }

    if(dir == '2') //move south
    {
        playerY += 1;
        if(playerY >= scaleY || grid[playerX][playerY] == wallType)
        {
            playerY -= 1;
        }
    }

    if(dir == '1') //move southwest
    {
        playerY += 1;
        playerX -= 1;
        if(playerX <= -1 || playerY >= scaleY || grid[playerX][playerY] == wallType)
        {
            playerY -= 1;
            playerX += 1;
        }
    }

    if(dir == '4') //move west
    {
        playerX -= 1;
        if(playerX <= -1 || grid[playerX][playerY] == wallType)
        {
            playerX += 1;
        }
    }

    if(dir == '7') //move northwest
    {
        playerX -= 1;
        playerY -= 1;
        if(playerY <= -1 || playerX <= -1 || grid[playerX][playerY] == wallType)
        {
            playerX += 1;
            playerY += 1;
        }
    }

    return twoNumbers{playerX,playerY};
}
