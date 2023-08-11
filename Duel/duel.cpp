#include <iostream>
#include <string>
#include <windows.h>
#include <unistd.h>  
#include "playercard.h"

using namespace std;

int main() {

    srand(time(0));

    player player0;
    player player1; 

    // alternate bnetween 0 and 1 to keep track of whose turn it is.
    bool turn = 0;

    while (true) {

        cout << "player " << turn << "'s turn: " << endl;
        cout << "type any name to draw a card which will be named (1 word max)" << endl;
        string s;
        cin >> s;

        if (s == "quit") {
            break;
        }


        sleep(1);
        cout << "player " << turn << " draws " << s << endl;

        int atk = rand()%2000;
        int def = rand()%2000;
        cout << "atk: " << atk << " def: " << def << endl;

        if (turn == 0) {player0.drawCard(s, atk, def);}
        else if (turn == 1) {player1.drawCard(s, atk, def);}

        sleep(1);
        cout << "------------hand------------ " << endl;

        if (turn == 0) {player0.printHand();}
        else if (turn == 1) {player1.printHand();}
        








        

        if (turn == 0) {turn = 1;}
        else if (turn == 1) {turn = 0;}

        cout << "====================================" << endl;
        sleep(1);



    }


    return 0;
}