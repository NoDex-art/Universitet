#include "BooleanData.h"
#include <iostream>
#include <limits>

using namespace std;

// Функція для перевірки коректності цілих чисел
bool isValidInteger(int a, int b) {
    return true; // У цьому контексті цілі числа завжди коректні
}

// Функція для введення та перевірки даних
bool inputAndValidateBooleanData(BooleanData& data) {
    cout << "Введіть A та B: ";
    cin >> data.A >> data.B;
    if (cin.fail()) {
        cout << "Некоректне введення цілих чисел!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    return true;
}

// Функція для перевірки умови A >= 0 або B < -2
void checkBoolean5(BooleanData& data) {
    data.result = (data.A >= 0 || data.B < -2);
}

// Функція для виконання завдання Boolean5
void task_boolean5() {
    cout << "\n--- Boolean5: Перевірка A >= 0 або B < -2 ---" << endl;
    // Попередньо визначені тестові випадки
    BooleanData tests[5] = {
        {0, -3}, {1, 0}, {-1, -3}, {5, 5}, {-5, -1}
    };
    for (int i = 0; i < 5; i++) {
        checkBoolean5(tests[i]);
        cout << "Тест " << i + 1 << ": A = " << tests[i].A << ", B = " << tests[i].B << ", Результат = " << (tests[i].result ? "Істина" : "Хибність") << endl;
    }
    // Введення користувача
    BooleanData data;
    if (inputAndValidateBooleanData(data)) {
        checkBoolean5(data);
        cout << "Введення користувача: A = " << data.A << ", B = " << data.B << ", Результат = " << (data.result ? "Істина" : "Хибність") << endl;
    }
}