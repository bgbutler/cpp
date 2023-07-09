#include <iostream>
using namespace std;

int main(){
    int num {};
    cout << "Enter yor favorite integer: ";
    cin >> num;
    
    // use a conditional as an if else, need the ? and the : to separate yes and no options
    cout << num << " is " << ((num %2 == 0) ? "Even" : "Odd") << endl;
    
    return 0;
}