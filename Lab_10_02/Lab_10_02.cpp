#include <iostream>
#include <Windows.h>
#include "student.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int N;
    cout << "Введіть кількість студентів: ";
    cin >> N;

    StudentA* arrA = new StudentA[N];
    StudentB* arrB = new StudentB[N];

    int menu;
    do {
        cout << "\nМеню:" << endl;
        cout << "[1] Ввести дані для рівня А" << endl;
        cout << "[2] Вивести таблицю рівня А" << endl;
        cout << "[3] Ввести дані для рівня В" << endl;
        cout << "[4] Вивести таблицю рівня В" << endl;
        cout << "[0] Вихід" << endl;
        cout << "Виберіть дію: ";
        cin >> menu;

        switch (menu) {
        case 1: CreateA(arrA, N); break;
        case 2: PrintA(arrA, N); break;
        case 3: CreateB(arrB, N); break;
        case 4: PrintB(arrB, N); break;
        case 0: break;
        default: cout << "Невірний пункт меню!" << endl;
        }
    } while (menu != 0);

    delete[] arrA;
    delete[] arrB;

    return 0;
}