#include <iostream>
#include <list>
using namespace std;

class Character {
public:
    string Name;
    Character(string name) {
        Name = name;
    }
};

class Player :public Character {
private:
    int souls = 0, charisma = 1, influence = 1;
public:
    Player(string name) :Character(name) {
    }
};

class Npc :public Character {
private:
    int greed, caution;
public:
    Npc(string name) :Character(name) {

    }
};

int main()
{
    Player player("Manna");
    cout << player.Name << endl;
    Npc chad("Chad");
    cout << chad.Name << endl;

    system("pause>0");
}

