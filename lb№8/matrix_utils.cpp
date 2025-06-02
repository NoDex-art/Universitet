#include "matrix_utils.h"
#include <iostream>
#include <fstream>

using namespace std;

// Читання двовимірного масиву з файлу
bool get_matrix(string filename, double in_mx[MAX_M][MAX_N], int &in_m, int &in_n) {
    ifstream infile(filename);
    if (!infile) {
        cerr << "Помилка відкриття файлу " << filename << endl;
        return false;
    }
    infile >> in_m >> in_n;
    if (in_m < 1 || in_m > MAX_M || in_n < 1 || in_n > MAX_N) {
        cerr << "Некоректні розміри матриці: " << in_m << " x " << in_n << endl;
        return false;
    }
    for (int i = 0; i < in_m; i++) {
        for (int j = 0; j < in_n; j++) {
            infile >> in_mx[i][j];
        }
    }
    infile.close();
    return true;
}

// Обробка матриці для Matrix29: підрахунок елементів, менших за середнє арифметичне рядка
void process_matrix29(string filename, const double in_mx[MAX_M][MAX_N], const int m, const int n) {
    ofstream outfile(filename, ios::app); // Дописуємо в кінець файлу
    if (!outfile) {
        cerr << "Помилка відкриття файлу " << filename << endl;
        return;
    }
    outfile << "\nCounts of elements less than row average:\n";
    for (int i = 0; i < m; i++) {
        double sum = 0;
        for (int j = 0; j < n; j++) {
            sum += in_mx[i][j];
        }
        double avg = sum / n;
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (in_mx[i][j] < avg) {
                count++;
            }
        }
        outfile << "Row " << i + 1 << ": " << count << endl;
    }
    outfile.close();
}
