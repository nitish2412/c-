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

    string get_name(){
        return name;
    }

    Player(){
        name = "None";
        health =100;
        xp = 15;
    }

    Player( string name_val, int health_val, int xp_val){
        name = name_val;
        health = health_val;
        xp = xp_val;
    }


};


int main(){

    Player hero;
    Player frank("frank",100,10);
    frank.set_name("frank");
    cout<<frank.get_name()<<endl;

   

    return 0;
}