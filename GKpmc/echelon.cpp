#include "echelon.h"
#include <iostream>

using namespace std;

echelon::echelon() : echelonStr(0)
{
}

echelon::~echelon()
{
}

void echelon::printEchelon()
{
    if (this->echelonSet.empty())
    {
        cout << "Echelon is empty! assign tdolls to your echelon from the factory!" << endl;

    }

    else 
    {
        cout << "Formation efficiency: " << this->echelonStr << endl;
        for (auto t : this->echelonSet)
        {
            t.printDoll();
        }
    }
}

void echelon::insert(tdoll t)
{
    this->echelonSet.insert(t);
    echelonStr += t.getStr();
}

void echelon::remove(tdoll t)
{
    this->echelonSet.erase(t);
    echelonStr -= t.getStr();
}

