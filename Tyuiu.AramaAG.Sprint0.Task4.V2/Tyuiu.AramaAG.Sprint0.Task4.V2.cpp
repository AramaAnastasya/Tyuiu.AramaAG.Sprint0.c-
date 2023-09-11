// Tyuiu.AramaAG.Sprint0.Task4.V2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "../Tyuiu.AramaAG.Sprint0.Task4.V2.Lib/Tyuiu.AramaAG.Sprint0.Task4.V2.Lib.cpp"
using namespace std;
int main()
{
    ISprint0Task4* service = new Service1();
    cout << "3 * (4 + 1) + 2 = " << service->Calculate(3, 4, 1, 2) << "\n";
}
