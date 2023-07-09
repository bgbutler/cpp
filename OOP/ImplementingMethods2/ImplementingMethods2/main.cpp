
// implementing member methods 2
#include <iostream>
#include "Account.h"

using namespace std;

int main(){
    Account bryan_account;
    bryan_account.set_name("Bryan's account");
    bryan_account.set_balance(1000.0);
    
    if (bryan_account.deposit(200.00))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit not allowed" << endl;
        
    if (bryan_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
        
        
    if (bryan_account.withdraw(1500.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Insufficient funds" << endl;

    return 0;
}