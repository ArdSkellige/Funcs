#pragma once
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void Oper(void(*op)(double, int), double x, int y)
{
	op(x, y);
}

int Sum(int x, int y)
{
	return x + y;
}

int Mult(int x, int y)
{
	return x * y;
}

int Subtr(int x, int y)
{
	return x - y;
}

double Div(double x, double y)
{
	return x / y;
}

void add(double x, int y)
{
	std::cout << "x + y = " << x + y << std::endl;
}
void subtract(double x, int y)
{
	std::cout << "x - y = " << x - y << std::endl;
}
void multiply(double x, int y)
{
	std::cout << "x * y = " << x * y << std::endl;
}
void divide(double x, int y)
{
	std::cout << "x / y = " << x / y << std::endl;
}

void MesSum(double x, int y)
{
	cout << "Sum " << x << " + " << y << " = " << x + y << endl;
}

void MesMult(double x, int y)
{
	cout << "Mult " << x << " * " << y << " = " << x * y << endl;
}

void MesSubtr(double x, int y)
{
	cout << "Subtr " << x << " - " << y << " = " << x - y << endl;
}