#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.AramaAG.Sprint0.Task5.V2.Lib/Tyuiu.AramaAG.Sprint0.Task5.V2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuAramaAGSprint0Task5V2Test
{
	TEST_CLASS(TyuiuAramaAGSprint0Task5V2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* service = new Service1();
			float price = 2.75;
			float obl = 0.5;
			float kol = {7};
			float c = service->Zadacha(price,obl, kol) / 1000.0;
			Assert::AreEqual((float)22.75, c);
		}
	};
}
