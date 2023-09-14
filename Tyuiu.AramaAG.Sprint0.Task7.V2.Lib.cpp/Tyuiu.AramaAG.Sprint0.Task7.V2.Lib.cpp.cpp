// Tyuiu.AramaAG.Sprint0.Task7.V2.Lib.cpp.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"

#include "..//..//Tyuiu.Cours1.cpp/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
class Service1 : public ISprint0Task7
{
	virtual bool Rezalt( int a, int b) override
	{
		int a1 = a / 1000;
		int a2 = (a  / 100) % 10;
		int a3 = (a / 10) % 10;
		int a4 = a % 10;
		return (a1 == b) || (a2 == b) || (a3 == b) || (a4 == b);
	}

};