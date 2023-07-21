#ifndef TDOLL_H
#define TDOLL_H
#include <string>


class tdoll {
    public:
        tdoll(std::string n, std::string t);
        ~tdoll();
        void giftReport(int report);
        void dummyLink();
        std::string getName();
        std::string getType();
        int getLink();
        int getLevel();
        int getStr();
        void printDoll();
        bool operator<(const tdoll& rhs) const;


    private:
        std::string name;
        std::string type;
        int link;
        int level;
        int str;
};


#endif // TDOLL_H