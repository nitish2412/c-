#include<iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;

int main(){

    cout<<"\n============ACCOUNT===================\n";
    Account acc{};
    acc.deposit(2000);
    acc.withdraw(500);

    cout<<endl;

    Account *acc_ptr{nullptr};
    acc_ptr = new Account();

    acc_ptr->deposit(1000.0);
    acc_ptr->withdraw(200.0);
    delete acc_ptr;


    cout<<"\n============SSAVINGS ACCOUNT===================\n";
    Savings_Account s_acc{};
    s_acc.deposit(2000);
    s_acc.withdraw(500);

    cout<<endl;

    Savings_Account *s_acc_ptr{nullptr};
    s_acc_ptr = new Savings_Account();

    s_acc_ptr->deposit(1000.0);
    s_acc_ptr->withdraw(200.0);
    delete s_acc_ptr;

    return 0;
}