#include <iostream>
#include <vector>
#include <string>

using namespace std;




int main(){
    int num{10};
    
    cout << "Value of num is " << num << endl;
    
    cout << "Size of num is " << sizeof num << endl; // number of bytes to store it
    
    cout << "Address of num is " << &num << endl; // location in memory in hexadecimal
    
    // initialize a pointer 
    
    int *p;
    
    cout << "\nValue of p is " << p << endl; // garbage data
    
    cout << "Size of p is " << sizeof p << endl; // number of bytes to store it
    
    cout << "Address of p is " << &p << endl; // location in memory in hexadecimal
    
    // now initialize properly
    p = nullptr;
    
    cout << "\nValue of p is " << p << endl; // now set to zero
    
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};
    
    cout << "\nValue of p1 is " << sizeof p1 << endl;
    cout << "\nValue of p2 is " << sizeof p2 << endl;
    cout << "\nValue of p3 is " << sizeof p3 << endl;
    cout << "\nValue of p4 is " << sizeof p4 << endl;
    cout << "\nValue of p5 is " << sizeof p5 << endl;
    
    // new example
    int score{10};
    double high_temp{100.7};
    
    int *score_ptr{nullptr};
    
    score_ptr = &score;
    cout << "\nValue of score is " << score << endl;
    cout << "Addres of score is " << &score << endl;
    cout << "Value of score_ptr is " << score_ptr << endl;
    
    // score_ptr = &high_temp; // compiler error
}