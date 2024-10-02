#include "Account.h"
#include "ATM.h"
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cctype>
#include <random>

void Account::setAccountNo(int a)
{
    accountNo = a;
}

int Account::getAccountNo() const
{
    return accountNo;
}

void Account::setBalance(int bal)
{
    balance = bal;
}

int Account::getBalance() const
{
    return balance;
}

void Account::setAccountType(const std::string &at)
{
    accountType = at;
}

std::string Account::getAccountType() const
{
    return accountType;
}

void Account::setPhoneNumber(const std::string &p)
{
    phoneNumber = p;
}

std::string Account::getPhoneNumber() const
{
    return phoneNumber;
}

void Account::setAddress() 
{
    std::cout << "Enter your city: ";
    std::cin >> city;

    std::cout << "Enter your area: ";
    std::cin >> area;

    std::cout << "Enter your street: ";
    std::cin >> street;

    std::cout << "Enter your house number: ";
    std::cin >> houseNumber;

    address = city + ", " + area + ", " + street + ", " + houseNumber;
}

std::string Account::getAddress() const
{
    return address;
}

void Account::setEmail(const std::string &e)
{
    email = e;
}

std::string Account::getEmail() const
{
    return email;
}

void Account::setDob(const std::string &d)
{
    cout << "Enter your date of birth: ";
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the day: ";
    cin >> day;
    dob = day + "/" + month + "/" + year;
}

std::string Account::getDob() const
{
    return dob;
}

bool Account::isEmpty() const
{
    return transactionHistory.empty();
}

void Account::displayTransactionHistory() const
{
    if (isEmpty())
    {
        cout << "No transaction history available" << endl;
    }
    else
    {
        cout << "Transaction history: " << endl;
        for (const auto &transaction : transactionHistory)
        {
            cout << "$ " << transaction << endl;
        }
    }
}

void Account::withdraw() 
{
    if (balance == 0 || balance < amount)
    {
        cout << "Sorry, your balance is insufficient to make this transaction" << endl;
    }
    else if (amount == 5000)
    {
        cout << "Sorry, you cannot withdraw this amount" << endl;
        cout << "Your balance is: " << balance << endl;
        cout << "Enter another amount" << endl;
        cin >> amount;
        withdraw();
    }
    else
    {
        balance = balance - amount;
        transactionHistory.push_back(std::to_string(balance));
        cout << "Withdrawal successful" << endl;
        cout << "Your new balance is: " << balance << endl;
    }
}

void Account::deposit() 
{
    balance = balance + amount;
    transactionHistory.push_back(std::to_string(balance));
    cout << "Deposit successful" << endl;
    cout << "Your new balance is: " << balance << endl;
}

std::string Account::displayAccountInfo(ATM& atm) const
{
    cout << "Account Details: " << endl;
    cout << "Name: " << atm.getName() << endl;
    cout << "Account number: " << getAccountNo() << endl;
    cout << "Account type: " << getAccountType() << endl;
    cout << "Phone number: " << getPhoneNumber() << endl;
    cout << "Address: " << getAddress() << endl;
    cout << "Email: " << getEmail() << endl;
    cout << "Date of birth: " << getDob() << endl;
    cout << "Balance: " << getBalance() << endl;
    return "";

}