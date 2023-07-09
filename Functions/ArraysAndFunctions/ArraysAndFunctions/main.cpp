#include <iostream>


using namespace std;

// prototypes
void print_array(int arr[], size_t size);

// sets all the values in the array to a number 
void set_array(int arr[], size_t, int value);


// define functions
void print_array(int arr[], size_t size){
    for (size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void set_array(int arr[], size_t size, int value){
    for (size_t i{0}; i < size; ++i)
        arr[i] = value;
}


int main(){
    int my_scores[] {1000, 98, 90, 86, 84};
    
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores,5);
    
    cout << endl;
    return 0;
}