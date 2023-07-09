#include "Mystring.h"
#include <iostream>
#include <cstring>

using namespace std;


// no args constructor  
Mystring::Mystring()
    : str{nullptr}
{ 
    str = new char[1];
    *str = '\0';
}


// overlaoded constructor
// '\0' null terminator
// need + 1 for terminator
Mystring::Mystring(const  char  *s)
    : str{nullptr}
    {
        if (s == nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
        }
    }


// copy constructor
Mystring::Mystring(const Mystring &source) 
    :str{nullptr}{
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
    }
    
    
// move constructor
Mystring::Mystring(Mystring &&source)
    :str(source.str){
        source.str = nullptr;
        std::cout << "Move constructor called" << std::endl;
    }

// destructor
Mystring::~Mystring()
{
    delete [] str;
}


// copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout << "Copy Assignment" << std::endl;
    // make sure not assigning to ourself
    if(this == &rhs)
        return *this;
    
    delete [] this->str;
    // + 1 for string terminator \0
    str = new char[std::strlen(rhs.str) + 1];
    // now copy it over
    std::strcpy(this->str, rhs.str);
    return *this;
}


// move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout<< "Using move assignment" << std::endl;
        // make sure not assigning to ourself
    if(this == &rhs)
        return *this;
    
    // delete the data at the place where grabbing pointer    
    delete [] str;
    str = rhs.str;
    // nullify the right side pointer
    rhs.str = nullptr;
    return *this;
}

// overloaded compare operator
bool Mystring::operator==(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) == 0);
}


// make lowercase
Mystring Mystring::operator-() const{
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i=0; i<std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// concatenate
Mystring Mystring::operator +(const Mystring &rhs) const{
    char * buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}



// display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}


// length getter
int Mystring::get_length() const  {return std::strlen(str);}

// string getter
const char *Mystring::get_str() const {return str;}


