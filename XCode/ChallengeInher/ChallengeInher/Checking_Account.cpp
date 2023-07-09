//
//  Checking_Account.cpp
//  ChallengeInher
//
//  Created by Bryan on 11/23/22.
//  Copyright © 2022 Bryan. All rights reserved.
//

#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account(name, balance){
}

bool Checking_Account::withdraw(double amount){
    amount += per_check_fee;
    // ensure return account class deposit
    return Account::withdraw(amount);
}


std::ostream &operator<<(std::ostream &os, const Checking_Account &account){
    os << "[Checking_Account: " << account.name << ": " << account.balance << "]";
    return os;
}
