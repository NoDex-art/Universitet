#ifndef TTIME_H
#define TTIME_H

// Структура для представлення часу
struct TTime {
    int hour; // година
    int min;  // хвилина
    int sec;  // секунда
};

// Функція для збільшення часу на одну хвилину
void NextMin(TTime& t);

// Функція для виконання завдання Param77
void task_param77();

#endif
