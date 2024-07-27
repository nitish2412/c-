#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
        friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
        friend std::istream &operator>>(std::istream &in, Mystring &rhs);


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