#ifndef BOOLEANDATA_H
#define BOOLEANDATA_H

// Структура для перевірки булевої умови
struct BooleanData {
    int A, B; // вхідні дані
    bool result; // результат перевірки
};

// Функція для перевірки умови A >= 0 або B < -2
void checkBoolean5(BooleanData& data);

// Функція для виконання завдання Boolean5
void task_boolean5();

#endif 
