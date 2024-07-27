#include "Account.h"

Account::Account(std::string, double balance)
:name{name},balance{balance}{

}


bool Account::deposit(double amount){
    if(amount>=0){
        balance+=amount;
        return true;
    }
    else{
        return false;
    }
}
bool Account::withdraw(double amount){
    if(balance>=amount){
        balance-=amount;
        return true;
    }
    else
    {
        //std::cout<<"insufficient fund"<<std::endl;
        return false;
    }
}

double Account::get_balance() const{
    return balance;
}

std::ostream &operator<<(std::ostream &os, const Account &account){
    os<<"Account balance:"<<account.balance;
    return os;
}

