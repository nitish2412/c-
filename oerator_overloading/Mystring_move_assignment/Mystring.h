#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    char *str;
public:
    Mystring();   //no args constructor
    Mystring(const char *s);  //overloaded constructor
    Mystring(const Mystring &source);   //copy constructor
    Mystring(Mystring &&source); //move constructor
    ~Mystring();

    Mystring &operator = (const Mystring &rhs); // copy assignment

    Mystring &operator = (Mystring &&rhs);  //move assignment

    void display() const;
    int get_length() const;
    const char *get_str() const;
};


#endif