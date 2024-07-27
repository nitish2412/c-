#include<iostream>

using namespace std;

class Base{

public:
    int a{0};
    void display(){cout<<a<<","<<b<<","<<c<<endl;}
protected:
    int b{0};
private:
    int c{0};

};

class Derived: public Base{

    public:
     void access_base_member(){

         a=100; //ok
         b=200; //ok
         //c=300; //not accessiable
     }

};


int main(){

    cout<<"=========Base member access from Base object========\n";

    Base base;
    base.a=100;
    //base.b=200;   ///compiler error
    //base.c=300;     //compiler error

     cout<<"=========Base member access from derived object========\n";
     Derived d;
     d.a=100;
    // d.b=200;  //error
    // d.c=300; //error

    return 0;
}