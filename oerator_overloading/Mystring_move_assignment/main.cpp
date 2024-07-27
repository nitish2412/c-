#include<iostream>
#include<vector>
#include "Mystring.h"


using namespace std;

int main(){
    
    Mystring a{"hello"};
    a= Mystring{"hola"};
    a="bnjour";

    Mystring empty;
    Mystring larry("larry");
    Mystring stooge{larry};
    Mystring stooges;

    empty = stooge;

    empty = "Funny";

    empty.display();
    larry.display();
    stooge.display();
    empty.display();

    stooges ="larry, moe and curly";
    stooges.display();


    vector<Mystring> stooges_vec;

    stooges_vec.push_back("larry");
    stooges_vec.push_back("moe");
    stooges_vec.push_back("curly");

    cout<<"++++++++++++Loop1+++++++++++++";
    for(const Mystring &s: stooges_vec)
        s.display();


     cout<<"++++++++++++Loop2+++++++++++++";
    for(Mystring &s: stooges_vec)
        s = "changes";  //copy assignment

     cout<<"++++++++++++Loop3+++++++++++++";
    for(const Mystring &s: stooges_vec)
        s.display();



    return 0;
}