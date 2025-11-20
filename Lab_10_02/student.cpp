#include <iostream>
#include <iomanip>
#include "student.h"

string specialityStr[] = { "Комп'ютерні науки", "Інформатика", "Математика та економіка", "Фізика та інформатика", "Трудове навчання" };

// Рівень А
void CreateA(StudentA* p, int N) {
    for (int i = 0; i < N; i++) {
        cout << "Студент №" << i + 1 << endl;
        cin.ignore();
        cout << "Прізвище: "; getline(cin, p[i].surname);
        cout << "Курс: "; cin >> p[i].course;

        int sp;
        do {
            cout << "Спеціальність (0-Комп'ютерні науки, 1-Інформатика, 2-Математика та економіка, 3-Фізика та інформатика, 4-Трудове навчання): ";
            cin >> sp;
        } while (sp < 0 || sp > 4);
        p[i].speciality = static_cast<Speciality>(sp);

        cout << "Оцінка з фізики: "; cin >> p[i].physics;
        cout << "Оцінка з математики: "; cin >> p[i].math;
        cout << "Оцінка з інформатики: "; cin >> p[i].informatics;
        cout << endl;
    }
}

void PrintA(const StudentA* p, int N) {
    cout << "==========================================================================================================" << endl;
    cout << "| № | Прізвище        | Курс | Спеціальність             | Фізика | Математика | Інформатика |" << endl;
    cout << "----------------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < N; i++) {
        cout << "| " << setw(2) << right << i + 1 << " "
            << "| " << setw(15) << left << p[i].surname
            << "| " << setw(4) << right << p[i].course
            << " | " << setw(25) << left << specialityStr[p[i].speciality]
            << "| " << setw(7) << right << p[i].physics
            << " | " << setw(11) << right << p[i].math
            << " | " << setw(12) << right << p[i].informatics
            << " |" << endl;
    }

    cout << "==========================================================================================================" << endl;
}


// Рівень В
void CreateB(StudentB* p, int N) {
    for (int i = 0; i < N; i++) {
        cout << "Студент №" << i + 1 << endl;
        cin.ignore();
        cout << "Прізвище: "; getline(cin, p[i].surname);
        cout << "Курс: "; cin >> p[i].course;

        int sp;
        do {
            cout << "Спеціальність (0-Комп'ютерні науки, 1-Інформатика, 2-Математика та економіка, 3-Фізика та інформатика, 4-Трудове навчання): ";
            cin >> sp;
        } while (sp < 0 || sp > 4);
        p[i].speciality = static_cast<Speciality>(sp);

        cout << "Оцінка з фізики: "; cin >> p[i].physics;
        cout << "Оцінка з математики: "; cin >> p[i].math;

        switch (p[i].speciality) {
        case COMPUTER_SCIENCE:
            cout << "Оцінка з програмування: "; cin >> p[i].grade.programming; break;
        case INFORMATICS:
            cout << "Оцінка з чисельних методів: "; cin >> p[i].grade.numerical; break;
        default:
            cout << "Оцінка з педагогіки: "; cin >> p[i].grade.pedagogy; break;
        }
        cout << endl;
    }
}

void PrintB(const StudentB* p, int N) {
    cout << "===================================================================================================================================" << endl;
    cout << "| № | Прізвище        | Курс | Спеціальність             | Фізика | Математика | Програмування | Чисельні методи | Педагогіка |" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < N; i++) {
        cout << "| " << setw(2) << right << i + 1 << " "
            << "| " << setw(15) << left << p[i].surname
            << "| " << setw(4) << right << p[i].course
            << " | " << setw(25) << left << specialityStr[p[i].speciality]
            << "| " << setw(7) << right << p[i].physics
            << " | " << setw(11) << right << p[i].math;

        if (p[i].speciality == COMPUTER_SCIENCE)
            cout << " | " << setw(14) << right << p[i].grade.programming
            << " | " << setw(17) << right << ""
            << " | " << setw(10) << right << "";
        else if (p[i].speciality == INFORMATICS)
            cout << " | " << setw(14) << right << ""
            << " | " << setw(17) << right << p[i].grade.numerical
            << " | " << setw(10) << right << "";
        else
            cout << " | " << setw(14) << right << ""
            << " | " << setw(17) << right << ""
            << " | " << setw(10) << right << p[i].grade.pedagogy;

        cout << " |" << endl;
    }

    cout << "===================================================================================================================================" << endl;
}