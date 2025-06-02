#include "TTime.h"
#include <iostream>
#include <limits>

using namespace std;

// Функція для перевірки коректності часу
bool isValidTime(const TTime& t) {
    // Перевіряємо, чи година, хвилина та секунда знаходяться в допустимих межах
    return (t.hour >= 0 && t.hour < 24 &&
            t.min >= 0 && t.min < 60 &&
            t.sec >= 0 && t.sec < 60);
}

// Функція для введення та перевірки часу
bool inputAndValidateTime(TTime& t) {
    cout << "Введіть час (година хвилина секунда): ";
    cin >> t.hour >> t.min >> t.sec;
    if (cin.fail() || !isValidTime(t)) {
        cout << "Некоректне введення часу!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    return true;
}

// Функція для збільшення часу на одну хвилину
void NextMin(TTime& t) {
    if (!isValidTime(t)) return;
    t.min++;
    if (t.min >= 60) {
        t.min = 0;
        t.hour++;
        if (t.hour >= 24) t.hour = 0;
    }
}

// Функція для виконання завдання Param77
void task_param77() {
    cout << "\n--- Param77: Збільшення часу на 1 хвилину ---" << endl;
    // Попередньо визначені тестові випадки
    TTime times[5] = {
        {10, 59, 30}, {23, 59, 59}, {15, 30, 0}, {0, 0, 0}, {12, 45, 15}
    };
    for (int i = 0; i < 5; i++) {
        cout << "Тест " << i + 1 << " Перед: " << times[i].hour << ":" << times[i].min << ":" << times[i].sec;
        NextMin(times[i]);
        cout << " -> Після: " << times[i].hour << ":" << times[i].min << ":" << times[i].sec << endl;
    }
    // Введення користувача
    TTime t;
    if (inputAndValidateTime(t)) {
        cout << "Введення користувача Перед: " << t.hour << ":" << t.min << ":" << t.sec;
        NextMin(t);
        cout << " -> Після: " << t.hour << ":" << t.min << ":" << t.sec << endl;
    }
}