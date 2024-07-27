#include<iostream>
#include<string>

using namespace std;

class Player{

private:
    std::string name;
    int health;
    int xp;


public:

    Player();
    Player(string name_val);
    Player( string name_val, int health_val, int xp_val);


};

Player::Player()
: name{"None"}, health{0}, xp{0}{
        
}
Player::Player( string name_val)
: name{name_val}, health{0}, xp{0}{
    
}
Player::Player( string name_val, int health_val, int xp_val)
:name{name_val}, health{health_val}, xp{xp_val}{
   
}

/*

Player::Player(){
        name = "None";
        health = 0;
        xp = 0;
}
Player::Player( string name_val){
        name = name_val;
        health = 0;
        xp = 0;
}
Player::Player( string name_val, int health_val, int xp_val){
        name = name_val;
        health = health_val;
        xp = xp_val;
}*/


int main(){

    Player empty;
    Player frank("frank");
    Player villan("frank",100,10);


   

    return 0;
}