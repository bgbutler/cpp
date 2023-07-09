
#include <iostream>
using namespace std;


int main(){
    //  not !, and &&, or ||;
    // not is first, then and, then or for precedence
    int num {};
    const int lower(10);
    const int upper(20);
    
    cout << boolalpha;
    
    // determine if an entered integer is between two other integers
    // assume lower < upper
    cout << " Enter an integer - the bounds are " << lower << " and " << upper << ": ";
    cin >> num;
    
    bool within_bounds {false};
    within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << ":" << within_bounds << endl;
    
    
    // check for outside of bounds
    bool outside_bounds {false};
    outside_bounds = (num < lower || num > upper);
    cout << num << " is outside " << lower << " and " << upper << ":" << outside_bounds << endl;
    
    
    // check for on of bounds
    bool on_bounds {false};
    on_bounds = (num == lower || num == upper);
    cout << num << " is on one of the bounds which are " << lower << " and " << upper << ":" << on_bounds << endl;
}