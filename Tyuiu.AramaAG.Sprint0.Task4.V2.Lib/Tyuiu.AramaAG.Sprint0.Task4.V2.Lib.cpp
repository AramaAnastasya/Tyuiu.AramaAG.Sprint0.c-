// Tyuiu.AramaAG.Sprint0.Task4.V2.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "..//..//Tyuiu.Cours1.cpp/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
class Service1 : public ISprint0Task4
{
	virtual int Calculate(int a1, int a2, int a3, int a4) override
	{
		return a1 * (a2 + a3) + a4;
	}

};
