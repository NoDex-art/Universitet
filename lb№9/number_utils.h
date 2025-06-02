#ifndef NUMBER_UTILS_H
#define NUMBER_UTILS_H

#include <string>

// 1: ціле, 2: дійсне, 0: не число
int getNumberType(const std::string& str);

// true, якщо рядок — число (ціле або дійсне)
bool checkNumberCondition(const std::string& str);

#endif // NUMBER_UTILS_H