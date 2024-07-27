#include<iostream>

using namespace std;

class Account{
    friend std::ostream &operator<<(std::ostream &os, Account &acc);
    public:
       virtual void withdraw(double amount){
            cout<<"Account :withdraw\n";
        }
        virtual ~Account(){}

};

std::ostream &operator<<(std::ostream &os, Account &acc){
    os<<"Account display";
    return os;
}

class Checking:public Account{
    friend std::ostream &operator<<(std::ostream &os, Checking &acc);
    public:
        virtual void withdraw(double amount){
            cout<<"checking :withdraw\n";
        }
        virtual ~Checking(){}
};

std::ostream &operator<<(std::ostream &os, Checking &acc){
    os<<"Checking Account display";
    return os;
}


class Savings:public Account{
     friend std::ostream &operator<<(std::ostream &os, Savings &acc);
    public:
        virtual void withdraw(double amount){
            cout<<"savings :withdraw\n";
        }
        virtual ~Savings(){}
};

std::ostream &operator<<(std::ostream &os, Savings &acc){
    os<<"Saving Account display";
    return os;
}


class Trust:public Account{
     friend std::ostream &operator<<(std::ostream &os, Trust &acc);
    public:
        virtual void withdraw(double amount){
            cout<<"Trust :withdraw\n";
        }
        virtual ~Trust(){}
       
};

std::ostream &operator<<(std::ostream &os, Trust &acc){
    os<<"Trust Account display";
    return os;
}



int main(){

    /*Account a;
    cout<<a<<endl;

    Checking c;
    cout<<c<<endl;

    Savings s;
    cout<<s<<endl;

    Trust t;
    cout<<t<<endl;*/

    Account *p1 = new Account();
    cout << *p1 << endl;

    Account *p2 = new Checking();
    cout<< *p2 <<endl;

    delete p1;
    delete p2;

    return 0;
}