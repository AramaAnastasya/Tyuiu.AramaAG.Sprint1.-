// Tyuiu.AramaAG.Sprint1.Task1.V2.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "..//Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service : public ISprint1Task1
{
	virtual int Logic(int a) override
	{
		return a % 13;
	}
};