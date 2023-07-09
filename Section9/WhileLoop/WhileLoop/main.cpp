#include <iostream>

using namespace std;

int main(){
/*    int num {};
    cout << " Enter a positive integer - start the countdown: ";
    cin >> num;
    
    while (num > 0) {
        cout << num << endl;
        --num;
    }
    cout << "Blastoff!" << endl;
    
    cout << endl;
    return 0;*/
    
    
    
    // count up to a number
  /*  int num {};
    cout << "Enter a positive number to count up to: ";
    cin >> num;
    
    int i{1};
    while (num >= i){
        cout << i << endl;
        i++;
    }
    
    
    int number {};
    cout << "Enter an integer less than 100: ";
    cin >> number;
    
    // two ways to write the condition, >= 0 or not less than 100
    while (number >= 100) { //!(number < 100)
    cout << "Enter a number less than 100: ";
    cin >> number;
    }
    
    cout << "That's valid - thanks!" << endl;*/
    
    bool done{false};
    int new_number {0};
    
    while (!done){
        cout << "Enter an itneget between 1 and 5: ";
        cin >> new_number;
        
        if (new_number <= 1 || new_number >= 5)
            cout << " Out of range, try again" << endl;
        else {
            cout << "Thanks!" << endl;
            done = true;
        }
            
    }
    
    
    
    
}