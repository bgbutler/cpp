#include <iostream>

using namespace std;

int main(){
/*    int number {};
    do {
        cout << "Enter an integer between 1 and 5: ";
        cin >> number;
    } while (number <= 1 || number >= 5);
    
    cout << "Thanks!" << endl;*/
    
    
    // simple menu application
    char selection{};
    
    do {
        // build the menu
        cout << "--------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "Enter your selection: ";
        cin >> selection;
        
        if (selection == '1')
            cout << "You chose 1 - doing this" << endl;
        else if (selection == '2')
            cout << "You chose 2 - doing that" << endl;
        else if (selection == '3')
            cout << "You chose 3 - doing something else" << endl;
        else if (selection == 'Q' || selection == 'q')
            cout << "Goodbye  ..." << endl;
        else
            cout << "Uknown option -- try again ..." << endl;
        
        
    } while (selection != 'q' && selection != 'Q');
    
    cout << endl;
    return 0;
    
}