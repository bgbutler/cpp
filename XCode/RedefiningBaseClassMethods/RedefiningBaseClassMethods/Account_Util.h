//
//  Account_Util.h
//  RedefiningBaseClassMethods
//
//  Created by Bryan on 11/22/22.
//  Copyright © 2022 Bryan. All rights reserved.
//

#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"
#include "Savings_Account.h"

// Utility helper functions for account class
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// Utility helper functions for SavingsAccount Class
void display(const std::vector<Savings_Account> &accounts);
void deposit(std::vector<Savings_Account> &accounts, double amount);
void withdraw(std::vector<Savings_Account> &accounts, double amount);

#endif //
