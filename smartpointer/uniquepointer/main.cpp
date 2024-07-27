#include<iostream>
#include<vector>
#include<memory>

using namespace std;

class Test{
    private:
        int data;
    public:
        Test():data{0}{cout<<"Test constructor("<<data<<")"<<endl;}
        Test(int data):data{data}{cout<<"Test constructor("<<data<<")"<<endl;}
        int get_data()const {return data;}
        ~Test(){cout<<"Test destructor("<<data<<")"<<endl;}


};

int main(){

    //Test  t1{1000};
   // Test *t1 = new Test(1000);
    //delete t1;

    std::unique_ptr<Test> t1 {new Test(100)};
    std::unique_ptr<Test> t2 = std::make_unique<Test>(2000);

    std::unique_ptr<Test> t3;

    //t3= t1; // compiler error
     t3 = std::move(t1);

     if(!t1){
         cout<<"t1 is nullptr\n";
     }

    return 0;
}