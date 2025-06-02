#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "string_utils.h"
#include "number_utils.h"

#define MAX_LEN 256

void task1() {
    std::cout << "Введiть рядок:\n";
    char cstr[MAX_LEN];
    std::cin.getline(cstr, MAX_LEN);
    std::string s1 = cstr;

    std::cout << "Введiть рядок для додавання:\n";
    char cadd[MAX_LEN];
    std::cin.getline(cadd, MAX_LEN);
    std::string s2 = cadd;

    // string::append
    std::string s_res = s1;
    s_res.append(s2);
    std::cout << "string append: " << s_res << "\n";

    // my_append - Виправлена версія
    char c_res[MAX_LEN * 2];
    
    // Безпечне копіювання рядків
    size_t len = std::strlen(cstr);
    if (len >= MAX_LEN * 2) len = MAX_LEN * 2 - 1;
    std::memcpy(c_res, cstr, len);
    c_res[len] = '\0';
    
    my_append(c_res, cadd);
    std::cout << "my_append: " << c_res << "\n";
}

void task2() {
    std::cout << "1 - обробити з консолi, 2 - з файлу: ";
    int mode;
    std::cin >> mode;
    std::cin.ignore();
    if (mode == 1) {
        std::cout << "Введiть рядок:\n";
        std::string s;
        std::getline(std::cin, s);
        int t = getNumberType(s);
        std::cout << "Тип: " << t << "\n";
    } else if (mode == 2) {
        std::string iname, oname;
        std::cout << "Введiть iм'я вхiдного файлу: ";
        std::cin >> iname;
        std::cout << "Введiть iм'я вихiдного файлу: ";
        std::cin >> oname;
        std::ifstream fin(iname);
        std::ofstream fout(oname);
        std::string s;
        while (std::getline(fin, s)) {
            int t = getNumberType(s);
            fout << s << ": " << t << "\n";
        }
        fin.close();
        fout.close();
        std::cout << "Готово. Перевiрте " << oname << "\n";
    }
}

int main() {
    while (true) {
        std::cout << "\nМеню:\n1 - Завдання 1\n2 - Завдання 2\n0 - Вихiд\nОбрати: ";
        int ch;
        std::cin >> ch;
        std::cin.ignore();
        if (ch == 1) task1();
        else if (ch == 2) task2();
        else break;
    }
    return 0;
}
