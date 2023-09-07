#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.AramaAG.Sprint0.Task3.V0.Lib/Tyuiu.AramaAG.Sprint0.Task3.V0.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task3V0* service = new Service();
			int a1 = 11;
			int a2 = 9;
			int a3 = 2;
			int c = service->Add(a1, a2, a3);
			Assert::AreEqual(c, a1 + a2 + a3);
		}

		TEST_METHOD(TestMethod2)
		{
			ISprint0Task3V0* service = new Service();
			int a1 = 31;
			int a2 = 4;
			int a3 = 2;
			int c = service->Add(a1, a2, a3);
			Assert::AreEqual(c, a1 + a2 + a3);
		}

		TEST_METHOD(TestMethod3)
		{
			ISprint0Task3V0* service = new Service();
			int a1 = 13;
			int a2 = 7;
			int a3 = 5;
			int c = service->Multiplication(a1, a2, a3);
			Assert::AreEqual(c, a1 * a2 * a3);
		}

		TEST_METHOD(TestMethod4)
		{
			ISprint0Task3V0* service = new Service();
			int a1 = 1;
			int a2 = 7;
			int a3 = 5;
			int c = service->Multiplication(a1, a2, a3);
			Assert::AreEqual(c, a1 * a2 * a3);
		}
	};
}
