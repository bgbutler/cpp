#include "Savings_account.h"
#include <iostream>

Savings_account::Savings_account()
    : int_rate {3.0}{
}

Savings_account::~Savings_account()
{
}

void Savings_account::deposit(double amount){
    std::cout << "Savings account deposit called with " << amount << std::endl;
    
}


void Savings_account::withdraw(double amount){
    std::cout << "Savings account withdraw called with " << amount << std::endl;
    
}
