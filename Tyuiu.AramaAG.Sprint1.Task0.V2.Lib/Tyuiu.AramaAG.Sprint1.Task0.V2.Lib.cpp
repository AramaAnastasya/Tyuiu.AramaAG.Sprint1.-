// Tyuiu.AramaAG.Sprint1.Task0.V2.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "..//Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: Это пример библиотечной функции.
class Service : public ISprint1Task0V01
{
	virtual int Rezalt(int l, int w, int h) override
	{
		return 2 * h * (l + w); 
	}
};
