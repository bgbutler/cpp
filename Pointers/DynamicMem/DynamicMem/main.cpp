#include <iostream>

using namespace std;

int main(){
    
    // allocate single element on the heap
    int *int_ptr{nullptr};
    
    int_ptr = new int;
    
    cout << int_ptr << endl;
    
    // free up the memory
    delete int_ptr;
    
    size_t size{0};
    double *temp_ptr{nullptr};
    
    cout << "How many temps do you have?";
    cin >> size;
    
    temp_ptr = new double[size];
    cout << "First address is " << temp_ptr << endl;
    
    delete [] temp_ptr;
    
    cout << endl;
    return 0;
}