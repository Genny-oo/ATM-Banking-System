#ifndef ATM_H
#define ATM_H

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

class ATM
{
private:
    std::string firstName;
    std::string middleName;
    std::string lastName;
    
    
    Account SavingsAccount;
    Account CheckingsAccount;

public:
    void setName();
    std::string getName() const;
    bool isValidPin(const std::string &pin);
    void setPin();
    void getPin();
    void generateCheckingsAccountNumber();
    void generateSavingsAccountNumber();
    void createAccount(string accType);
    void login();
};

#endif
