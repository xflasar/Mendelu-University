//
// Created by xflasar on 08.10.2024.
//

#include "Logger.h"

#include <iostream>
#include <ostream>

// Constructor
Logger::Logger() {
    // nothing here
}

// Destructor
Logger::~Logger() {
    std::cout << "Destroyed logger." << std::endl;
}

// Adds string log into vector
void Logger::addLog(const std::string& message) {
    m_log.push_back(message);
}

// Gets all logs and prints them into console
void Logger::getLogs() {
    for (const auto& log : m_log) {
        std::cout << log << std::endl;
    }
}


