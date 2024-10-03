#include <iostream>

#include "funcs.h"

int (*mathP)(int, int); // указатель на функцию
void (*actions[4]) (double, int) = { add, subtract, multiply }; // массив указателей на функции
typedef void (message)(double, int); // тип функции
typedef int (*operation)(int, int); // тип функции - указатель
void Oper(void(*)(double, int), double, int); // указатели на функции как параметры

int main()
{
	int num1 = 11;
	int num2 = 3;
	double result;

// Funcs:
	result = Sum(num1, num2);
	cout << "Sum = " << result << endl;
	result = Mult(num1, num2);
	cout << "Mult = " << result << endl;
	result = Subtr(num1, num2);
	cout << "Subst = " << result << endl;
	result = Div(num1, num2);
	cout << "Div = " << result << endl;
	cout << endl;

// Funcs pointer:
	mathP = Sum;
	result = mathP(10, 9);
	cout << "mathP Sum = " << result << endl;

	mathP = Subtr;
	result = mathP(10, 9);
	cout << "mathP Subst = " << result << endl;
	cout << endl;

// Arr funcs pointer:
	actions[3] = divide;

	for (size_t i = 0; i < std::size(actions); i++)
	{
		actions[i](10, 9);
	}
	cout << endl;

// Type of func:
	message* mes1 = MesMult;
	message* mes2 = MesSubtr;
	message* mes3 = MesSum;
	mes1(13, 13);
	mes2(4, 5);
	mes3(9, 1);
	mes3(5, 5);
	cout << endl;

	operation op1 = Sum;
	operation op2 = Mult;
	operation op3 = Subtr;
	cout << "Sum = " << op1(9, 2) << endl;
	cout << "Mult = " << op2(1, 7) << endl;
	cout << "Subst = " << op3(8, 4) << endl;
	cout << endl;

// Funk as a parametr:
	Oper(subtract, 14, 3);
	Oper(divide, 22.2, 4);

	return 0;
}