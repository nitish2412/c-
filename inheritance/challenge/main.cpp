#include<iostream>
#include <vector>
#include "Account_Util.h"
#include "Savings_Account.h"


using namespace std;


int main(){

    cout.precision(2);
    cout<<fixed;

    //accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe",2000});
    accounts.push_back(Account {"Curly",5000});
    

    display(accounts);
    deposit(accounts,3000);
    withdraw(accounts,5000);
    //savings

    vector<Savings_Account> s_accounts;
    s_accounts.push_back(Savings_Account {});
    s_accounts.push_back(Savings_Account {"Superman"});
    s_accounts.push_back(Savings_Account {"Batman",2000});
    s_accounts.push_back(Savings_Account {"marvel",5000, 5.0});
    

    display(s_accounts);
    deposit(s_accounts,3000);
    withdraw(s_accounts,5000);




    return 0;
}