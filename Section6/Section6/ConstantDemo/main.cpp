#include <iostream>

using namespace std;



int main(){
    /****** Not a good way
    cout << "Hello, welcome to Bryan's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned";
    cout << endl;
    
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    cout << "\nEstimate for Carpet Cleaning Service" << endl;
    cout << "======================================" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room $" << 30 << endl;
    cout << "Cost: $" << 30*number_of_rooms << endl;
    cout << "Sales Tax: $" << 30*number_of_rooms*0.06 << endl;
    cout << "======================================" << endl;
    cout << "Total Estimate $" << (30*number_of_rooms) + (30*number_of_rooms*0.06) << endl;
    cout << "This estimate is valid for " << 30 << " days" << endl;
    *****/
    
    // This is a much better method but needs a function to handle the calculation
    cout << "Hello, welcome to Bryan's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned";
    cout << endl;
    
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    const double price_per_room{30.0};
    const double sales_tax{0.06};
    
    // days valid
    const int estimate_expiry{30};
    
    cout << "\nEstimate for Carpet Cleaning Service" << endl;
    cout << "======================================" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room *number_of_rooms << endl;
    cout << "Sales Tax: $" << price_per_room *number_of_rooms*sales_tax << endl;
    cout << "======================================" << endl;
    cout << "Total Estimate $" << (price_per_room *number_of_rooms) + (price_per_room *number_of_rooms*sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    
    return 0;
}