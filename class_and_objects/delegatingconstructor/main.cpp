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
    : Player("None",0,0){
        cout<<"No arg constructor\n";
        
}
Player::Player( string name_val)
    :Player(name_val,0,0){
        cout<<"one arg constructor\n";

    
}
Player::Player( string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}{
     cout<<"three args constructor\n";
   
}



int main(){

    Player empty;
    Player frank("frank");
    Player villan("frank",100,10);


   

    return 0;
}