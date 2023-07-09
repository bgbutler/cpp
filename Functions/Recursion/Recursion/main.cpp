// Recursion Fibonacci


#include <iostream>


using namespace std;

unsigned long long fibonacci(unsigned long long n){
    if (n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}





int main(){
    cout << fibonacci(1) << endl;
    cout << fibonacci(2) << endl;   // 5
    cout << fibonacci(3) << endl;  // 832040
    cout << fibonacci(4) << endl; 
    cout << fibonacci(5) << endl;
    cout << fibonacci(6) << endl; // 102334155
    return 0;
}