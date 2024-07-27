#include <cstring>
#include <iostream>
#include "Mystring.h"


//no args constrctor
Mystring::Mystring()
    :str{nullptr}{
        str =new char[1];
        *str = '\0';
}


//overloaded constructor
Mystring::Mystring(const char *s)
    :str{nullptr}{
        if(s==nullptr){
            str = new char[1];
            *str = '\0';
        }
        else{
            str = new char[std::strlen(s)+1];
            std:;strcpy(str,s);
        }

}

//copy constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str = new char[std::strlen(source.str)+1];
        std::strcpy(str,source.str);

}

//deconstrutor
Mystring::~Mystring(){
    delete []str;
}

//display method

void Mystring::display() const{

    std::cout<<str<<" : "<< get_length()<<std::endl;

}

int Mystring::get_length() const{
    return std::strlen(str);
}

const char *Mystring::get_str() const{ return str;}