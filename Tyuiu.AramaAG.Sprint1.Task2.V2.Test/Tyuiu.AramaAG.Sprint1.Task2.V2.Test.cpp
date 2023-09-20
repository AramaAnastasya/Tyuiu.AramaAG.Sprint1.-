#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.AramaAG.Sprint1.Task2.V2.Lib/Tyuiu.AramaAG.Sprint1.Task2.V2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuAramaAGSprint1Task2V2Test
{
	TEST_CLASS(TyuiuAramaAGSprint1Task2V2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task2* result = new Service();
			int a = 3421;
			int c = result->LogicLong(a);
			Assert::AreEqual(1, c);
		}
		
		TEST_METHOD(TestMethod2)
		{
			ISprint1Task2* result = new Service();
			int a = 3422;
			int c = result->LogicLong(a);
			Assert::AreEqual(0, c);
		}
	};
}
