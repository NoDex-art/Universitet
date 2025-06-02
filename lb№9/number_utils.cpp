#include "number_utils.h"
#include <cctype>

int getNumberType(const std::string& str) {
    bool hasDot = false;
    bool hasDigit = false;
    size_t i = 0;

    if (str.empty()) return 0;
    // Допускається знак мінус на початку
    if (str[0] == '-') ++i;
    for (; i < str.length(); ++i) {
        if (std::isdigit(str[i])) {
            hasDigit = true;
            continue;
        } else if (str[i] == '.') {
            if (hasDot) return 0; // друга точка
            hasDot = true;
        } else {
            return 0;
        }
    }
    if (!hasDigit) return 0;
    return hasDot ? 2 : 1;
}

bool checkNumberCondition(const std::string& str) {
    return getNumberType(str) > 0;
}