#include "Fraction.h"
#include <iostream>

using namespace std;


    void Fraction::input()
    {
    
        cout << "Введите числитель: ";
        cin >> numerator;
    

        cout << "Введите знаменатель: ";
      cin >> denominator;
     
    }

    void Fraction::print()
    {
        cout << numerator << "/" << denominator << endl;
    }

    //Сумма
    Fraction Fraction::operator+(const Fraction& fract2)
    {
        Fraction res;
        res.numerator = this->numerator * fract2.denominator + fract2.numerator * this->denominator;
        res.denominator = this->denominator * fract2.denominator;

        return res;
    }

    //Вычитание
    Fraction Fraction::operator-(const Fraction& fract2)
    {
        Fraction res;
        res.numerator = this->numerator * fract2.denominator - fract2.numerator * this->denominator;
        res.denominator = this->denominator * fract2.denominator;
       
        return res;
    }

    //Умножение
    Fraction Fraction::operator*(const Fraction& fract2)
    {
        Fraction res;
        res.numerator = this->numerator * fract2.numerator;
        res.denominator = this->denominator * fract2.denominator;
       
        return res;
    }

    //Деление
    Fraction Fraction::operator/(const Fraction& fract2)
    {
        Fraction res;
        res.numerator = this->numerator * fract2.denominator;
        res.denominator = this->denominator * fract2.numerator;
       
        return res;
    }

    void Fraction::Programma(Fraction fract1, Fraction fract2)
    {
        int choise;

        do
        {
            cout << "Операции:" << endl;
            cout << "1 - Сложение дробей" << endl;
            cout << "2 - Вычитание дробей" << endl;
            cout << "3 - Умножение дробей" << endl;
            cout << "4 - Деление дробей" << endl;
            cout << "5 - Задать новую дробь" << endl;
            cout << "6 - Завершить программу" << endl;
            cout << "Выберите: " << endl;
            cin >> choise;


            switch (choise)
            {
            case 1:
            {
                Fraction result = fract1+fract2;
                cout << "Новая дробь: " << endl;
                result.print();
                break;
            }
            case 2:
            {
                Fraction result = fract1-fract2;
                cout << "Новая дробь: " << endl;
                result.print();
                break;
            }
            case 3:
            {
                Fraction result = fract1*fract2; 
                cout << "Новая дробь: " << endl;
                result.print();
                break;
            }
            case 4:
            {
                Fraction result = fract1/fract2; 
                cout << "Новая дробь: " << endl;
                result.print();
                break;
            }
            case 5: 
                cout << "Первая дробь: " << endl;
                fract1.input();
                fract1.print();
                cout << "Вторая дробь: " << endl;
                fract2.input();
                fract2.print();
                break;
            case 6:  cout << "6 - Программа завершена" << endl; break;
            default:cout << "Неверный выбор" << endl;
            }
           

        } while (choise != 6);

      
    }

