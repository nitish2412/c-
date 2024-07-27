#include <iostream>
#include <vector>

using namespace std;

class Player{

    //attribute
    string name;
    int health;
    int xp;

    //methods
    void talk(string);
    bool is_dead();
};

class Account
{   
    //attributes
    string name {"Account"};
    double balance {0.0};

    //methods
    bool deposit(double);
    bool withdraw(double);
};



int main(){

    Account frank_account;
    Account jim_account;

    Player frank;
    Player hero;

    Player players[] {frank, hero};

    vector<Player> player_vec {frank};
    player_vec.push_back(hero);

    Player *enemy {nullptr};
    enemy = new Player();

    delete enemy;

    cout<<"Hello world\n";
    return 0;
}    /* data */
