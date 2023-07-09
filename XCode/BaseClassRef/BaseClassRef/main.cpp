//
//  main.cpp
//  Polymorphism1
//
//  Created by Bryan on 11/28/22.
//  Copyright © 2022 Bryan. All rights reserved.
//

#include <iostream>
#include <vector>

// this class uses dynamic polymorphism for the withdraw method
class Account{
    public:
        virtual void withdraw(double amount){
            std::cout << "In Acccount::withdraw" << std::endl;
            }
        virtual ~Account(){
            std::cout << "Account::destructor" << std::endl;
            }
};

class Checking: public Account{
    public:
        virtual void withdraw(double amount){
            std::cout << "In Checking::withdraw" << std::endl;
        }
        virtual ~Checking(){
            std::cout << "Checking::destructor" << std::endl;
            }
};

class Savings: public Account{
    public:
        virtual void withdraw(double amount){
            std::cout << "In Savings::withdraw" << std::endl;
        }
        virtual ~Savings(){
            std::cout << "Savings::destructor" << std::endl;
            }
};

class Trust: public Account{
    public:
        virtual void withdraw(double amount){
            std::cout << "In Trust::withdraw" << std::endl;
        }
        virtual ~Trust(){
            std::cout << "Trust::destructor" << std::endl;
            }
};

// build base class reference
void do_withdraw(Account &account, double amount){
    account.withdraw(amount);
}

int main() {
    // insert code here...
    std::cout << "\n =============== References ==================" << std::endl;
    Account a;
    Account &ref = a;
    ref.withdraw(1000);
    
    Trust t;
    Account &ref1 = t;
    ref1.withdraw(1000);
    
    std::cout << "\n =============== Dynamic References ==================" << std::endl;
    
    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;
    
    do_withdraw(a1, 1000); // Account
    do_withdraw(a2, 2000); // Savings
    do_withdraw(a3, 3000); // checking
    do_withdraw(a4, 4000); // trust

    
    return 0;
}

