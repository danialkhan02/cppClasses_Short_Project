//
// Created by DanialK on 2021-07-15.
//

#include "Checking_Account.h"
#include <string>

Checking_Account::Checking_Account(std::string name, double balance)
    :Account{name, balance}{

}
bool Checking_Account::withdraw(double amount){
    amount += flat_fee;
    return Account::withdraw(amount);
}