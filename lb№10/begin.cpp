#include "Expression.h"
#include <iostream>
#include <cmath>

using namespace std;

// Функція для обчислення виразу y = 3x^6 - 6x^2 - 7
void computeExpression(Expression& e) {
    e.y = 3 * pow(e.x, 6) - 6 * pow(e.x, 2) - 7;
}

// Функція для виконання завдання Begin25
void task_begin25() {
    cout << "\n--- Begin25: Обчислення y = 3x^6 - 6x^2 - 7 ---" << endl;
    Expression expr;
    cout << "Введіть x: ";
    cin >> expr.x;
    
    computeExpression(expr);
    cout << "x = " << expr.x << ", y = " << expr.y << endl;
}
