#include <iostream>
#include <string>
#include "array_utils.h"
#include "matrix_utils.h"

using namespace std;

int main() {
    int choice;
    cout << "Виберіть завдання (1 - масив, 2 - матриця, 3 - сортування): ";
    cin >> choice;

    if (choice == 1) {
        // Завдання 1: Обробка одновимірного масиву
        string input_filename, output_filename;
        cout << "Введіть ім'я вхідного файлу для масиву: ";
        cin >> input_filename;
        cout << "Введіть ім'я вихідного файлу для масиву: ";
        cin >> output_filename;

        int arr[MAX_ARRAY_SIZE];
        int n;
        if (get_array(input_filename, arr, n)) {
            bubble_sort(arr, n); // Сортування масиву
            if (put_array(output_filename, arr, n)) {
                cout << "Масив успішно оброблено та записано у файл.\n";
            } else {
                cerr << "Помилка запису у файл.\n";
            }
        } else {
            cerr << "Помилка зчитування файлу.\n";
        }
    } 
    else if (choice == 2) {
        // Завдання 2: Обробка матриці
        string matrix_filename;
        cout << "Введіть ім'я файлу для матриці: ";
        cin >> matrix_filename;

        double mx[MAX_M][MAX_N];
        int m, n;
        if (get_matrix(matrix_filename, mx, m, n)) {
            process_matrix29(matrix_filename, mx, m, n); // Обробка матриці
            cout << "Матриця успішно оброблена.\n";
        } else {
            cerr << "Помилка зчитування файлу матриці.\n";
        }
    } 
    else if (choice == 3) {
        // Завдання 3: Сортування з аналізом складності
        string input_filename, output_filename;
        cout << "Введіть ім'я вхідного файлу для сортування: ";
        cin >> input_filename;
        cout << "Введіть ім'я вихідного файлу для сортування: ";
        cin >> output_filename;

        int arr[MAX_ARRAY_SIZE];
        int n;
        if (get_array(input_filename, arr, n)) {
            if (n != 37) {
                cerr << "Масив повинен містити 37 елементів.\n";
                return 1;
            }
            cout << "Використано бульбашкове сортування з часовою складністю O(n²).\n";
            bubble_sort(arr, n); // Сортування масиву
            if (put_array(output_filename, arr, n)) {
                cout << "Масив успішно відсортовано та записано у файл.\n";
            } else {
                cerr << "Помилка запису у файл.\n";
            }
        } else {
            cerr << "Помилка зчитування файлу.\n";
        }
    } 
    else {
        cout << "Невірний вибір завдання.\n";
    }

    return 0;
}
