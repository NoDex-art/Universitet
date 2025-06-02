// matrix_utils.h
#ifndef MATRIX_UTILS_H
#define MATRIX_UTILS_H

#include <string>

const int MAX_M = 100; // Максимальний розмір рядків матриці
const int MAX_N = 100; // Максимальний розмір стовпців матриці

// Читання двовимірного масиву з файлу
bool get_matrix(std::string filename, double in_mx[MAX_M][MAX_N], int &in_m, int &in_n);

// Обробка матриці для Matrix29: підрахунок елементів, менших за середнє арифметичне рядка
void process_matrix29(std::string filename, const double in_mx[MAX_M][MAX_N], const int m, const int n);

#endif // MATRIX_UTILS_H