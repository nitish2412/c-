#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Move{

private:
    int *data;


public:

   void set_data(int d){*data = d;}
   int get_data(){return *data;}
    //constructor
   Move(int d);
    //copy constructor
   Move(const Move &source);
   //move constructor
   Move(Move &&source) noexcept;
   //deconstructor
   ~Move();


};

Move::Move(int d){
    data = new int;
    *data =d;
    cout<<"constructor for:"<<d<<endl;
}

Move::Move(const Move &source)
    :Move{*source.data}{
        cout<<"copy constructor deep copy for:"<<*data<<endl;

}

Move::Move(Move &&source) noexcept
    :data{source.data}{
        source.data=nullptr;
        cout<<"move constructor moving sourcefor:"<<*data<<endl;

}

Move::~Move(){
    if(data!=nullptr){
        cout<<"deconstructor freeing data for:"<<*data<<endl;
    }
    else{
        cout<<"deconstructor freeing data for nullptr"<<endl;
    }
    delete data;
  
}

void display_Move(Move s){
    cout<<"Move data:"<<s.get_data()<<endl;
}

int main(){

  vector<Move> vec;
  vec.push_back(Move{10});
  vec.push_back(Move{20});
  vec.push_back(Move{30});
  vec.push_back(Move{40});
  vec.push_back(Move{50});
  vec.push_back(Move{60});
  vec.push_back(Move{70});
  vec.push_back(Move{80});

   

    return 0;
}