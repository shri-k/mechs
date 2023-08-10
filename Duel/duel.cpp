#include <iostream>
#include <string>

using namespace std;

int main() {

    // alternate bnetween 0 and 1 to keep track of whose turn it is.
    bool turn = 0;

    while (true) {

        cout << "player " << turn << "'s turn: " << endl;
        string s;
        cin >> s;
        cout << "player " << turn << " does " << s << endl;


        if (s == "quit") {
            break;
        }

        if (turn == 0) {turn = 1;}
        else if (turn == 1) {turn = 0;}

        cout << "====================================" << endl;



    }


    return 0;
}