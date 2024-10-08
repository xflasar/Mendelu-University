//
// Created by xflasar on 08.10.2024.
//
#include <string>
#include "../Log/Logger.h"

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    std::string m_customerName;
    float m_balance;
    float m_withdrawalLimit;
    bool m_transparency;

    Logger& m_logger;
  public:
    Account(const std::string& customerName, const float& withdrawalLimit, Logger& logger);
    ~Account();
    float getBalance();
    std::string getCustomerName();
    void depositMoney(const float& value);
    void withdrawMoney(const float& value);
    void changeWithdrawalLimit(const float& value);
    void printAccountInfo();
    void changeCustomerName(const std::string& customerName);
    void changeTransparency(const bool& transparency);
};

#endif //ACCOUNT_H

