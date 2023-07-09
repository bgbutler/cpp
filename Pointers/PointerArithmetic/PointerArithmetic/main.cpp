#include <iostream>

using namespace std;

int main(){
    //use -1 as a terminator, sentinel value
    int scores[] {100, 95, 85, 68, -1};
    int *score_ptr{scores};
    
    while (*score_ptr != -1) {
        // shows the address and the value
        cout << score_ptr << " , " << *score_ptr << endl;
        score_ptr++;
    }
    
    
    
    // cout << "\n-------------------------------------"
    score_ptr = scores;
    while (*score_ptr != -1){
        cout << *(score_ptr++) << endl;
    }
    
    // cout << "\n----------------------------------"
    char name[] {"Bryan"};
    
    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};
    
    char_ptr1 = &name[0];
    char_ptr2 = &name[3];
    
    cout << "In the string " << name << "," << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;     
}