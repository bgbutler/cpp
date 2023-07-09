//
//  Trust_Account.cpp
//  ChallengeInher
//
//  Created by Bryan on 11/23/22.
//  Copyright © 2022 Bryan. All rights reserved.
//

#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account(name, balance, int_rate), num_withdrawals{0}{
}

// Deposit additional $50 bonus when wmounnt >= 5000
bool Trust_Account::deposit(double amount){
    if (amount >= bonus_threshold)
        amount += bonus_amount;
    // ensure return savings account class deposit
    return Savings_Account::deposit(amount);
}


// only allowed 3 withdrawals, each can be up to a max of 20% of the account's value
bool Trust_Account::withdraw(double amount){
    if(num_withdrawals >= max_withdrawals || (amount > balance * max_withdraw_percent))
        return false;
    else {
        ++ num_withdrawals;
        // ensure return account class deposit
        return Savings_Account::withdraw(amount);
    }
}


std::ostream &operator<<(std::ostream &os, const Trust_Account &account){
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate
      << "Num withdrawals: " << account.num_withdrawals << "]";
    return os;
}
