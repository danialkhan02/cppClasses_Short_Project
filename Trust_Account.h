//
// Created by DanialK on 2021-07-15.
//

#ifndef CHALLENGE_TRUST_ACCOUNT_H
#define CHALLENGE_TRUST_ACCOUNT_H
#include "Savings_Account.h"


class Trust_Account: public Savings_Account{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_rate = 0.0;
    static constexpr double max_withdraw_percent = 0.2;
    static constexpr int max_withdrawals = 3;
    static constexpr int reward {50};
protected:
    int num_withdrawals;
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
    //withdraw inherited from savings account class
};


#endif //CHALLENGE_TRUST_ACCOUNT_H
