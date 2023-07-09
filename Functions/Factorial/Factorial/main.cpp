// Recursion Factorial


#include <iostream>


using namespace std;

unsigned long long factorial(unsigned long long n){
    if (n == 0)
        return 1;
    return n * factorial(n-1);
}





int main(){
    cout << factorial(1) << endl;
    cout << factorial(3) << endl;   // 5
    cout << factorial(8) << endl;  // 
    cout << factorial(12) << endl; 
    cout << factorial(20) << endl;
    cout << factorial(6) << endl; // 
    return 0;
}