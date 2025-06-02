#ifndef EXPRESSION_H
#define EXPRESSION_H

// Структура для обчислення виразу
struct Expression {
    float x; // вхідні дані
    float y; // результат обчислення
};

// Функція для обчислення виразу y = 3x^6 - 6x^2 - 7
void computeExpression(Expression& e);

// Функція для виконання завдання Begin25
void task_begin25();

#endif 
