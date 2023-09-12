// Tyuiu.AramaAG.Sprint0.Task5.V2.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "..//..//Tyuiu.Cours1.cpp/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
class Service1 : public ISprint0Task5
{
	virtual int Zadacha(float a1, float a2, float a3) override
	{
		return (a1 + a2) * a3 * 1000;
	}

};
