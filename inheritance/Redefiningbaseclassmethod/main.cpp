#include<iostream>
#include "Savings_Account.h"


using namespace std;


int main(){

    cout<<"==================Account class==============\n";

    Account a1{1000.0};
    cout<<a1<<endl;
    a1.deposit(500);
    cout<<a1<<endl;

    a1.withdraw(200.0);
    cout<<a1<<endl;

    a1.withdraw(5000.0);
    cout<<a1<<endl;

    cout<<"========================Saving account =================\n";

    Savings_Account s1{1000.0, 5.0};
    cout<<s1<<endl;

    s1.deposit(1000.0);

    cout<<s1<<endl;

    s1.withdraw(1000);
    cout<<s1<<endl;

    s1.withdraw(4000);
    cout<<s1<<endl;


    return 0;
}