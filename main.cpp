#include "ATM.h"
#include "Account.h"

#include <iostream>
#include <string>

int main() {

    std::string choice;
    std::cout << "Do you want to login or create an account? (login/create)" << std::endl;
    std::cin >> choice;

    if (choice == "login") {
        std::string accountNumber;
        std::string pin;

        std::cout << "Enter your account number: ";
        std::cin >> accountNumber;
        std::cout << "Enter your pin: ";
        std::cin >> pin;

        ATM atm;
        atm.login(accountNumber, pin);
    } else if (choice == "create") {
        std::string accountType;
        std::cout << "Enter the type of account you want to create (checkings/savings): ";
        std::cin >> accountType;

        ATM atm;
        atm.createAccount(accountType);
        std::cout << "Account created successfully!" << std::endl;
        
        Account account;
        std::cout << account.displayAccountInfo() << std::endl;

        std::string transactionChoice;
        std::cout << "Do you want to withdraw or deposit? (withdraw/deposit): ";
        std::cin >> transactionChoice;

        

    if (transactionChoice == "withdraw") {
        double amount;
        std::cout << "Enter the amount you want to withdraw: ";
        std::cin >> amount;
        account.withdraw(amount);
    } else if (transactionChoice == "deposit") {
        double amount;
        std::cout << "Enter the amount you want to deposit: ";
        std::cin >> amount;
        account.deposit(amount);
    }
    
    return 0;
}
};