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

//equality

bool operator==(const Mystring &lhs, const Mystring &rhs){

    return (std::strcmp(lhs.str,rhs.str)==0);

}

//make lower case

Mystring operator-(const Mystring &obj){

    char *buff = new char[std::strlen(obj.str)+1];
    std::strcpy(buff,obj.str);
    for(size_t i=0; i<std::strlen(buff);i++){
        buff[i] = std::tolower(buff[i]);
    }

    Mystring temp {buff};
    delete []buff;
    return temp;
}

//concatinate string
Mystring operator+(const Mystring &lhs, const Mystring &rhs){

    char *buff = new char[std::strlen(lhs.str)+std::strlen(rhs.str)+1];
    std::strcpy(buff,lhs.str);
    std::strcat(buff, rhs.str);

    Mystring temp {buff};
    delete []buff;
    return temp;

}