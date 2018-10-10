/** ***********************************************************
    Jared Wood
    9/21/18

    Overworld Map
    Library for rendering a grid and moving a player within it
*********************************************************** **/

#ifndef MAP
#define MAP
#include <vector>

struct twoNumbers
{
    int newX;
    int newY;
};

struct twoNumbers;
twoNumbers movementCardinal(int locationX, int locationY, int scaleX, int scaleY, std::vector< std::vector<int> >& explore, std::vector< std::vector<char> >& grid, char wallType);
twoNumbers movementWASD(int locationX, int locationY, int scaleX, int scaleY, std::vector< std::vector<int> >& explore, std::vector< std::vector<char> >& grid, char wallType);
twoNumbers movementNum(int locationX, int locationY, int scaleX, int scaleY, std::vector< std::vector<int> >& explore, std::vector< std::vector<char> >& grid, char wallType);
twoNumbers movementNumDiag(int locationX, int locationY, int scaleX, int scaleY, std::vector< std::vector<int> >& explore, std::vector< std::vector<char> >& grid, char wallType);
void render(int locationX, int locationY, int scaleX, int scaleY, std::vector< std::vector<int> >& explore, std::vector< std::vector<char> >& grid, char playerSprite, char unexplored);

#endif // MAP
