#pragma once
class Fraction
{
private:
    int numerator;
    int denominator;
   
public:

    void input();
    void print();
 
    Fraction Summa(Fraction fract2);
    Fraction Subtraction(Fraction fract2);
    Fraction Multiplication(Fraction fract2);
    Fraction Division(Fraction fract2);
    void Programma(Fraction fract1, Fraction fract2);

};