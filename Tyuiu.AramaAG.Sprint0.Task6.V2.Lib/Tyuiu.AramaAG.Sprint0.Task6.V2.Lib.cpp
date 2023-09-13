// Tyuiu.AramaAG.Sprint0.Task6.V2.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "..//..//Tyuiu.Cours1.cpp/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
class Service1 : public ISprint0Task6
{
	virtual int Calculate(float x, int y) override
	{
		return (x * y / (5 + x ) + 6) * 1000;
	}

};
