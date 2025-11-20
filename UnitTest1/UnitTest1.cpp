#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_10_02/Lab_10_02.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestMethod1)
        {
            int N = 3;
            StudentA* arrA = new StudentA[N];

            // Імітуємо CreateA без вводу з консолі
            arrA[0] = { "Іванов", 2, COMPUTER_SCIENCE, 85, 90, 92 };
            arrA[1] = { "Петров", 3, INFORMATICS, 78, 80, 85 };
            arrA[2] = { "Сидоренко", 1, MATH_ECON, 90, 95, 88 };

            // --- Перевірка даних ---
            Assert::AreEqual(std::string("Іванов"), arrA[0].surname);
            Assert::AreEqual(85, arrA[0].physics);
            Assert::AreEqual(92, arrA[0].informatics);

            // --- Сортування фізичне ---
            SortA_Physical(arrA, N);

            Assert::AreEqual(std::string("Іванов"), arrA[0].surname);
            Assert::AreEqual(std::string("Іванов"), arrA[0].surname);
            Assert::AreEqual(std::string("Петров"), arrA[1].surname);
            Assert::AreEqual(std::string("Сидоренко"), arrA[2].surname);

            // --- Бінарний пошук ---
            int index = BinarySearchA(arrA, N, "Петров");
            Assert::AreEqual(1, index);

            int notFound = BinarySearchA(arrA, N, "Невідомий");
            Assert::AreEqual(-1, notFound);

            delete[] arrA;
        }
	};
}
