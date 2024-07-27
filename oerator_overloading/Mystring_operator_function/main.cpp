#include<iostream>
#include<vector>
#include "Mystring.h"


using namespace std;

int main(){
    
   Mystring larry{"LARRY"};
   larry.display();
  
   larry = -larry;
   larry.display();

   cout<<boolalpha<<endl;
    Mystring moe{"moe"};

    Mystring stooge = larry;

    cout<< (larry == moe)<<endl;
   cout <<(larry == stooge)<<endl;


   //Mystring stooges = larry + "Moe";
    Mystring stooges = "Moe" + larry;  //ok this time
    stooges.display();

    Mystring two_stooges = moe + " " +"Larry";

    two_stooges.display();

    Mystring three_stooges = moe +" " + larry +" " +"Curly";
    three_stooges.display();

    return 0;
}