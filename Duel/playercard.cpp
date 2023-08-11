#include "playercard.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;


player::player() : hp(4000)
{
}

player::~player()
{
    this->hand.clear();
}

void player::drawCard(string n, int a, int d) 
{
    card newCard;
    newCard.name = n;
    newCard.atk = a;
    newCard.def = d;
    this->hand.push_back(newCard);
}

void player::printHand() 
{
    for (auto c : this->hand) {
        cout << "name: " << c.name << " atk: " << c.atk << " def: " << c.def << endl;
    }
}
