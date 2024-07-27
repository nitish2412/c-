#include<iostream>
#include<string>

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

    string get_name() const {
        return name;
    }

    Player();
    Player(string name_val);
    Player( string name_val, int health_val, int xp_val);


};

Player::Player()
: Player{"None",0,0}{
        
}
Player::Player( string name_val)
:Player{name_val,0,0}{
    
}
Player::Player( string name_val, int health_val, int xp_val)
:name{name_val},health{health_val},xp{xp_val}{
   
}

void display_player_name(const Player &p){
    cout<<p.get_name()<<endl;
}


int main(){

    const Player villan{"villan",100,80};
    //villan.xp=100;
    Player hero("frank",100,10);

    cout<<villan.get_name()<<endl;
    cout<<hero.get_name()<<endl;
    display_player_name(villan);
    display_player_name(hero);
    

   

    return 0;
}