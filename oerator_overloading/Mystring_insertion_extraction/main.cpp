#include<iostream>
#include<vector>
#include "Mystring.h"


using namespace std;

int main(){
    
   Mystring larry{"Larry"};
   Mystring moe{"Moe"};
   Mystring curly;
   
   
   cout<<"Enter the third stooge's first name:";
   cin>>curly;

    cout<<"The three stooges are:"<<larry<<","<<moe<< ", and "<<curly<<endl;

    cout<<"Enterthe three stooges anme seperated by space:";
    cin>>larry>>moe>>curly;
    cout<<"The three stooges are:"<<larry<<","<<moe<< ", and "<<curly<<endl;

    return 0;
}