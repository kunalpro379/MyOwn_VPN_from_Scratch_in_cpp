#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>

class Utils {
public:
    static std::vector<std::string> splitString(const std::string& str, char delimiter);
    static std::string trimWhitespace(const std::string& str);
    static void logMessage(const std::string& message);
};

#endif // UTILS_H
