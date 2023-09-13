#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.AramaAG.Sprint0.Task6.V2.Lib/Tyuiu.AramaAG.Sprint0.Task6.V2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task6V2Test
{
	TEST_CLASS(Task6V2Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* service = new Service1();
			float x = 1.2;
			int y = 2;
			float c = service->Calculate(x, y)/ 1000.0;
			Assert::AreEqual((float)6.387, c );
		}
	};
}
