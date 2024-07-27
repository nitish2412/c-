#include<iostream>>
#include "Account_Util.h"

void display(const std::vector<Account> &accounts){
    std::cout<<"\n=================Account==============\n";
    for(const auto &acc:accounts){
        std::cout<<acc<<std::endl;
    }
}

void deposit(std::vector<Account> &accounts, double amount){
     std::cout<<"\n=================Deposit to Account==============\n";
    for(const auto &acc:accounts){
        if(acc.deposit(amount)){
            std::cout<<"Deposited:"<<amount <<"to "<<acc<<std::endl;

        }
        else{
             std::cout<<"failed to Deposit:"<<amount <<"to "<<acc<<std::endl;
        }
    }

}

void withdraw(std::vector<Account> &accounts, double amount){
     std::cout<<"\n=================withdraw to Account==============\n";
    for(const auto &acc:accounts){
       if(acc.withdraw(amount)){
           std::cout<<"withdraw:"<<amount <<"from "<<acc<<std::endl;
       }
       else{
             std::cout<<"failed to withdraw:"<<amount <<"to "<<acc<<std::endl;
       }
    }

}

// saving account

void display(const std::vector<Savings_Account> &accounts){
    std::cout<<"\n=================saving Account==============\n";
    for(const auto &acc:accounts){
        std::cout<<acc<<std::endl;
    }
}

void deposit(std::vector<Savings_Account> &accounts, double amount){
     std::cout<<"\n=================Deposit to Saving Account==============\n";
    for(const auto &acc:accounts){
        if(acc.deposit(amount)){
            std::cout<<"Deposited:"<<amount <<"to "<<acc<<std::endl;

        }
        else{
             std::cout<<"failed to Deposit:"<<amount <<"to "<<acc<<std::endl;
        }
    }

}

void withdraw(std::vector<Savings_Account> &accounts, double amount){
     std::cout<<"\n=================withdraw to Saving  Account==============\n";
    for(const auto &acc:accounts){
       if(acc.withdraw(amount)){
           std::cout<<"withdraw:"<<amount <<"from "<<acc<<std::endl;
       }
       else{
             std::cout<<"failed to withdraw:"<<amount <<"to "<<acc<<std::endl;
       }
    }

}