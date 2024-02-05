#include <iostream>
using namespace std;

class hero {
private:
    int level;

public:
    int health;

    int getLevel() {
        return level;
    }

    int getHealth() {
        return health;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(int lvl) {
        level = lvl;
    }
};

int main() {
    hero h1;

    cout << h1.getLevel();
    h1.setLevel(5);
    h1.health = 100;

    cout << h1.getLevel() << endl;
    cout << h1.health << endl;

    return 0;
}
