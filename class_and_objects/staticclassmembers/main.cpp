#include<iostream>
#include "player.h"

using namespace std;


void display_active_player(){
    cout<<"active Players:"<<Player::get_num_players()<<endl;
}

int main(){

    display_active_player();
    Player hero("hero");
    
     display_active_player();

     {
           Player frank("frank");
    
        display_active_player();

     }
     display_active_player();

     Player *enemy = new Player("enemy",100,100);
     display_active_player();
     delete enemy;
     display_active_player();

    cout<<"hello world\n";

    return 0;
}