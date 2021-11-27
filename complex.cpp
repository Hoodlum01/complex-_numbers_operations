#include "complex.h"
#include <iostream>
#include <math.h>
using namespace std;

Complex::Complex()
{
   re=0;
   img=0;
}

Complex::Complex(float _re, float _img):re(_re), img(_img)
{
    cout<<"Constructor cu param!"<<endl;
}

ostream& operator<<(ostream &c, const Complex& ob)
{
    c<<ob.re;
    ob.img>=0?c<<"+"<<ob.img<<"i"<<endl : c<<ob.img<<"i"<<endl;
    return c;
}

istream& operator>>(istream &c, Complex& ob)
{
    cout<<"Real: ";
    c>>ob.re;
    cout<<"Imaginar: ";
    c>>ob.img;
    return c;
}

Complex& Complex::operator=(const Complex& ob)
{
    this->re=ob.re;
    this->img=ob.img;
    return *this;
}

Complex Complex::operator+(const Complex& ob)
{
    Complex r;
    r.re=this->re+ob.re;
    r.img=this->img+ob.img;
    return r;
}

Complex Complex::operator-(const Complex& ob)
{
    Complex r;
    r.re=this->re-ob.re;
    r.img=this->img-ob.img;
    return r;
}

Complex Complex::operator*(const Complex& ob)
{
    Complex r;
    r.re=(this->re*ob.re)-(this->img*ob.img);
    r.img=this->re*ob.img+this->img*ob.re;
    return r;
}

Complex Complex::operator/(const Complex &ob)
{
    Complex r;
    r.re=(this->re*ob.re+this->img*ob.img)/(pow(ob.re,2)+pow(ob.img,2));
    r.img=(this->img*ob.re-this->re*ob.img)/(pow(ob.re,2)+pow(ob.img,2));
    return r;
}

Complex Complex::operator+(const float& f)
{
    Complex r;
    r.re=this->re+f;
    r.img=this->img;
    return r;
}

Complex operator+(const float& f, const Complex& ob)
{
    Complex r;
    r.re=ob.re+f;
    r.img=ob.img;
    return r;
}

Complex Complex::operator-(const float& f)
{
    Complex r;
    r.re=this->re-f;
    r.img=this->img;
    return r;
}

Complex operator-(const float& f, const Complex& ob)
{
    Complex r;
    r.re=f-ob.re;
    r.img=ob.img;
    return r;
}

Complex Complex::operator*(const float& f)
{
    Complex r;
    r.re=this->re*f;
    r.img=this->img*f;
    return r;
}

Complex operator*(const float& f, const Complex& ob)
{
    Complex r;
    r.re=ob.re*f;
    r.img=ob.img*f;
    return r;
}

Complex Complex::operator/(const float& f)
{
    Complex r;
    r.re=this->re/f;
    r.img=this->img/f;
    return r;
}

float Complex::operator++()
{
    return sqrt(pow(this->re,2)+pow(this->img,2));
}

Complex Complex::operator--()
{
    Complex r;
    r.re=this->re;
    r.img=-this->img;
    return r;
}

Complex& Complex::operator+=(const Complex& ob)
{
    this->re=this->re+ob.re;
    this->img=this->img+ob.img;
    return *this;
}

Complex& Complex::operator-=(const Complex& ob)
{
    this->re=this->re-ob.re;
    this->img=this->img-ob.img;
    return *this;
}

Complex& Complex::operator*=(const float& f)
{
    this->re=this->re*f;
    this->img=this->img*f;
    return *this;
}

Complex& Complex::operator/=(const float& f)
{
    this->re=this->re/f;
    this->img=this->img/f;
    return *this;
}
