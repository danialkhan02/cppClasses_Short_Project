//
// Created by DanialK on 2021-07-15.
//

#include "Trust_Account.h"
#include <string>

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account{name, balance, int_rate}, num_withdrawals{0} {
}

bool Trust_Account::deposit(double amount){
    if(amount >= 5000){
        Savings_Account::deposit(reward);
    }
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    if (num_withdrawals >= max_withdrawals || amount > (max_withdraw_percent * balance)){
        return false;
    }
    else{
        ++num_withdrawals;
        return Account::withdraw(amount);
    }
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust Account: " << account.name << ": " << account.balance << ", " << account.int_rate
       << "%, withdrawals: " << account.num_withdrawals <<  "]";
    return os;
}