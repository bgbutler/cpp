#include <iostream>
#include <vector>

using namespace std;


int main(){
    // basic for loop
/*    int i {0};
    cout << "Basic Loop" << endl;
    for (i = 1; i <= 5; ++i)
        cout << i << endl;
        
    // with intialization
    cout << "Second Loop" << endl;
    for (int i {1}; i <= 5; ++i)
        cout << i << endl;
        
    // with step by 2
    cout << "Third Loop" << endl;
    for (int i {1}; i <= 10; i+=2)
        cout << i << endl;
        
        
    // decrement with block
    cout << "decrement" << endl;
    for (int i {10}; i > 0; --i) {
        cout << i << endl;
        cout << "counting down..." << endl; 
    }
    cout << "Blastoff!" << endl;
    
    // complex loop
    for (int i{10}; i<=100; i+=10) {
        if (i % 15 == 0)
            cout << i << endl;
    }*/
    
    // initialize multiple variables
/*    for (int i{1}, j{5}; i <=5; i++, j++)
        cout << i << " + " << j << " = " << (i+j) << endl;
    
    // make a table
    for (int i{1}; i <= 100; i++) {
        cout << i;
        if (i % 10 == 0)
            cout << endl;
        else
            cout << " ";
    }      */
            
    // new table
 /*   cout << "New Table" << endl;
      for (int i{1}; i <= 100; i++) {
        // could put it all on one line
        cout << i;
        cout << ((i % 10 == 0) ? "\n" : " " );
    }
    
    vector <int> nums {10, 20, 30, 40, 50};
    
    for (int i{0}; i < nums.size(); ++i)
        cout << nums[i] << endl;*/
        
    // sum 1 to 15
    int sum{0};
    for (int i{1}; i <= 15; i++)
        if (i % 2 != 0){
            sum = sum + i;
            // also sum += i;
            cout << sum << endl;
        }
}