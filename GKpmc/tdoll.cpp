#include "tdoll.h"
#include <iostream>

using namespace std;

//constructor given name and type for a tdoll
tdoll::tdoll(string n, string t) : name(n), type(t), link(1), level(1), str(1)
{
}

//destructor does nothing
tdoll::~tdoll()
{
}

//gift reports to increase level
void tdoll::giftReport(int report)
{
    //linear for now
    this->level += report;
}

//increases dummy link
void tdoll::dummyLink()
{
    this->link += 1;
}

//getters for each thing
string tdoll::getName() 
{
    return this->name;
}

string tdoll::getType()
{
    return this->type;
}

int tdoll::getLink()
{
    return this->link;
}

int tdoll::getLevel()
{
    return this->level;
}

int tdoll::getStr()
{
    return (this->link * this->level);
}

//print all stats of doll
void tdoll::printDoll()
{
    cout << this->getName() << " " << this->getType() << endl;
    cout << "level " << this->getLevel() << endl;
    cout << "dummy link: " << this->link << endl;
    cout << this->getStr() << endl;
}

//operator <
bool tdoll::operator<(const tdoll& rhs) const
{
    return (this->str < rhs.str);
}


//main for testing
/*
int main() {

    tdoll ADS = tdoll("ADS", "AR");
    ADS.printDoll();

}
*/