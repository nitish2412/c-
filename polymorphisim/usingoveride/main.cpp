#include<iostream>

using namespace std;

class Base{

public:
    virtual void say_hello() const {
        cout<<"Base class say hello\n";
    }

    virtual ~Base(){};
};

class Derived :public Base{

public:
    virtual void say_hello() const override {
        cout<<"Derived class say hello\n";
    }

    virtual ~Derived(){};
};

int main(){

    Base *p1 = new Base();
    p1->say_hello();

    Derived *p2 = new Derived();
    p2->say_hello();

    Base *p3 = new Derived();
    p3->say_hello();


    delete p1;
    delete p2;
    delete p3;

    return 0;
}