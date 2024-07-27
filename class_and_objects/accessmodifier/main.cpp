#include <iostream>
#include<string>
#include <vector>

using namespace std;

class Player{

private:
  
    string name {"frank"};
    int health;
    int xp;

public:
    void talk(string text_to_say){
        cout<<name<<" says " <<text_to_say<<endl;
    }
    bool is_dead();
};


int main(){

    Player frank;
    //frank.name = "Frank";
    //cout<< frank.health;

    frank.talk("hello");
    cout<<"Hello world\n";
    return 0;
}   