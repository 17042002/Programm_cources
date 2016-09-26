// 1_Kostya_C++.cpp : main project file.

#include "stdafx.h"

#include <iostream>

#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "rus");
	double a;
	double b;
	double c;
	double x;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << "Введите значение c: ";
	cin >> c;
	if ((b*b - 4 * a*c) >= 0) //Если дискриминант больше или равен 0
	{
		x = (-1 * b + sqrt(b*b - 4 * a*c)) / (2 * a);
		cout << "Первый корень равен " << x << endl;
		x = (-1 * b - sqrt(b*b - 4 * a*c)) / (2 * a);
		cout << "Второй корень равен " << x << endl;
	}
	else
	{
		cout << "Дискриминант меньше 0, число i." << endl;
	}
	system("PAUSE");
	return 0;
}