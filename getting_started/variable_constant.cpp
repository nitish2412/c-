#include<iostream>

using namespace std;
int main(){
    int age;
    int age1=21;
    int age2 (23);
    int age3 {23};
    cout<<age;
    cout<<age2;
    int room_width{0}, room_length{0};
    cout<<"Enter a room width:";
    cin>>room_width;
    cout<<"Enter a room length:";
    cin>>room_length;
    cout<<"The area of room is:"<<room_width*room_length<<" square feet\n";


    return 0;
}