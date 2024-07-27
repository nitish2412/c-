#include <iostream>
#include<string>
#include <vector>

using namespace std;


class Account
{   
 private:
    //attributes
    string name ;
    double balance ;

public:
    //methods
    void set_balance(double bal){balance+=bal;}
    double get_balance(){ return balance;}

    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};


void Account:: set_name(string s){
    name = s;
}

string Account :: get_name(){
    return name;
}

bool Account :: deposit(double amount){
    balance+=amount;
    return true;
}

bool Account :: withdraw(double amount){
    if(balance - amount >= 0){
        balance -= amount;
        return true;
    }
    else{
        return false;
    }
}


int main(){

    Account frank_account;

    frank_account.set_name("frank_account");
    frank_account.set_balance(1000.0);

    if(frank_account.deposit(200))
        cout<<"Deposit ok\n";
    else
        cout<<"Deposit not ok\n";
    if(frank_account.withdraw(500))
        cout<<"successfully withdraw\n";
    else
        cout<<"Insufficient fund\n";
    if(frank_account.withdraw(1500))
       cout<<"successfully withdraw\n";
     else
        cout<<"Insufficient fund\n";
    cout<<frank_account.get_balance()<<endl;

    
    cout<<"Hello world\n";
    return 0;
}   