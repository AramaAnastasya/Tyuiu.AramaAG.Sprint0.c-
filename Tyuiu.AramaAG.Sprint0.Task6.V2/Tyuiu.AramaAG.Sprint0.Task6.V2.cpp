﻿// Tyuiu.AramaAG.Sprint0.Task6.V2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include "../Tyuiu.AramaAG.Sprint0.Task6.V2.Lib/Tyuiu.AramaAG.Sprint0.Task6.V2.Lib.cpp"
int main()
{
    setlocale(LC_ALL, "rus");
    ISprint0Task6* service = new Service1();
    float x;
    int y;
    cout << "Введите число x:   ";
    cin >> x;
    cout << "Введите целое число y:   ";
    scanf_s("%d", &y);
    float s = service->Calculate(x, y) / 1000.0;
    cout << "результат выражения (x * y)/(5 + x ) + 6 = " << s;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.