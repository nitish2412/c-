#include<iostream>
#include<string>

using namespace std;

class Player{

private:
    std::string name;
    int health;
    int xp;


public:

    string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}

    Player( string name_val= "None", int health_val=0, int xp_val=0);
    //copy constructor
    Player(const Player &source);
    //destructor
    ~Player(){cout<<"deconstructor is called: "<<name<<endl;}

};

Player::Player(string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}{
        cout<<"Three args constructor called\n";

}

Player::Player(const Player &source)
//:name(source.name), health(source.health), xp(source.xp){
  :Player{source.name,source.health,source.xp}{
    cout<<"copy constructor called:"<<source.name<<endl;

}

void display_player(Player p){
    cout<<" name:"<<p.get_name()<<endl;
    cout<<" health:"<<p.get_health()<<endl;
    cout<<" xp:"<<p.get_xp()<<endl;
}

int main(){

    //Player empty;

    Player empty("XXXXX",100,65);

    Player my_new_obj(empty);

    display_player(empty);

    Player frank{"frank"};
    Player hero("hero",100);
    Player villan("villan",100,50);
    cout<<frank.get_name()<<endl;

   

    return 0;
}