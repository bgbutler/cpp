#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int num {100};
    int &ref {num};
    
    // both out put the same
    cout << num << endl;
    cout << ref << endl;
    
    // chnage num and update ref
    num = 200;
    cout << "\n --------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    // change num via ref
    ref = 300;
    cout << "\n --------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    cout << "\n --------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    
    // by value so makes a copy does not change vector
    for (auto str:stooges)
        str = "Funny";
    
    for (auto str:stooges)
        cout << str << endl;
        
    // use a reference a modify the vector
    for (auto &str: stooges)
        str = "Funny";
    
    // const makes it read only
    cout << "\n --------------------------" << endl;    
    for (auto const &str: stooges)
        cout << str << endl;
    
    
}