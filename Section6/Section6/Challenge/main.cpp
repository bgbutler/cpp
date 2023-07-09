#include <iostream>

using namespace std;



int main(){

    // This is a much better method but needs a function to handle the calculation
    cout << "Hello, welcome to Bryan's Carpet Cleaning Service" << endl;
    
    int num_small_rooms {0};
    cout << "\nHow many small rooms would you like cleaned? ";
    cin >> num_small_rooms;
    
    int num_large_rooms {0};
    cout << "\nHow many large rooms would you like cleaned? ";
    cin >> num_large_rooms;
    
    
    const double price_small_room{25.0};
    const double price_large_room{35.0};
    const double sales_tax{0.06};
    
    // days valid
    const int estimate_expiry{30};
    
    cout << "\nEstimate for Carpet Cleaning Service" << endl;
    cout << "======================================" << endl;
    cout << "Number of small rooms: " << num_small_rooms << endl;
    cout << "Number of small rooms: " << num_large_rooms << endl;
    cout << "Price per room $" << price_small_room << endl;
    cout << "Price per room $" << price_large_room << endl;
    cout << "Cost: $" << (price_small_room *num_small_rooms) + (price_large_room *num_large_rooms) << endl;
    cout << "Sales Tax: $" << ((price_small_room *num_small_rooms) + (price_large_room *num_large_rooms)) * sales_tax << endl;
    cout << "======================================" << endl;
    cout << "Total Estimate $" << ((price_small_room *num_small_rooms) + (price_large_room *num_large_rooms)) * (1+sales_tax)  << endl;
    cout << "\nThis estimate is valid for " << estimate_expiry << " days" << endl;
    
    
    return 0;
}