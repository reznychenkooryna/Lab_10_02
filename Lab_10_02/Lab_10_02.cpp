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
        cout << "[3] Сортувати рівень А (фізично)" << endl;
        cout << "[4] Ввести дані для рівня В" << endl;
        cout << "[5] Вивести таблицю рівня В" << endl;
        cout << "[6] Сортувати рівень В (фізично)" << endl;
        cout << "[7] Пошук студента А за прізвищем" << endl;
        cout << "[8] Пошук студента В за прізвищем" << endl;
        cout << "[0] Вихід" << endl;
        cout << "Виберіть дію: ";
        cin >> menu;

        switch (menu) {
        case 1: CreateA(arrA, N); break;
        case 2: PrintA(arrA, N); break;
        case 3: SortA_Physical(arrA, N); cout << "Впорядковано за прізвищем!" << endl; break;
        case 4: CreateB(arrB, N); break;
        case 5: PrintB(arrB, N); break;
        case 6: SortB_Physical(arrB, N); cout << "Впорядковано за прізвищем!" << endl; break;
        case 7: {
            string key; cout << "Введіть прізвище для пошуку: "; cin >> key;
            int pos = BinarySearchA(arrA, N, key);
            if (pos != -1) cout << "Знайдено на позиції " << pos + 1 << endl;
            else cout << "Не знайдено!" << endl;
            break;
        }
        case 8: {
            string key; cout << "Введіть прізвище для пошуку: "; cin >> key;
            int pos = BinarySearchB(arrB, N, key);
            if (pos != -1) cout << "Знайдено на позиції " << pos + 1 << endl;
            else cout << "Не знайдено!" << endl;
            break;
        }
        case 0: break;
        default: cout << "Невірний пункт меню!" << endl;
        }
    } while (menu != 0);

    delete[] arrA;
    delete[] arrB;

    return 0;
}