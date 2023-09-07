// Tyuiu.AramaAG.Sprint0.Task2.V0.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "..//..//Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class Service : public ISprint0Task2V0
{
	virtual int Add(int a1, int a2) override
	{
		return a1 + a2;
	}

};
