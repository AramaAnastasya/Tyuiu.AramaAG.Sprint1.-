#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.AramaAG.Sprint1.Task1.V2.Lib/Tyuiu.AramaAG.Sprint1.Task1.V2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Sprint1Task1V2Test
{
	TEST_CLASS(Sprint1Task1V2Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint1Task1* service = new Service();
			int a = 26;
			int c = service->Logic(a);
			Assert::AreEqual(0, c);
		}

		TEST_METHOD(TestMethod2)
		{
			ISprint1Task1* service = new Service();
			int a = 27;
			int c = service->Logic(a);
			Assert::AreEqual(1, c);
		}
	};
}
