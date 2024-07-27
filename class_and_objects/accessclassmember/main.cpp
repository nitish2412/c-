#include <iostream>
#include<string>
#include <vector>

using namespace std;

class Player{

public:
    //attribute
    string name;
    int health;
    int xp;

    //methods
    void talk(string text_to_say){
        cout<<name<<" says" <<text_to_say<<endl;
    }
    bool is_dead();
};

class Account
{   
 public:
    //attributes
    string name {"Account"};
    double balance {0.0};

    //methods
    bool deposit(double bal){
        balance+=bal;
        cout<<"In deposit\n";
    }
    bool withdraw(double bal){
        balance-= bal;
        cout<< "withdraw money\n";
    }
};



int main(){

    Account frank_account;
    frank_account.name = "frank account";
    frank_account.balance = 5000;

    frank_account.deposit(1000);
    frank_account.withdraw(200);
    cout<<"account balance:"<<frank_account.balance<<endl;

    Player frank;

    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 2;
    frank.talk("hello");

    Player *enemy = new Player();
    (*enemy).name = "Enemy";
    (*enemy).health =100;
    enemy->xp = 15;
    enemy->talk("welcome");

    delete enemy;
    
    cout<<"Hello world\n";
    return 0;
}   