#include "array_utils.h"
#include <iostream>
#include <fstream>

using namespace std;

// Читання масиву з файлу
bool get_array(string filename, int in_mas[], int &in_n) {
    ifstream infile(filename);
    if (!infile) {
        cerr << "Помилка відкриття файлу " << filename << endl;
        return false;
    }
    infile >> in_n;
    if (in_n < 1 || in_n > MAX_ARRAY_SIZE) {
        cerr << "Некоректний розмір масиву: " << in_n << endl;
        return false;
    }
    for (int i = 0; i < in_n; i++) {
        infile >> in_mas[i];
    }
    infile.close();
    return true;
}

// Запис масиву у файл
bool put_array(string filename, const int out_mas[], const int n) {
    ofstream outfile(filename);
    if (!outfile) {
        cerr << "Помилка відкриття файлу " << filename << endl;
        return false;
    }
    for (int i = 0; i < n; i++) {
        outfile << out_mas[i] << " ";
    }
    outfile << endl;
    outfile.close();
    return true;
}

// Пузырькова сортування по зростанню
void bubble_sort(int mas[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (mas[j] > mas[j + 1]) {
                int temp = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = temp;
            }
        }
    }
}
