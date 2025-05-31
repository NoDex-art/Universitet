#include <iostream>
#include <set>
using namespace std;

const int MAX_M = 100, MAX_N = 100;

// Ввід матриці
void get_matr(int a[MAX_M][MAX_N], int &m, int &n, int min_m, int min_n, int max_m, int max_n) {
    do {
        cout << "Enter rows count (" << min_m << "-" << max_m << "): ";
        cin >> m;
        cout << "Enter columns count (" << min_n << "-" << max_n << "): ";
        cin >> n;
    } while (m < min_m || m > max_m || n < min_n || n > max_n);
    cout << "Enter elements:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

// Вивід матриці
void show_matr(const int a[MAX_M][MAX_N], int m, int n) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

// Перевірка рядка на унікальність елементів
int count_unique_rows(const int a[MAX_M][MAX_N], int m, int n) {
    int count = 0;
    for (int i = 0; i < m; i++) {
        set<int> s;
        for (int j = 0; j < n; j++) {
            s.insert(a[i][j]);
        }
        if (s.size() == n) count++;
    }
    return count;
}

// Matrix38: Підрахунок рядків з унікальними елементами
void matrix38() {
    int a[MAX_M][MAX_N], m, n;
    get_matr(a, m, n, 1, 1, MAX_M, MAX_N); // Перевірка диапазону 1 ≤ M, N ≤ 100
    show_matr(a, m, n); // Вивід ісходної матриці
    int count = count_unique_rows(a, m, n);
    cout << "Unique rows: " << count << endl;
}

// Matrix81: Обнулення елементів над основною і нижче вторинної діагоналлі
void matrix81() {
    int a[MAX_M][MAX_N], m, n;
    get_matr(a, m, n, 1, 1, MAX_M, MAX_M); // n = m для квадратної матриці
    if (m != n) {
        cout << "Matrix must be square!" << endl;
        return;
    }
    show_matr(a, m, n); // Вивід ісходної матриці
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] *= (i >= j || i + j <= m - 1); // Обнулення без if
        }
    }
    cout << "Transformed matrix:" << endl;
    show_matr(a, m, n); // Вивід зміненої матриці
}

int main() {
    int choice;
    do {
        cout << "Choose task (1 - Matrix38, 2 - Matrix81, 0 to exit): ";
        cin >> choice;
        if (choice == 1) matrix38();
        else if (choice == 2) matrix81();
    } while (choice != 0);
    return 0;
}
