#include <iostream>
#include <vector>
#include "Mystring.h"


using namespace std;

int main(){
    // call no args constructor
    Mystring a{"Hello"};
    a = Mystring{"Hola"};
    a = "Bonjour";

    

    // some other tests
    Mystring empty;                   // no args constructor
    Mystring bryan{"Bryan"};         // overloaded constructor
    Mystring data_scientist{bryan};  // copy constructor 
    Mystring data_scientists;         // no-args constructor
    
    empty = data_scientist;         // copy assignment
    
    empty.display();
    bryan.display();
    data_scientist.display();
    empty.display();
    
    vector<Mystring> ds_vec;
    ds_vec.push_back("bryan");
    ds_vec.push_back("taylor");
    ds_vec.push_back("tino");
    
    
    cout << "====== Loop 1 =======================" << endl;
    for (const Mystring &s: ds_vec)
        s.display();
        
    cout << "======= Loop 2 ======================" << endl;
    for (Mystring &s: ds_vec)
        s="New people";    
        
    cout << "========= Loop  3 ===================" << endl;
    for (const Mystring &s: ds_vec)
        s.display();
    
    
    return 0;
}