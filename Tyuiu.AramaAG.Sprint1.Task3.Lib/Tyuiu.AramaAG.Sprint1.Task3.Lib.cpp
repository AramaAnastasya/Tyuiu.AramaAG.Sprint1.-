// Tyuiu.AramaAG.Sprint1.Task3.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "..//Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service : public ISprint1Task1
{
    virtual int Logic(int a) override
    {
        if (a % 2 == 0)
        {
            if (a != 1000 && a % 4 == 0)
            {
                return a * 2;
            }
            else
            {
                return a / 5;
            }
        }
        else { return a / 5; }
    }
};
