#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.AramaAG.Sprint1.Task0.V2.Lib/Tyuiu.AramaAG.Sprint1.Task0.V2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Sprint0Task7V2Test
{
	TEST_CLASS(Sprint0Task1V2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task0V01* service = new Service();
			int l = 20; 
			int w = 10;
			int h = 2;
			int c = service->Rezalt(l, w, h);
			Assert::AreEqual(120, c);
		}
	};
}
