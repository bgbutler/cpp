#include <iostream>

using namespace std;

int main(){
    // first nested loop
    for (int num1 {1}; num1 <=10; ++num1){
        for (int num2 {1}; num2 <=10; ++num2){
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        // for the outer loop
        cout << "----------------------" << endl;
    }
    cout << endl;
    return 0;
}