//
//  Checking_Account.hpp
//  ChallengeInher
//
//  Created by Bryan on 11/23/22.
//  Copyright © 2022 Bryan. All rights reserved.
//

#ifndef _CHECKING_ACOUNT_H_
#define _CHECKING_ACOUNT_H_
#include "Account.h"
#include <iostream>
#include <string>

class Checking_Account: public Account {

    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);

    private:
        static constexpr const char *def_name = "Unnamed Checking Account";
        static constexpr double def_balance = 0.0;
        static constexpr double per_check_fee = 1.5;

    public:
        Checking_Account(std::string name = def_name, double balance = def_balance);
        bool withdraw(double);
        // inherits the standard Account::deposit method
};

#endif // _CHECKING_ACOUNT_H_
