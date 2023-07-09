// deriving our first class

#include <iostream>
#include "Account.h"
#include "Savings_account.h"

using namespace std;


int main(){
    // use the Account class
    cout << "\n=== Account =================================" << endl;
    Account acc {};
    acc.deposit(2000.0);
    acc.withdraw(500.0);
    
    cout << endl;
    
    
    Account *p_acc{nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;
    
    
    // use Savings account class
    cout << "\n=== Account =================================" << endl;
    Savings_account sav_acc{};
    sav_acc.deposit(2000.0);
    sav_acc.withdraw(1000.0);
    
    Savings_account *p_sav_acc{nullptr};
    p_sav_acc = new Savings_account{};
    p_sav_acc->withdraw(500.0);
    delete p_sav_acc;
    
    cout << "\n=== Account =================================" << endl;
    
    return 0;
}