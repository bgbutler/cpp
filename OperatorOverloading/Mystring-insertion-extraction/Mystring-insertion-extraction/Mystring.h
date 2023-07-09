#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <string>


class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &is, Mystring &rhs);
    
private:
// pointer to a char[] that holds a c-style string
    char *str;
public:

    // no args constructor
    Mystring();
    
    // overloaded constructor
    Mystring(const char *s);
    
    
    // copy constructor
    Mystring(const Mystring &source);
    
    // move constructor; since data is changing, don't use const
    Mystring(Mystring &&source);
    
    
    // destructor
    ~Mystring();
    
    // copy assignment
    Mystring &operator=(const Mystring &rhs); 
    
    // move assignment  && for r value reference
    Mystring &operator=(Mystring &&rhs);
    
    // make the lower operator
    
    
    
    
    
    void display() const;
    int get_length() const;
    const char *get_str() const;

};



#endif // MYSTRING_H


