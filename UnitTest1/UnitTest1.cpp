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
            StudentA student;
            student.surname = "Іваненко";
            student.course = 2;
            student.speciality = COMPUTER_SCIENCE;
            student.physics = 90;
            student.math = 95;
            student.informatics = 100;

            // Перевірка прізвища
            Assert::AreEqual(std::string("Іваненко"), student.surname);
            // Перевірка курсу
            Assert::AreEqual(2, student.course);
            // Перевірка оцінки з фізики
            Assert::AreEqual(90, student.physics);
            // Перевірка оцінки з математики
            Assert::AreEqual(95, student.math);
            // Перевірка оцінки з інформатики
            Assert::AreEqual(100, student.informatics);
        }
	};
}
