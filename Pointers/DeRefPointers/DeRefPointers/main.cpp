#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int score {100};
    int *score_ptr {&score};
    
    // get the value that it's pointing to - 100 
    cout << *score_ptr << endl;
    
    // get the address of score
    cout << "The address of score is " << &score << endl;
    cout << "The pointer address is " << score_ptr << endl;
    cout << "The value pointed to is " << *score_ptr << endl;
    
    cout << "\n-----------------------------";
    *score_ptr = 200;  // change the value at the address pointing to
    cout << "\nValue of score via pointer is now " << *score_ptr << endl; // gets the value 200
    cout << "Value of score via score var is " << score << endl;  // reflects that the pointer has changed the value to 200
    
    cout << "\n ------------------------";
    vector<string> stooges {"Larry", "Moe", "Curley"};
    vector<string> *vector_ptr {nullptr};
    int loc{};
    
    vector_ptr = &stooges;
    loc = loc + 1;
    
    // must specify position 
    cout << "\nStooge " << loc << " is " << (*vector_ptr).at(loc-1) << endl;
    
    // do a loop
    for (auto stooge: *vector_ptr)
        cout << "Stooge is " << stooge << " ";
    cout << endl;
    
}