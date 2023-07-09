//
//  Savings_Account.cpp
//  RedefiningBaseClassMethods
//
//  Created by Bryan on 11/21/22.
//  Copyright © 2022 Bryan. All rights reserved.
//

#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
    : Account(name, balance), int_rate{int_rate}{
}

bool Savings_Account::deposit(double amount){
    amount = amount + (amount * int_rate/100);
    // ensure return account class deposit
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account){
    os << "[Savings_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}
