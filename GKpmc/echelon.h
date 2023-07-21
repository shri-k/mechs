#include <set>
#include "tdoll.h"

class echelon {
    public:
        echelon();
        ~echelon();
        void printEchelon();
        void insert(tdoll t);
        void remove(tdoll t);


    private:
        std::set<tdoll> echelonSet;
        int echelonStr;
};