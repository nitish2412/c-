#include<iostream>

using namespace std;

class Base{
    private:
        int value;
    public:
      Base():value{0}{cout<<"Base constructor is called\n";}
      Base(int x):value{x}{cout<<"Base (int) overloaded constructor\n";}

      Base(const Base &other)
        :value{other.value}{
          cout<<"Base copy constructor is called\n";
     }

    Base &operator= (const Base &rhs){
        cout<<"Base operator="<<endl;
        if(this == &rhs){
            return *this;
        }
        value = rhs.value;
        return *this;

    }
      ~Base(){cout<<"base destructor\n";}

};

class Derived : public Base{

    using Base::Base;

    private:
        int double_value;
    public:
        Derived():Base{},double_value{0}{cout<<"derived constructor is called\n";}
        Derived(int x):Base{x},double_value{x*2}{cout<<"Derived (int) overloaded constructor\n";}
        
        Derived(const Derived &other)
            :Base{other},double_value{other.double_value}{
            cout<<"derived copy constructor is called\n";
         }

        Derived &operator= (const Derived &rhs){
            cout<<"Derived operator="<<endl;
            if(this == &rhs){
                return *this;
            }
            Base::operator=(rhs);
            double_value = rhs.double_value;
            return *this;

        }

        ~Derived(){cout<<"Derived destructor\n";}

};



int main(){

    //Base b{100};   //overloaded constructor
    //Base b1{b};     //copy constructor
    //b=b1;         //copy assignment

    Derived d{100};   //overloaded constructor
    Derived d1{d};    // copy constructor
    d =d1;          // copy assignment 

    return 0;
}