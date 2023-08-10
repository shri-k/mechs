#include <string>
#include <vector>

struct player {
    std::vector<card> hand;
};


struct card {
    std::string name;
    int atk;
    int def;
};