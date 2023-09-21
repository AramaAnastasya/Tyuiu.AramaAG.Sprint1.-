// Tyuiu.AramaAG.Sprint1.Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "..//Tyuiu.AramaAG.Sprint1.Task3.Lib/Tyuiu.AramaAG.Sprint1.Task3.Lib.cpp"
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int a;
    cout << "Введите целое четырехзначное число  ";
    cin >> a;
    ISprint1Task1* result = new Service();
    int c = result->Logic(a);
    if (a % 2 == 0)
    {
        cout << "Число четное " << a << "  после преобразований = " << c;
    }
    else
    {
        cout << "Число не четное " << a << "  после преобразований = " << c;
    }

}

