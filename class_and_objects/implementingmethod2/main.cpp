#include<iostream>

#include "Account.h"

using namespace std;

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