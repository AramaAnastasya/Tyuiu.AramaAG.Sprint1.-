// Tyuiu.AramaAG.Sprint1.Task2.V2.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "..//Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service : public ISprint1Task2
{
	virtual int LogicLong(int a) override
	{
        int s1 = a / 1000;
        int s2 = (a / 100) % 10;
        int s3 = (a / 10) % 10;
        int s4 = a % 10;
		int sum = s1 + s2 + s3 + s4;
        if (sum % 5 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
	}
};
