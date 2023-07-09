//
//  Savings_Account.h
//  RedefiningBaseClassMethods
//
//  Created by Bryan on 11/21/22.
//  Copyright © 2022 Bryan. All rights reserved.
//

#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include "Account.h"

// Savings Account class
// Deposit method increments amount to be deposited by amount * int_rate_percentage
// So a deposit at 5% int rate will deposit 1000 + 50 = 1050

// withdraw method does not speciaize

class Savings_Account: public Account {
    
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
    
    private:
        static constexpr const char *def_name = "Unnamed Savings Account";
        static constexpr double def_balance = 0.0;
        static constexpr double def_int_rate = 0.0;
    
    protected:
        double int_rate;
    
    public:
        Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
        bool deposit(double amount);
    
    // withdraw is inherited
    
};



#endif // _SAVINGS_ACCOUNT_H_
