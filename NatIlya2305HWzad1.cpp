#include <iostream>
#include <Windows.h>
#include "fractionCalc.h"
using namespace std;

int main()
{
    fractionCalc frac; 
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Добро пожаловать программу вычисления дробей.\n";
    frac.enterFractions();
    int operation;
    do {
        cout << "выберите операцию, которую хотите сделать(1 - сложить, 2 - вычесть, 3 - умножить, 4 - разделить): ";
        
        cin >> operation;
        switch (operation)
        {
        case 1:
        {
            cout << "Выполнение сложения.\n";
            frac.fold();
            break;
        }
        case 2:
        {
            cout << "Выполнение вычитания.\n";
            frac.subtract();
            break;
        }
        case 3:
        {
            cout << "Выполнение умножения.\n";
            frac.multiply();
            break;
        }
        case 4:
        {
            cout << "Выполнение деления.\n";
            frac.divide();
            break;
        }
        default:
        {
            cout << "Такой операции нет.\n";
            break;
        }
        }
    } while (operation != 1 && operation != 2 && operation != 3 && operation != 4);
    frac.printResult();
}
