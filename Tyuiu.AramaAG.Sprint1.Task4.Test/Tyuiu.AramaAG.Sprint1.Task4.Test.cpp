#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.AramaAG.Sprint1.Task4.Lib/Tyuiu.AramaAG.Sprint1.Task4.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuAramaAGSprint1Task4Test
{
	TEST_CLASS(TyuiuAramaAGSprint1Task4Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task4* result = new Service();
			float x = 5;
			float c = result->Vibor(x);
			Assert::AreEqual((float)-14.0, c);
		}
	};
}
