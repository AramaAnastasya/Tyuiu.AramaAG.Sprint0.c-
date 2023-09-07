#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.AramaAG.Sprint0.Task2.V0.Lib/Tyuiu.AramaAG.Sprint0.Task2.V0.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task2V0* service = new Service();
			int a1 = 11;
			int a2 = 9;
			int c = service->Add(a1, a2);
			Assert::AreEqual(c, a1 + a2);
		}

		TEST_METHOD(TestMethod2)
		{
			ISprint0Task2V0* service = new Service();
			int a1 = 13;
			int a2 = 7;
			int c = service->Add(a1, a2);
			Assert::AreEqual(c, a1 + a2);
		}
	};
}
