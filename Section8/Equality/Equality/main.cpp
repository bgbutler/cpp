#include <iostream>

using namespace std;

int main(){
    bool equal_result (false);
    bool not_equal_result (false);
    
    int num1{}, num2{};
    
    // use this command to convert from boolean 0/1 to alpha true/false
    cout << boolalpha;       
    
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;
    
}