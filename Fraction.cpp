#include "Fraction.h"
#include <iostream>

using namespace std;


    void Fraction::input()
    {
    
        cout << "������� ���������: ";
        cin >> numerator;
    

        cout << "������� �����������: ";
      cin >> denominator;
     
    }

    void Fraction::print()
    {
        cout << numerator << "/" << denominator << endl;
    }

    //�����
    Fraction Fraction::Summa(Fraction fract2)
    {
        Fraction res;
        res.numerator = this->numerator * fract2.denominator + fract2.numerator * this->denominator;
        res.denominator = this->denominator * fract2.denominator;

        return res;
    }

    //���������
    Fraction Fraction::Subtraction(Fraction fract2)
    {
        Fraction res;
        res.numerator = this->numerator * fract2.denominator - fract2.numerator * this->denominator;
        res.denominator = this->denominator * fract2.denominator;
       
        return res;
    }

    //���������
    Fraction Fraction::Multiplication(Fraction fract2)
    {
        Fraction res;
        res.numerator = this->numerator * fract2.numerator;
        res.denominator = this->denominator * fract2.denominator;
       
        return res;
    }

    //�������
    Fraction Fraction::Division(Fraction fract2)
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
            cout << "��������:" << endl;
            cout << "1 - �������� ������" << endl;
            cout << "2 - ��������� ������" << endl;
            cout << "3 - ��������� ������" << endl;
            cout << "4 - ������� ������" << endl;
            cout << "5 - ������ ����� �����" << endl;
            cout << "6 - ��������� ���������" << endl;
            cout << "��������: " << endl;
            cin >> choise;


            switch (choise)
            {
            case 1:
            {
                Fraction result = fract1.Summa(fract2);
                cout << "����� �����: " << endl;
                result.print();
                break;
            }
            case 2:
            {
                Fraction result = fract1.Subtraction(fract2);
                cout << "����� �����: " << endl;
                result.print();
                break;
            }
            case 3:
            {
                Fraction result = fract1.Multiplication(fract2); 
                cout << "����� �����: " << endl;
                result.print();
                break;
            }
            case 4:
            {
                Fraction result = fract1.Division(fract2); 
                cout << "����� �����: " << endl;
                result.print();
                break;
            }
            case 5: 
                cout << "������ �����: " << endl;
                fract1.input();
                fract1.print();
                cout << "������ �����: " << endl;
                fract2.input();
                fract2.print();
                break;
            case 6:  cout << "6 - ��������� ���������" << endl; break;
            default:cout << "�������� �����" << endl;
            }
           

        } while (choise != 6);

      
    }

