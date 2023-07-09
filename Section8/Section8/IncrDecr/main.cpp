#include <iostream>

using namespace std;

// ++ Increment operator
// -- decrement operator

int main(){
    
    int counter (10);
    int result (0);
    
/*    cout << "Counter: " << counter << endl;
    
    counter = counter +1;
    cout << "Counter: " << counter << endl;
    
    // same as below post increment
    counter++;
    cout << "Counter: " << counter << endl;
    
    // increment preincrement
    ++counter;
    cout << "Counter: " << counter << endl;
    */
    
    
/*    // pre increment increment counter before using it
    cout << "Counter: " << counter << endl;
    
    result = ++counter;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    */
    
    // Post increment
    cout << "Counter: " << counter << endl;
    
    result = counter++;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;   
    
    
    return 0;
}