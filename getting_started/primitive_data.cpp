#include<iostream>
#include<climits> //for sizeof
 //#include<cfloat>

using namespace std;
int main(){

    //char data type
    char middle_initial{'j'};
    cout<<"My middle initial is "<< middle_initial <<endl;

    //integer types

    unsigned short int exam_score{55}; //same as unsigned short
    cout<<"My exam score is "<<exam_score<< endl; 

    int countries_represented{65};
    cout<<"There are "<<countries_represented<< "countries present in my meeting."<<endl;

    long people{2061000};
    cout<<"there are "<<people<<"present"<<endl;

    long people_on_earth{7'600'000'000};
    cout<<"People on earth: "<<people_on_earth<<endl;

    long long distace_to_centauri{9'461'000'000'000};
    cout<<"Distance in km: "<<distace_to_centauri<<endl;


    float car_payment{401.23};
    cout<<"car payment: "<<car_payment<<endl;


    double pi{3.14159};
    cout<<"PI: "<<pi<<endl;

    long double large_amount{2.7e120};
    cout<<"large number: "<<large_amount<<endl;

    bool game_over{false};
    cout<<"Game over:"<<game_over<<endl;

    //overflow

    short v1{30000};
    short v2{1000};
    short p{v1*v2};
    cout<<"Product of number:"<<p<<endl;








    return 0;
}