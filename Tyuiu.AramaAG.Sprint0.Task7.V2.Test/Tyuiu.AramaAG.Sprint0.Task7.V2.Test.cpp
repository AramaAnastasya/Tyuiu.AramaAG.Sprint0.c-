#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.AramaAG.Sprint0.Task7.V2.Lib.cpp/Tyuiu.AramaAG.Sprint0.Task7.V2.Lib.cpp.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task7V2Test
{
	TEST_CLASS(Task7V2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* service = new Service1();
			int x = 5764;
			int y = 6;
			bool c = service->Rezalt(x, y);
			Assert::AreEqual(true, c);
		}

		TEST_METHOD(TestMethod2)
		{
			ISprint0Task7* service = new Service1();
			int x = 5764;
			int y = 1;
			bool c = service->Rezalt(x, y);
			Assert::AreEqual(false, c);
		}
	};
}
