#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();
    
    // IMPORTANT. Had to track his position.
    int posx = initialTX;
    int posy = initialTY;

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();
        std::string movement = "";
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        // (posx, posy)
        // (lightX, lightY)

        // North
        if (posy > lightY) { // Too far south.
            movement.push_back('N'); posy--;
        } else if (posy < lightY) { // Too far north
            movement.push_back('S'); posy++;
        }

        if (posx > lightX) { // Too far east.
            movement.push_back('W'); posx--;
        } else if (posx < lightX) { // Too far west.
            movement.push_back('E'); posx++;
        }
        
        
        


        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << movement << endl;
    }
}