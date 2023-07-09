//
//  main.cpp
//  RedefiningBaseClassMethods
//
//  Created by Bryan on 11/21/22.
//  Copyright © 2022 Bryan. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    
    cout.precision(2);
    cout << fixed;
    
    // Accounts
    vector<Account> accounts;
    
    accounts.push_back(Account{});
    accounts.push_back(Account{"Merry"});
    accounts.push_back(Account{"Pippen", 2000});
    accounts.push_back(Account{"Frodo", 5000});
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    // Savings Accounts
    vector<Savings_Account> sav_accounts;
    
    sav_accounts.push_back(Savings_Account{});
    sav_accounts.push_back(Savings_Account{"Gandolf"});
    sav_accounts.push_back(Savings_Account{"Aragorn", 5000});
    sav_accounts.push_back(Savings_Account{"Legolas", 50000, 5.0});
    
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
    return 0;
}
