#include "Expression.h"
#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

// Функція для перевірки коректності float
bool isValidFloat(float x) {
    return !isnan(x) && !isinf(x);
}

// Функція для введення та перевірки виразу
bool inputAndValidateExpression(Expression& e) {
    cout << "Введіть x: ";
    cin >> e.x;
    if (cin.fail() || !isValidFloat(e.x)) {
        cout << "Некоректне введення float!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    return true;
}

// Функція для обчислення виразу y = 3x^6 - 6x^2 - 7
void computeExpression(Expression& e) {
    e.y = 3 * pow(e.x, 6) - 6 * pow(e.x, 2) - 7;
}

// Функція для виконання завдання Begin25
void task_begin25() {
    cout << "\n--- Begin25: Обчислення y = 3x^6 - 6x^2 - 7 ---" << endl;
    // Попередньо визначені тестові випадки
    float testXs[5] = {0.0, 1.0, -1.0, 2.0, -2.0};
    for (int i = 0; i < 5; i++) {
        Expression expr;
        expr.x = testXs[i];
        computeExpression(expr);
        cout << "Тест " << i + 1 << ": x = " << expr.x << ", y = " << expr.y << endl;
    }
    // Введення користувача
    Expression expr;
    if (inputAndValidateExpression(expr)) {
        computeExpression(expr);
        cout << "Введення користувача: x = " << expr.x << ", y = " << expr.y << endl;
    }
}