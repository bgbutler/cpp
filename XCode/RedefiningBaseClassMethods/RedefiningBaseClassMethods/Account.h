//
//  Account.h
//  RedefiningBaseClassMethods
//
//  Created by Bryan on 11/21/22.
//  Copyright © 2022 Bryan. All rights reserved.
//

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>

// simple account class
class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
    
    private:
    // set up defaults
        static constexpr const char *def_name = "Unnamed Account";
        static constexpr double def_balance = 0.0;
    
    protected:
        double balance;
        std::string name;
    
    public:
        
        //Account();
        // Account(double balance);
        Account(std::string name=def_name, double balance = def_balance);
        bool deposit(double amount);
        bool withdraw(double amount);
        double get_balance() const;
};


#endif // _ACCOUNT_H_
