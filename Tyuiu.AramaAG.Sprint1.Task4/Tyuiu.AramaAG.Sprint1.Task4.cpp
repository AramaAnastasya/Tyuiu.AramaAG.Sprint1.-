// Tyuiu.AramaAG.Sprint1.Task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "..//Tyuiu.AramaAG.Sprint1.Task4.Lib/Tyuiu.AramaAG.Sprint1.Task4.Lib.cpp"
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int x;
    cout << "Введите число x =  ";
    cin >> x;
    ISprint1Task4* result = new Service();
    int c = result->Vibor(x);
    if (x > 0 && x != 8)
    {
        cout << "Решение функции 1 - 3*x =  " << c;
    }
    else if (x <= 1)
    {
        cout << "Решение функции x^2 - sin(x) =  " << c;
    }
    else
    {
        cout << "Решение функции cox(x) =  " << c;
    }
    
}
