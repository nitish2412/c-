#include<iostream>
#include<string>

using namespace std;

class Shallow{

private:
    int *data;


public:

   void set_data(int d){*data = d;}
   int get_data(){return *data;}
    //constructor
   Shallow(int d);
    //copy constructor
   Shallow(const Shallow &source);
   //deconstructor
   ~Shallow();


};

Shallow::Shallow(int d){
    data = new int;
    *data =d;
}

Shallow::Shallow(const Shallow &source)
    :data{source.data}{
        cout<<"copy constructor called shallow copy\n";

}


Shallow::~Shallow(){
    delete data;
    cout<<"deconstructor called\n";
}

void display_shallow(Shallow s){
    cout<<"shallow data:"<<s.get_data()<<endl;
}

int main(){

    Shallow obj1{100};
    
    display_shallow(obj1);

    Shallow obj2{obj1};
    obj2.set_data(1000);

   

    return 0;
}