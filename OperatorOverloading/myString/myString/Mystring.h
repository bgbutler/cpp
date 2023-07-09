#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
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
    
    
    // destructor
    ~Mystring();
    
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif // _MYSTRING_H_
