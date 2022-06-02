#include <iostream>
#include "fractionCalc.h"
using namespace std;

void fractionCalc::enterFractions()
{
	cout << "������� ��������� ������ �����: ";
	cin >> firstNominator;
	do
	{
		cout << "������� ����������� ������ �����: ";
		cin >> firstDenominator;
		if (firstDenominator == 0)
		{
			cout << "����������� ����� �����������, ��������� ����.\n";
		}
	} while (firstDenominator == 0);
	cout << "������� ��������� ������ �����: ";
	cin >> secondNominator;
	do
	{
		cout << "������� ����������� ������ �����: ";
	cin >> secondDenominator;
		if (secondDenominator == 0)
		{
			cout << "����������� ����� �����������, ��������� ����.\n";
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
	cout << "��������� �����:\n" << resultNominator << '/' << resultDenominator << '\n';
}