#include<iostream>

using namespace std;

class Account{
    public:
       virtual void withdraw(double amount){
            cout<<"Account :withdraw\n";
        }
        virtual ~Account(){
            cout<<"Account destructor\n";
        }

};

class Checking:public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"checking :withdraw\n";
        }
        virtual ~Checking(){
            cout<<"Checking destructor\n";
        }
};
class Savings:public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"savings :withdraw\n";
        }
        virtual ~Savings(){
            cout<<"Savings destructor\n";
        }
};
class Trust:public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"Trust :withdraw\n";
        }
        virtual ~Trust(){
            cout<<"Trust destructor\n";
        }
};

void do_withdraw(Account &account, double amount){

    account.withdraw(amount);

}

int main(){

    Account a;
    Account &ref =a;
    ref.withdraw(1000);

    Trust t;
    Trust &ref1 = t;
    ref1.withdraw(100);
    
    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1,100);
    do_withdraw(a2,200);
    do_withdraw(a3,300);
    do_withdraw(a4,400);
    
    return 0;
}