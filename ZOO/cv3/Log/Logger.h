//
// Created by xflasar on 08.10.2024.
//

#ifndef LOGGER_H
#define LOGGER_H
#include <vector>
#include <string>

class Logger {
    private:
        std::vector<std::string> m_log;
    public:
        Logger();
        ~Logger();
        void addLog(const std::string& message);
        void getLogs();

};

#endif //LOGGER_H
