#include <iostream>
#include "Mystring.h"


using namespace std;

int main(){
    // call no args constructor
    Mystring empty;
    
    // overloaded constructor
    Mystring bryan("Bryan");
    
    // constructor
    Mystring  datas_scientist{bryan};
    
    // do some displays
    empty.display();
    bryan.display();
    datas_scientist.display();
    
    
    
    return 0;
}