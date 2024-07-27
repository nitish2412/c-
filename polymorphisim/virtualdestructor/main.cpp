#include<iostream>
#include<vector>

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

int main(){

    cout<<"======================Pointer==============\n";
    Account *p1 = new Account();
    Account *p2 = new Checking();
    Account *p3 = new Savings();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    cout<<"======================Array==============\n";

    Account *array[] = {p1,p2,p3,p4};
    for(int i=0;i<4;i++){
        array[i]->withdraw(100);
    } 

     cout<<"======================Vector==============\n";

     vector<Account*> accounts{p1,p2,p3,p4};
     for(auto acc:accounts){
         acc->withdraw(200);
     }
    

    cout<<"=================Clean up==================\n";
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    return 0;
}