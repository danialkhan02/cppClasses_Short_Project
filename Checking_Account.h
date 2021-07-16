//
// Created by DanialK on 2021-07-15.
//

#ifndef CHALLENGE_CHECKING_ACCOUNT_H
#define CHALLENGE_CHECKING_ACCOUNT_H
#include "Account.h"


class Checking_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
protected:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double flat_fee = 1.50;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    bool withdraw(double amount);
    // deposit method inherited from Account class --> base
};


#endif //CHALLENGE_CHECKING_ACCOUNT_H
