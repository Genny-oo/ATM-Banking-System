#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account
{
public:
    string accountType;
    string phoneNumber;
    string address;
    string email;
    string dob;
    string city;
    string area;
    string street;
    string houseNumber;
    string month;
    string year;
    string day;
    double amount;
    int balance;
    std::string choice;
    int accountNo;
    vector<string> transactionHistory;

    void setAccountNo(int a);
    int getAccountNo() const;
    void setBalance(int bal);
    int getBalance() const;
    void setAccountType(const std::string &at);
    std::string getAccountType() const;
    void setPhoneNumber(const std::string &p);
    std::string getPhoneNumber() const;
    void setAddress();
    std::string getAddress() const;
    void setEmail(const std::string &e);
    std::string getEmail() const;
    void setDob(const std::string &d);
    std::string getDob() const;
    bool isEmpty() const;
    void displayTransactionHistory() const;
    void withdraw();
    void deposit();
    std::string displayAccountInfo(class ATM& atm) const;
};

#endif