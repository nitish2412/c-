#include "Account.h"

Account::Account()
:balance{0.0}{

}

Account::Account(double balance)
:balance{balance}{

}

void Account::deposit(double amount){

    balance+=amount;
}
void Account::withdraw(double amount){
    if(balance>=amount){
        balance-=amount;
    }
    else
    {
        std::cout<<"insufficient fund"<<std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Account &account){
    os<<"Account balance:"<<account.balance;
    return os;
}

