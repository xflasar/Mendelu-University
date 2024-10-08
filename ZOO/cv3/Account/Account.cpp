//
// Created by xflasar on 08.10.2024.
//
#include "Account.h"
#include "../Log/Logger.h"

#include <iostream>
#include <ostream>

// Constructor
Account::Account(const std::string& customerName, const float& withdrawalLimit, Logger& logger): m_logger(logger) {
    m_customerName = customerName;
    m_balance = 0;
    m_transparency = false;
    m_logger = logger;

    if(withdrawalLimit < 0) {
        m_withdrawalLimit = 0;
    } else {
        m_withdrawalLimit = withdrawalLimit;
    }

}

// Destructor
Account::~Account() {
    std::cout << "Account destroyed!" << std::endl;
    m_logger.addLog("Account::~Account()");
}

// Gets account balance
float Account::getBalance() {
    m_logger.addLog("Account::getBalance()");
    return m_balance;
}

// Gets account owner name
std::string Account::getCustomerName() {
    m_logger.addLog("Account::getCustomerName()");
    return m_customerName;
}

// Used for depositing money into account (changes m_balance record)
void Account::depositMoney(const float& value) {
    if (value < 0) {
        m_logger.addLog("Account::depositMoney() failed value in negative!");
        return;
    }
    m_balance += value;
    m_logger.addLog("Account::depositMoney()");
}

// Used for withdrawing money from account (changes m_balance record)
void Account::withdrawMoney(const float& value) {
    if (value > m_withdrawalLimit || value > m_balance) {
        m_logger.addLog("Account::withdrawMoney() failed value is over withdrawal limit or over available balance!");
        return;
    }
    m_balance -= value;
    m_logger.addLog("Account::withdrawMoney()");
}

// Changes the limit for withdrawal (m_withdrawalLimit)
void Account::changeWithdrawalLimit(const float& value) {
    if (value < 0) {
        m_logger.addLog("Account::changeWithdrawalLimit() failed value in negative!");
        return;
    }
    m_withdrawalLimit = value;
    m_logger.addLog("Account::changeWithdrawalLimit()");
}

// Used for printing info into console
void Account::printAccountInfo() {
    if (m_transparency) {
        std::cout << "Account holder name: " << m_customerName << std::endl;
        m_logger.addLog("Account::printAccountInfo() Transparency ON");
        return;
    }
    std::cout << m_customerName << " " << m_withdrawalLimit << " " << m_balance << std::endl;
    m_logger.addLog("Account::printAccountInfo() Transparency OFF");
}

// Used for changing account owner name (changes m_customerName)
void Account::changeCustomerName(const std::string& customerName) {
    m_customerName = customerName;
    m_logger.addLog("Account::changeCustomerName()");
}

// Sets m_transparency to True when False (only once then it's locked at True value)
void Account::changeTransparency(const bool& transparency) {
    if (m_transparency == true) {
        m_logger.addLog("Account::changeTransparency() is already set to true!");
        return;
    }
    m_transparency = transparency;
    m_logger.addLog("Account::changeTransparency()");
}

