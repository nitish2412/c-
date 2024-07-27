#include<iostream>
#include "Account.h"

Account::Account()
    :balance{0.0}, name{"An Account"}{

}

Account::~Account(){

}

void Account::deposit(double amount){

    std::cout<<"Deposited amount is:"<<amount<<std::endl;
}

void Account::withdraw(double amount){

    std::cout<<"withdraw amount is:"<<amount<<std::endl;

}