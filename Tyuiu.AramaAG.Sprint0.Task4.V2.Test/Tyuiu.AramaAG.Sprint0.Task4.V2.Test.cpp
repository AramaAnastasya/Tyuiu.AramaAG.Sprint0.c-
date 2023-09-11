#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.AramaAG.Sprint0.Task4.V2.Lib/Tyuiu.AramaAG.Sprint0.Task4.V2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuAramaAGSprint0Task4V2Test
{
	TEST_CLASS(TyuiuAramaAGSprint0Task4V2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task4* service = new Service1();
			int a1 = 3;
			int a2 = (4);
			int a3 = {1};
			int a4 = 2;
			int c = service->Calculate(a1, a2, a3, a4);
			Assert::AreEqual(a1 * (a2 + a3) + a4, c);
		}
	};
}
