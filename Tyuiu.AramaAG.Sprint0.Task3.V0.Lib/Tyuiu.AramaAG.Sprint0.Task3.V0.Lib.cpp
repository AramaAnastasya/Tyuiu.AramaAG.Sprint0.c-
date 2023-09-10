// Tyuiu.AramaAG.Sprint0.Task3.V0.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "..//..//Tyuiu.Cours1.cpp//Tyuiu.Cours.cpp//Tyuiu.Cours.cpp.cpp"
class Service1 : public ISprint0Task3
{
	virtual int SummV3(int a1, int a2, int a3) override
	{
		return a1 + a2 + a3;
	}
};
