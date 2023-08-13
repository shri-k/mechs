//iostream = print out/scanner
//string self explanatory
//windows and uni are for the sleep() fnction
//playercard.h player and card classes defined in that file  
#include <iostream>
#include <string>
#include <windows.h>
#include <unistd.h>
#include "playercard.h"

//so i dont have to write std::cout and can just write cout etc
using namespace std;

int main() {
    //seeds the random number generator
    srand(time(0));

    //declare 2 players and put them in an array to access easily
    player player0;
    player player1;
    player players[2] = {player0, player1}; 

    // alternate bnetween 0 and 1 to keep track of whose turn it is.
    bool turn = 0;

    while (true) {

        cout << "player " << turn << "'s turn: " << endl;
        cout << "type any name to draw a card which will be named (1 word max)" << endl;

        //user input
        string s;
        cin >> s;
        if (s == "quit") {
            break;
        }


        sleep(1);
        cout << "player " << turn << " draws " << s << endl;

        //generate random values
        int atk = rand()%2000;
        int def = rand()%2000;
        cout << "atk: " << atk << " def: " << def << endl;

        //draw card for the player using those values
        players[turn].drawCard(s, atk, def);

        sleep(1);
        cout << "------------hand------------ " << endl;

        //print hand for player
        players[turn].printHand();
        
        








        
        //alternate the turn
        if (turn == 0) {turn = 1;}
        else if (turn == 1) {turn = 0;}

        cout << "====================================" << endl;
        sleep(1);



    }

    
    return 0;
}