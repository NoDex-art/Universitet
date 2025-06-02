#ifndef TTIME_H
#define TTIME_H

#include <iostream>

// Структура для представлення часу
struct TTime {
    int hour; // година
    int min;  // хвилина
    int sec;  // секунда
};

// Функція для перевірки коректності часу
bool isValidTime(const TTime& t);

// Функція для введення та перевірки часу
bool inputAndValidateTime(TTime& t);

// Функція для збільшення часу на одну хвилину
void NextMin(TTime& t);

// Функція для виконання завдання Param77
void task_param77();

#endif // TTIME_H