// Tyuiu.AramaAG.Sprint0.Task3.V0.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "..//..//Tyuiu.Cours.cpp//Tyuiu.Cours.cpp.cpp"
// TODO: Это пример библиотечной функции.
class ISprint0Task3V0 // не меняется
{
public:
	virtual int Add(int a, int b, int c) = 0;
	virtual int Multiplication(int a, int b, int c) = 0;
};
class Service : public ISprint0Task3V0
{
	virtual int Add(int a1, int a2, int a3) override
	{
		return a1 + a2 + a3;
	}

	virtual int Multiplication(int a1, int a2, int a3) override
	{
		return a1 * a2 * a3;
	}
};
