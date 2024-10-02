#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cctype>
#include <random>

#include "ATM.h"
#include "Account.h"

using namespace std;

void ATM::setName()
{
    std::cout << "Enter your first name: ";
    std::getline(std::cin, firstName);

    std::cout << "Enter your middle name (optional): ";
    std::getline(std::cin, middleName);

    std::cout << "Enter your last name: ";
    std::getline(std::cin, lastName);
}

std::string ATM::getName() const
{
    std::string fullName = firstName + " " + middleName + " " + lastName;
    return fullName;
}

bool ATM::isValidPin(const std::string &pin)
{
    if (pin.length() != 4)
    {
        return false;
    }
    for (char c : pin)
    {
        if (!std::isdigit(c))
        {
            return false;
        }
    }
    return true;
}

void ATM::setPin()
{
    std::string pin;
    while (true)
    {
        std::cout << "Enter a 4-digit PIN (numbers only): ";
        std::cin >> pin;
        if (isValidPin(pin))
        {
            std::cout << "Your PIN is: " << pin << std::endl;
            break;
        }
        else
        {
            std::cout << "Invalid input. Please enter a 4-digit PIN using only numbers." << std::endl;
            std::cin.ignore();
            std::cin.clear();
        }
    }
}

void ATM::getPin()
{
    std::string pin;
    std::cout << "Enter your 4-digit PIN: ";
    std::cin >> pin;
    if (isValidPin(pin))
    {
        std::cout << "Your PIN is: " << pin << std::endl;
    }
    else
    {
        std::cout << "Invalid PIN. Please try again." << std::endl;
        getPin();
    }
}

void ATM::generateCheckingsAccountNumber()
{
    srand(time(0));
    int checkingsAccountNumber = rand() % 1000000000000LL + 100000000000000LL;
    CheckingsAccount.setAccountNo(checkingsAccountNumber);
}

void ATM::generateSavingsAccountNumber()
{
    srand(time(0));
    int savingsAccountNumber = rand() % 1000000000000LL + 100000000000000LL;
    SavingsAccount.setAccountNo(savingsAccountNumber);
}

void ATM::createAccount(string accType)
{
    std::string name, email, phoneNumber, address, dob, pin;

    cout << "Enter the account details: " << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Email: ";
    cin >> email;
    cout << "Phone number: ";
    cin >> phoneNumber;
    cout << "Address: ";
    cin >> address;
    cout << "Date of birth: ";
    cin >> dob;
    cout << "Pin: ";
    cin >> pin;

    if (accType == "Checkings")
    {
        generateCheckingsAccountNumber();
        CheckingsAccount.setBalance(0);
        CheckingsAccount.setAccountType("Checkings");
    }
    else if (accType == "Savings")
    {
        generateSavingsAccountNumber();
        SavingsAccount.setBalance(0);
        SavingsAccount.setAccountType("Savings");
    }
}

void login()
{
    std::string pin;
    std::cout << "Enter your 4-digit PIN: ";
    std::cin >> pin;
    if (isValidPin(pin))
    {
        std::cout << "Your PIN is: " << pin << std::endl;
    }
    else if
    {
        std::cout << "Invalid PIN. Please try again." << std::endl;
        getPin();
    }
    else
        (accType == "Savings")
        {
            generateSavingsAccountNumber();
            SavingsAccount.setBalance(0);
            SavingsAccount.setAccountType("Savings");
        }
}


