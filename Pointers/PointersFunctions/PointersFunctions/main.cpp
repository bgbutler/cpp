#include <iostream>
#include <string>
#include <vector>

using   namespace std;

void double_data(int *int_ptr){
    *int_ptr *=2;
}


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    int value {10};
    int *int_ptr{nullptr};
    
    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;
    
    
    cout << "--------------------------------" << endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;
    
    // run the swap function
    int x {100}, y {200};
    cout << "\nx: " << x << endl;
    cout << "y; " << y << endl;
    
    swap(&x, &y);
    
    cout << "\nx: " << x << endl;
    cout << "y; " << y << endl;    
    
    
    
    return 0;
}