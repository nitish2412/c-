#include<iostream>
#include<string>

using namespace std;

class Deep{

private:
    int *data;


public:

   void set_data(int d){*data = d;}
   int get_data(){return *data;}
    //constructor
   Deep(int d);
    //copy constructor
   Deep(const Deep &source);
   //deconstructor
   ~Deep();


};

Deep::Deep(int d){
    data = new int;
    *data =d;
}

Deep::Deep(const Deep &source)
    :Deep{*source.data}{
        cout<<"copy constructor called Deep copy\n";

}


Deep::~Deep(){
    delete data;
    cout<<"deconstructor called\n";
}

void display_Deep(Deep s){
    cout<<"Deep data:"<<s.get_data()<<endl;
}

int main(){

    Deep obj1{100};
    
    display_Deep(obj1);

    Deep obj2{obj1};
    obj2.set_data(1000);

   

    return 0;
}