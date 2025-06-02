#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

#include <string>

const int MAX_ARRAY_SIZE = 100; // Максимальний розмір масиву

// Читання масиву з файлу
bool get_array(std::string filename, int in_mas[], int &in_n);

// Запис масиву у файл  
bool put_array(std::string filename, const int out_mas[], const int n);

// Пузырькова сортування по зростанню
void bubble_sort(int mas[], int n);

#endif 
