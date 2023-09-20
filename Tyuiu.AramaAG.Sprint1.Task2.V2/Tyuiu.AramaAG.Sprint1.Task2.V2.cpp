// Tyuiu.AramaAG.Sprint1.Task2.V2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "..//Tyuiu.AramaAG.Sprint1.Task2.V2.Lib/Tyuiu.AramaAG.Sprint1.Task2.V2.Lib.cpp"
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int a;
    cout << "Введите целое четырехзначное число  ";
    cin >> a;
    ISprint1Task2* result = new Service();
    int c = result->LogicLong(a);
    if (c == 1)
    {
        cout << "Сумма цифр числа " << a << "  кратна числу 5";
    }
    else
    {
        cout << "Сумма цифр числа " << a << " не кратна числу 5";
    }

}

