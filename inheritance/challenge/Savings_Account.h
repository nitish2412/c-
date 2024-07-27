#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

class Savings_Account:public Account{
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
private:
    static constexpr const char *def_name ="Unnamed  Saving Account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double def_int_rate = 0.0;

protected:
    double int_rate;
public:
    Savings_Account(std::string name = def_name, double balance =def_balance, double int_rate = def_int_rate);
    Savings_Account(double balance, double int_rate);
    bool deposit(double amount);
    //inherit Account::withdraw method

};

#endif