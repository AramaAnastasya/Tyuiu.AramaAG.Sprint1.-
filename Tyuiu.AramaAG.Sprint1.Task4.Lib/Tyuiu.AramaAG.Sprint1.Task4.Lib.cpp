// Tyuiu.AramaAG.Sprint1.Task4.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "..//Tyuiu.Cours1.cpp/Tyuiu.Cours.cpp.cpp"
#include <math.h>
class Service : public ISprint1Task4
{
    virtual float Vibor(float x) override
    {
        float y;
        if (x > 0 && x != 8)
        {
            y = 1 - 3 * x;
        }
        else if (x <= 1)
        {
            y = pow(x, 2) - sin(x);
        }
        else
        {
            y = cos(x);
        }
         return y;
    }
};
