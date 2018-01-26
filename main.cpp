#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Goku {
private:
    int damage = 20;
    int health = 100;
public:
    void punch() {
        //cout << "Goku punched the enemy!" << endl;
    }
    void kick () {
        //cout << "Goku kicked the enemy!" << endl;
    }
    virtual void superSaiyan() {
        //cout << "user damage " << damage << endl;
        damage*= 3;
        health = health * 2;
        //cout << "User went Super Saiyan!" << endl;
    }
    int getDamage() {
        return damage;
    }
    int getHealth() {
        return health;
    }

};

class Gohan : public Goku {
private:
    int damage = 10;
    int health = 65;
    //int kick = 20;
public:
    void punch() {
        cout << "Gohan punched the enemy!" << endl;
    }
    void kick () {
        cout << "Gohan kicked the enemy!" << endl;
    }
    /*void superSaiyan() {
        damage*= 3;
        health = health * 2;
    }*/
    int getDamage() {
        return damage;
    }
    int getHealth() {
        return health;
    }
};


int main() {
    Goku father;
    Gohan son;
    father.punch();
    son.kick();

    son.superSaiyan();
    //cout << "Gohan's health is " << son.getHealth() << endl;
    //cout << "Gohan's damage is " << son.getDamage() << endl;
    //cout << "Goku's health is " << father.getHealth() << endl;
    //cout << "Goku's damage is " << father.getDamage() << endl;

    father.superSaiyan();
    //cout << "Goku's health is " << father.getHealth() << endl;
    //cout << "Goku's damage is " << father.getDamage() << endl;

    vector<string> saiyans;
    saiyans.emplace_back("Goku");
    saiyans.emplace_back("Vegeta");
    auto pos = saiyans.begin;
    /*while(pos != saiyans.end()) {
        cout << *pos << endl;
        pos++;
    }*/
    for(pos = saiyans.front(); pos != saiyans.back(); pos++) {
        cout << *pos << endl;
    }

    return 0;
}