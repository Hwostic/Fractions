#pragma once
class Fraction
{
private:
    int numerator;
    int denominator;
   
public:

    void input();
    void print();
 
    Fraction operator+(const Fraction& fract2);
    Fraction operator-(const Fraction& fract2);
    Fraction operator*(const Fraction& fract2);
    Fraction operator/(const Fraction& fract2);
    void Programma(Fraction fract1, Fraction fract2);

};