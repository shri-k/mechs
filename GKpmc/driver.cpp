#include "tdoll.h"
#include "echelon.h"
#include <iostream>


using namespace std;

int main() 
{


    cout << "Commander, welcome to Griffin & Kryuger PMC special division #0000" << endl;
    cout << "You will need to assemble 1 elite echelon" << endl;
    cout << endl << "MENU: quit, factory, echelon, combat"  << endl;

    string input;
    echelon E1;
    tdoll ADS = tdoll("ADS", "AR");
    ADS.giftReport(29);
    ADS.dummyLink();
    E1.insert(ADS);    

    while (true) 
    {
        cout << "Input command: ";
        cin >> input;

        if (input == "quit") 
        {
            return 0;
        }

        else if (input == "factory")
        {
            //to do
            return 0;
        }

        else if (input == "echelon")
        {
            //to do
            
            E1.printEchelon();
            return 0;
        }

        else if (input == "combat")
        {
            //to do
            return 0;
        }

        else {
            cout << "error issuing command, try: quit, factory, echelon, combat" << endl;
        }
        
    }


    return 0;
}