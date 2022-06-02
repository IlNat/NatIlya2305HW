#pragma once
class fractionCalc
{
	int firstNominator, secondNominator, firstDenominator, secondDenominator, resultNominator, resultDenominator;
	//Числитель первой дроби, знаменатель второй дроби, числитель второй дроби, знаменатель второй дроби, числитель результатной дроби, знаменатель результатной дроби.
public:
	void enterFractions();//Ввод числителей и знаментелей дробей.
	void fold();//Сложение дробей.
	void subtract();//Вычитание дробей.
	void divide();//Деление дробей.
	void multiply();//Умножение дробей.
	void printResult();//Вывод результатной дроби.
};

