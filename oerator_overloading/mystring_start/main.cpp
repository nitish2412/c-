#include<iostream>
#include "Mystring.h"


using namespace std;

int main(){

    Mystring empty;  //empty constructor
    Mystring larry("larry");  //overloaded constructor
    Mystring stooge{larry};   //copy constructor

    empty.display();
    larry.display();
    stooge.display();

    return 0;
}