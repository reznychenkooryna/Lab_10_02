#pragma once
#include <string>
using namespace std;

enum Speciality { COMPUTER_SCIENCE, INFORMATICS, MATH_ECON, PHYSICS_INFO, LABOR_EDU };
extern string specialityStr[];

union ThirdGrade {
    int programming;
    int numerical;
    int pedagogy;
};

struct StudentA {
    string surname;
    int course;
    Speciality speciality;
    int physics;
    int math;
    int informatics;
};

struct StudentB {
    string surname;
    int course;
    Speciality speciality;
    int physics;
    int math;
    ThirdGrade grade;
};

// ------------------ Рівень А ------------------
void CreateA(StudentA* p, int N);
void PrintA(const StudentA* p, int N);

// ------------------ Рівень В ------------------
void CreateB(StudentB* p, int N);
void PrintB(const StudentB* p, int N);

// ------------------ Фізичне сортування ------------------
void SortA_Physical(StudentA* p, int N);
void SortB_Physical(StudentB* p, int N);

// ------------------ Індексне сортування ------------------
void SortA_Index(const StudentA* p, int N, int* index);
void SortB_Index(const StudentB* p, int N, int* index);

// ------------------ Бінарний пошук ------------------
int BinarySearchA(const StudentA* p, int N, const string& key);
int BinarySearchB(const StudentB* p, int N, const string& key);