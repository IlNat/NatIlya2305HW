#pragma once
class fractionCalc
{
	int firstNominator, secondNominator, firstDenominator, secondDenominator, resultNominator, resultDenominator;
public:
	void enterFractions();
	void fold();
	void subtract();
	void divide();
	void multiply();
	void printResult();
};

