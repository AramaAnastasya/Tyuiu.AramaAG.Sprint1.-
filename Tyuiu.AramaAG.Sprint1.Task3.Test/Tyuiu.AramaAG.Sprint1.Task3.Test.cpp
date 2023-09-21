#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.AramaAG.Sprint1.Task3.Lib/Tyuiu.AramaAG.Sprint1.Task3.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuAramaAGSprint1Task3Test
{
	TEST_CLASS(TyuiuAramaAGSprint1Task3Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task1* result = new Service();
			int a = 3421;
			int c = result->Logic(a);
			Assert::AreEqual(684, c);
		}

		TEST_METHOD(TestMethod2)
		{
			ISprint1Task1* result = new Service();
			int a = 3412;
			int c = result->Logic(a);
			Assert::AreEqual(6824, c);
		}
	};
}
