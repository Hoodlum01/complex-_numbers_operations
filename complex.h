#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

/*
Lista operatiilor prin operatori supradefiniti:

Afisare:   cout<<Complex;
Citire:    cin>>Complex;
Asignare:  Complex=Complex;
Adunare:   Complex+=Complex;
Adunare:   Complex+=numar;
Adunare:   Complex+Complex;
Adunare:   Complex+numar;
Adunare:   numar+complex;
Scadere:   Complex-Complex;
Scadere:   Complex-numar;
Scadere:   numar-Complex;
Scadere:   Complex-=Complex;
Scadere:   Complex-=float;
Inmultire: Complex*Complex;
Inmultire: Complex*numar;
Inmultire: numar*complex;
Inmultire: complex*=numar;
Impartire: Complex/Complex;
Impartire: Complex/numar;
Impartire: Complex/=numar;
Modul:     ++Complex;
Conjugat:  --Complex;
*/

class Complex
{
private:
    float re; //parte reala
    float img; //parte imaginara
public:
    Complex();
    Complex(float, float);

    friend ostream& operator<<(ostream&, const Complex&);
    friend istream& operator>>(istream&, Complex&);

    Complex& operator=(const Complex&);

    Complex operator+(const Complex&);
    Complex operator-(const Complex&);

    Complex operator*(const Complex&);
    Complex operator/(const Complex&);

    Complex operator+(const float&);
    friend Complex operator+(const float&, const Complex&);

    Complex operator-(const float&);
    friend Complex operator-(const float&, const Complex&);

    Complex operator*(const float&);
    friend Complex operator*(const float&, const Complex&);

    Complex operator/(const float&);

    Complex& operator+=(const Complex&);
    Complex& operator+=(const float&);

    Complex& operator-=(const Complex&);
    Complex& operator-=(const float&);

    Complex& operator*=(const float&);
    Complex& operator/=(const float&);

    float operator++(); //modul
    Complex operator--(); //conjugat

};

#endif // COMPLEX_H
