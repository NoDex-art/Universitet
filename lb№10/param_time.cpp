#include "TTime.h"
#include <iostream>

using namespace std;

// Функція для збільшення часу на одну хвилину
void NextMin(TTime& t) {
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
    TTime t;
    cout << "Введіть час (година хвилина секунда): ";
    cin >> t.hour >> t.min >> t.sec;
    
    cout << "До: " << t.hour << ":" << t.min << ":" << t.sec;
    NextMin(t);
    cout << " -> Після: " << t.hour << ":" << t.min << ":" << t.sec << endl;
}
        cout << " -> Після: " << t.hour << ":" << t.min << ":" << t.sec << endl;
    }
}
