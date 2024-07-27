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

//move constructor

Mystring::Mystring(Mystring &&source)
    :str{source.str}{
            source.str = nullptr;
            std::cout<<"Move constructor is called"<<std::endl;

}

//deconstrutor
Mystring::~Mystring(){
    if(str==nullptr){
        std::cout<<"calling deconstructoor for:nullptr"<<std::endl;
    }
    else{
       std::cout<<"calling deconstructoor for:"<<str<<std::endl; 
    }

    delete []str;
}

//copy assignment

Mystring &Mystring::operator= (const Mystring &rhs){

    std::cout<<"Copy asssignment"<<std::endl;
    if(this == &rhs)
        return *this;
    delete [] this->str; // delete [] str  both are same
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(this->str, rhs.str);
    return *this;

}

//move assignment

Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout<<"Move assignment"<<std::endl;
    if(this==&rhs){
        return *this;
    }
    delete []str;

    str = rhs.str;
    rhs.str = nullptr;
    return *this;

}
//display method

void Mystring::display() const{

    std::cout<<str<<" : "<< get_length()<<std::endl;

}

int Mystring::get_length() const{
    return std::strlen(str);
}

const char *Mystring::get_str() const{ return str;}

//overloaded insertion

std::ostream &operator<<(std::ostream &os, const Mystring &rhs){
    os<<rhs.str;
    return os;
}

// overloaded extraction

std::istream &operator>>(std::istream &in, Mystring &rhs){

    char *buff = new char[1000];
    in>>buff;
    rhs = Mystring{buff};
    delete []buff;
    return in;
}