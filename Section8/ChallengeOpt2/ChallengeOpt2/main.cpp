#include <iostream>
using namespace std;

int main(){
    
    // define the conversion value in cents
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    int change {0};
    cout << "Enter the amout of change that you have: ";
    cin >> change;
    
    // set up the counters
    int num_dollars {0};
    int num_quarters {0};
    int num_dimes {0};
    int num_nickels {0};
    int num_pennies {0};
    int balance {0};
    
    // this basic algorithm uses the modulo operator
    num_dollars = change/dollar_value;
    balance = change % dollar_value;
    
    num_quarters = balance/quarter_value;
    balance %= quarter_value;
    
    num_dimes = balance/dime_value;
    balance %= dime_value;
    
    num_nickels = balance/nickel_value;
    balance %= nickel_value;
    
    num_pennies = balance;
    
    cout << "Dollars: " << num_dollars << endl;
    cout << "Quarters: " << num_quarters << endl;
    cout << "Dimes: " << num_dimes << endl;
    cout << "Nickels: " << num_nickels << endl;
    cout << "Pennies: " << num_pennies << endl;
    
    return 0;
}