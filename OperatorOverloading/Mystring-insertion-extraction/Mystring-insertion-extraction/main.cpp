#include <iostream>
#include <vector>
#include "Mystring.h"


using namespace std;

int main(){
    
    
    Mystring bryan{"Bryan"}; 
    Mystring tino{"Tino"};
    Mystring taylor;
    
    cout << "Enter the third data scientist's first name: ";
    cin >> taylor;
    
    cout << "The three data scientists are " << bryan << ", " << tino << ", " << "taylor" << endl;
    
    cout << "\nEnter the three  data scientists names separated by a space: ";  
    cin >> bryan >> tino >> taylor;
    
    cout << "The three data scientists are " << bryan << ", " << tino << ", " << "taylor" << endl;
    
    return 0;
}