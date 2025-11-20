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

// Π³βενό ΐ
void CreateA(StudentA* p, int N);
void PrintA(const StudentA* p, int N);

// Π³βενό Β
void CreateB(StudentB* p, int N);
void PrintB(const StudentB* p, int N);
