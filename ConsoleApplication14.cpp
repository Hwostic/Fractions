#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int choise;

    Fraction fract1;
    Fraction fract2;

    
    cout << "Первая дробь: " << endl;
    fract1.input();
    fract1.print();
    cout << "Вторая дробь: " << endl;
    fract2.input();

    fract2.print();

    Fraction resultat;
    resultat.Programma(fract1, fract2);



}