#include "BooleanData.h"
#include <iostream>

using namespace std;

// Функція для перевірки умови A >= 0 або B < -2
void checkBoolean5(BooleanData& data) {
    data.result = (data.A >= 0 || data.B < -2);
}

// Функція для виконання завдання Boolean5
void task_boolean5() {
    cout << "\n--- Boolean5: Перевірка A >= 0 або B < -2 ---" << endl;
    BooleanData data;
    cout << "Введіть A та B: ";
    cin >> data.A >> data.B;
    
    checkBoolean5(data);
    cout << "A = " << data.A << ", B = " << data.B << ", Результат = " << (data.result ? "Істина" : "Хибність") << endl;
}
    // Введення користувача
    BooleanData data;
    if (inputAndValidateBooleanData(data)) {
        checkBoolean5(data);
        cout << "Введення користувача: A = " << data.A << ", B = " << data.B << ", Результат = " << (data.result ? "Істина" : "Хибність") << endl;
    }
}
