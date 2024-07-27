#include<iostream>

using namespace std;

class I_Printable{
    friend std::ostream &operator<<(std::ostream &os, I_Printable &obj);
    public:
     virtual void print(std::ostream &os) const =0;
};

 std::ostream &operator<<(std::ostream &os, I_Printable &obj){
     obj.print(os);
     return os;

 }


class Account : public I_Printable{
    
    public:
       virtual void withdraw(double amount){
            cout<<"Account :withdraw\n";
        }

        virtual void print(std::ostream &os) const override{
            os<<"Account Display";

        }

        virtual ~Account(){}

};

class Checking:public Account{
    
    public:
        virtual void withdraw(double amount){
            cout<<"checking :withdraw\n";
        }

        virtual void print(std::ostream &os) const override{
            os<<"Checking Display";

        }
        virtual ~Checking(){}
};

class Savings:public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"savings :withdraw\n";
        }

        virtual void print(std::ostream &os) const override{
            os<<"Saving Display";

        }
        virtual ~Savings(){}
};

class Trust:public Account{
     
    public:
        virtual void withdraw(double amount){
            cout<<"Trust :withdraw\n";
        }
        virtual void print(std::ostream &os) const override{
            os<<"Trust Display";

        }
        virtual ~Trust(){}
       
};

class Dog: public I_Printable{
    public:
        virtual void print(std::ostream &os) const override{
            os<<"woof woof woof woof";

        }

};



int main(){

    /*Account a;
    cout<<a<<endl;

    Checking c;
    cout<<c<<endl;

    Savings s;
    cout<<s<<endl;

    Trust t;
    cout<<t<<endl;*/
    Dog *d = new Dog();
     cout << *d << endl;
    
    //print(*d);


    Account *p1 = new Account();
    cout << *p1 << endl;

    Account *p2 = new Checking();
    cout<< *p2 <<endl;

    delete d;
    delete p1;
    delete p2;

    return 0;
}