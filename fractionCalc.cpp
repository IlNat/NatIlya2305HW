#include <iostream>
#include "fractionCalc.h"
using namespace std;

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

void fractionCalc::fold()
{
	if (firstDenominator == secondDenominator)
	{
		resultNominator = firstNominator + secondNominator;
		resultDenominator = firstDenominator;
	}
	else
	{
		firstNominator *= secondDenominator;
		secondNominator *= firstDenominator;
		resultNominator = firstNominator + secondNominator;
		resultDenominator = firstDenominator * secondDenominator;
	}
}

void fractionCalc::subtract()
{
	if (firstDenominator == secondDenominator)
	{
		resultNominator = firstNominator - secondNominator;
		resultDenominator = firstDenominator;
	}
	else
	{
		firstNominator *= secondDenominator;
		secondNominator *= firstDenominator;
		resultNominator = firstNominator - secondNominator;
		resultDenominator = firstDenominator * secondDenominator;
	}
	
}

void fractionCalc::divide()
{
	int temp = secondNominator;
	secondNominator = secondDenominator;
	secondDenominator = temp;
	resultNominator = firstNominator * secondNominator;
	resultDenominator = firstDenominator * secondDenominator;
}

void fractionCalc::multiply()
{
	resultNominator = firstNominator * secondNominator;
	resultDenominator = firstDenominator * secondDenominator;
}

void fractionCalc::printResult()
{
	cout << "Результат равен:\n" << resultNominator << '/' << resultDenominator << '\n';
}