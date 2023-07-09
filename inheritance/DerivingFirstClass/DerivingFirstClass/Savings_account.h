#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

class Savings_account: public Account
{
public:
    double int_rate;
    Savings_account();
    ~Savings_account();
    
    void deposit(double amount);
    void withdraw(double amount);

};

#endif // _SAVINGS_ACCOUNT_H_
