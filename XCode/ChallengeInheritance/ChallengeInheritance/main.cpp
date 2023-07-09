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
    
    // Checking Accounts
    vector<Checking_Account> check_accounts;
    
    check_accounts.push_back(Checking_Account{});
    check_accounts.push_back(Checking_Account{"Gandolf"});
    check_accounts.push_back(Checking_Account{"Aragorn", 5000});
    check_accounts.push_back(Checking_Account{"Legolas", 50000});
    
    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);
    
    // Trust Accounts
    vector<Trust_Account> trust_accounts;
    
    trust_accounts.push_back(Trust_Account{});
    trust_accounts.push_back(Trust_Account{"Sauruman", 10000, 5.0});
    trust_accounts.push_back(Trust_Account{"Bilbo", 20000, 4.0});
    trust_accounts.push_back(Trust_Account{"Elrond", 30000});
    
    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 3000);
    
    // withdraw 5 time from each acoount
    // should fail
    for (int i=1; i<=5; i++)
        withdraw(trust_accounts, 1000);
    
    
    return 0;
}
