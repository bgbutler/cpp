//
//  Account_Util.cpp
//  RedefiningBaseClassMethods
//
//  Created by Bryan on 11/22/22.
//  Copyright © 2022 Bryan. All rights reserved.
//

#include "Account_Util.h"
#include <iostream>

// displays Account objects in a vector of account objects
void display(const std::vector<Account> &accounts){
    std::cout << "\n======    Accounts ===============" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std:: endl;
}

// deposits supplied amount toeach account object in the vector
void deposit(std::vector<Account> &accounts, double amount){
    std::cout << "\n====== depositing to Accounts ===============" << std::endl;
    for (auto &acc:accounts){
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}


// withdraw amount from each account object in the vector
void withdraw(std::vector<Account> &accounts, double amount){
    std::cout << "\n====== Withdrawing from Accounts ===============" << std::endl;
    for (auto &acc:accounts){
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of " << amount << " to " << acc << std::endl;
    }
}




// displays Account objects in a vector of savings account objects
void display(const std::vector<Savings_Account> &accounts){
    std::cout << "\n======   Savings Accounts ===============" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std:: endl;
}

// deposits supplied amount toeach account object in the vector
void deposit(std::vector<Savings_Account> &accounts, double amount){
    std::cout << "\n====== Depositing to Savings Accounts ===============" << std::endl;
    for (auto &acc:accounts){
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}


// withdraw amount from each account object in the vector
void withdraw(std::vector<Savings_Account> &accounts, double amount){
    std::cout << "\n====== Withdrawing from Savings Accounts ===============" << std::endl;
    for (auto &acc:accounts){
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of " << amount << " to " << acc << std::endl;
    }
}


// displays Account objects in a vector of checking account objects
void display(const std::vector<Checking_Account> &accounts){
    std::cout << "\n======   Checking Accounts ===============" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std:: endl;
}

// deposits supplied amount to each account object in the vector
void deposit(std::vector<Checking_Account> &accounts, double amount){
    std::cout << "\n====== Depositing to Checking Accounts ===============" << std::endl;
    for (auto &acc:accounts){
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}


// withdraw amount from each account object in the vector
void withdraw(std::vector<Checking_Account> &accounts, double amount){
    std::cout << "\n====== Withdrawing from Checking Accounts ===============" << std::endl;
    for (auto &acc:accounts){
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of " << amount << " to " << acc << std::endl;
    }
}



// displays Account objects in a vector of trust account objects
void display(const std::vector<Trust_Account> &accounts){
    std::cout << "\n======   Trust Accounts ===============" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std:: endl;
}

// deposits supplied amount toeach account object in the vector
void deposit(std::vector<Trust_Account> &accounts, double amount){
    std::cout << "\n====== Depositing to Trust Accounts ===============" << std::endl;
    for (auto &acc:accounts){
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}


// withdraw amount from each account object in the vector
void withdraw(std::vector<Trust_Account> &accounts, double amount){
    std::cout << "\n====== Withdrawing from Trust Accounts ===============" << std::endl;
    for (auto &acc:accounts){
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of " << amount << " to " << acc << std::endl;
    }
}
