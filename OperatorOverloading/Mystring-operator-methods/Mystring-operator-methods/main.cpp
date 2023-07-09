#include <iostream>
#include <vector>
#include "Mystring.h"


using namespace std;

int main(){
    
    // overload the ==   - and + operators
    cout << boolalpha << endl;
    
    Mystring bryan{"Bryan"}; 
    Mystring tino{"Tino"};
    
    Mystring data_scientist = bryan;
    bryan.display();
    tino.display();
    
    cout << (bryan == tino) << endl;
    cout << (bryan == data_scientist) << endl;
    
    bryan.display();

    Mystring data_scientists = bryan + "Tino";
    
    // Mystring data_scientists = "Bryan" + tino will generate error
    
    Mystring two_ds = bryan + " " + "Tino";
    two_ds.display();
    
    Mystring three_ds = bryan + " " + tino + " " + "Taylor";
    three_ds.display();
    
    
    Mystring bryan2 = -bryan;
    bryan2.display();
    
    return 0;
}