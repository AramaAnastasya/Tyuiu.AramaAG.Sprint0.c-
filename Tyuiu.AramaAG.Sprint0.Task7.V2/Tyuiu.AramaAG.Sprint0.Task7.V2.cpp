// Tyuiu.AramaAG.Sprint0.Task7.V2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include "../Tyuiu.AramaAG.Sprint0.Task7.V2.Lib.cpp/Tyuiu.AramaAG.Sprint0.Task7.V2.Lib.cpp.cpp"
int main()
{
    setlocale(LC_ALL, "rus");
    ISprint0Task7* service = new Service1();
    int x, y;
    cout << "Введите целое 4-x значное число:   ";
    cin >> x;
    cout << "Введите цифру, необходимую найти в числе:   ";
    cin >> y;

    bool k = service->Rezalt(x, y);
    cout << "4-x значное число:   " << x << "\nИскомая цифра  " << y << "  \n" << boolalpha << k;
}
