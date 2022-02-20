#include <iostream>
#include "log.h"

void Logger::Log(const char *msg)
{
    std::cout << msg;
}