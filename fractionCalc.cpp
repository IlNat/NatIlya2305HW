#include <iostream>
#include "fractionCalc.h"
using namespace std;

//Ввод числителей и знаменателей первой и второй дробей.
void fractionCalc::enterFractions()
{
	cout << "Введите числитель первой дроби: ";
	cin >> firstNominator;
	do
	{
		cout << "Введите знаменатель первой дроби: ";
		cin >> firstDenominator;
		if (firstDenominator == 0)
		{
			cout << "Неправильно введён знаменатель, повторите ввод.\n";
		}
	} while (firstDenominator == 0);
	cout << "Введите числитель второй дроби: ";
	cin >> secondNominator;
	do
	{
		cout << "Введите знаменатель второй дроби: ";
	cin >> secondDenominator;
		if (secondDenominator == 0)
		{
			cout << "Неправильно введён знаменатель, повторите ввод.\n";
		}
	} while (secondDenominator == 0);
	
}

//Сложение дробей.
void fractionCalc::fold()
{
	if (firstDenominator == secondDenominator)//Если знаменатели дробей равны, то складываются только их числители.
	{
		resultNominator = firstNominator + secondNominator;
		resultDenominator = firstDenominator;
	}
	else//Иначе, первая дробь полностью умножается на знаменатель второй дроби и со второй дробью происходит умножение на знаменатель первой дроби, после чего числители дробей складываются.
	{
		firstNominator *= secondDenominator;
		secondNominator *= firstDenominator;
		resultNominator = firstNominator + secondNominator;
		resultDenominator = firstDenominator * secondDenominator;
	}
}

//Вычитание дробей.
void fractionCalc::subtract()
{
	if (firstDenominator == secondDenominator)//Если знаменатели дробей равны, то происходит только операция вычитания числители.
	{
		resultNominator = firstNominator - secondNominator;
		resultDenominator = firstDenominator;
	}
	else//То же самое, что и сложение дробей с разными знаменателями, но вместо операции сложения здесь операция вычитания.
	{
		firstNominator *= secondDenominator;
		secondNominator *= firstDenominator;
		resultNominator = firstNominator - secondNominator;
		resultDenominator = firstDenominator * secondDenominator;
	}
	
}

//Деление дробей. Вторая дробь переворачивается и числители дробей, и их знаменатели перемножаются.
void fractionCalc::divide()
{
	int temp = secondNominator;
	secondNominator = secondDenominator;
	secondDenominator = temp;
	resultNominator = firstNominator * secondNominator;
	resultDenominator = firstDenominator * secondDenominator;
}

//Перемножение дробей. Числители и знаменатели перемножаются между собой.
void fractionCalc::multiply()
{
	resultNominator = firstNominator * secondNominator;
	resultDenominator = firstDenominator * secondDenominator;
}

//Вывод результатных числителя и знаменателя.
void fractionCalc::printResult()
{
	cout << "Результат равен:\n" << resultNominator << '/' << resultDenominator << '\n';
}