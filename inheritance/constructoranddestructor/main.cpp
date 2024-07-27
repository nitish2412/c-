#include<iostream>

using namespace std;

class Base{
    private:
        int value;
    public:
      Base():value{0}{cout<<"Base constructor is called\n";}
      Base(int x):value{x}{cout<<"Base (int) overloaded constructor\n";}
      ~Base(){cout<<"base destructor\n";}

};

class Derived : public Base{

    using Base::Base;

    private:
        int double_value;
    public:
        Derived():double_value{0}{cout<<"derived constructor is called\n";}
        Derived(int x):double_value{x*2}{cout<<"Derived (int) overloaded constructor\n";}
        ~Derived(){cout<<"Derived destructor\n";}

};



int main(){

    //Base b;
    //Base b(100);
    //Derived d;
    Derived d(100);

    return 0;
}