#include<iostream>

using namespace std;

class Player{

private:
    std::string name;
    int health;
    int xp;


public:

    void set_name(string s){
        name=s;
    }

    Player(){
        cout<<"No arguments called\n";
    }

    Player(string name){
        cout<<"string name constructor called\n";
    }

    Player(string name, int health, int xp){

        cout<<"three argument call\n";
    }

    ~Player(){
        cout<<"Deconstructor called"<<name<<endl;
    }


};


int main(){

    {
        Player slayer;
        slayer.set_name("slayer");
    }

    {
        Player frank;
        frank.set_name("frank");
        Player hero("hero");
        hero.set_name("hero");
        Player villan("villan", 100,2);
        villan.set_name("villan");
    }

    Player *enemy = new Player;

    enemy->set_name("enemy");

    Player *level_boss = new Player("level",100,8);
    level_boss->set_name("level_boss");

    delete enemy;
    delete level_boss;

    return 0;
}