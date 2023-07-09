#include <iostream>

using namespace std;

int main(){
    int scores[] {100, 95, 85};
    
    cout << "Value of scores " << scores << endl;
    
    // intialize pointer
    int *score_ptr{scores};
    
    cout << "Value of score ptr " << score_ptr << endl;
    
    cout << "\nArray subscript notation ------------------------ " << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;
    
    cout << "\nPointer subscript notation ------------------------ " << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;
    
    cout << "\nPointer offset notation by value ------------------------ " << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;
    
    cout << "\nPointer offset notation by address ------------------------ " << endl;
    cout << score_ptr << endl;
    cout << (score_ptr + 1) << endl;
    cout << (score_ptr + 2) << endl;
    
    cout << "\nArray offset notation by address ------------------------ " << endl;
    cout << scores << endl;
    cout << (scores + 1) << endl;
    cout << (scores + 2) << endl;    
    
    cout << "\nArray offset notation by value ------------------------ " << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;    
    
    
    cout << endl;
    return 0;
}