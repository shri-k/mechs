#include <string>
#include <vector>


struct card {
    std::string name;
    int atk;
    int def;
};



class player {
    public:
        player();
        ~player();
        void drawCard(std::string n, int a, int d);
        void printHand();
        //void attackCard(//to complete later)
    private:
        std::vector<card> hand;
        int hp;

};


