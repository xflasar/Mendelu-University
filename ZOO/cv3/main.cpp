#include "./Account/Account.h"
#include "./Log/Logger.h"

int main() {
    // Assign constructors
    const auto logger = new Logger();
    const auto account = new Account("John", 10000, *logger);

    // Account method changing
    account->printAccountInfo();
    account->depositMoney(5000);
    account->printAccountInfo();
    
    // Prints out all logs saved
    logger->getLogs();

    // Clean up
    delete account;
    delete logger;
    
    return 0;
}