#ifndef COMPLEX_H
#define COMPLEX_H
#pragma once
#include <string>
#include <cmath>

class Complex{
    double re, im;
public:
    //LEVEL 1
    Complex() : re(0), im(0){};
    Complex(double re, double im) : re(re), im(im){};
    ~Complex(){};

    double getRe() const {
        return re;
    }
    double getIm() const {
        return im;
    }
    Complex &setRe(double re){
        this->re = re;
        return *this;
    }
    Complex& setIm(double im){
        this->im = im;
        return *this;
    }

    //LEVEL 2
    Complex& add(Complex const& num){
        re += num.re;
        im += num.im;
        return *this;
    }
    Complex& multiply(double x){
        re *= x;
        im *= x;
        return *this;
    }
    Complex operator-(Complex const& num) const {
        return Complex (re - num.re, im - num.im);
    }
    double abs() const {
        return sqrt(re*re + im*im);
    }

    //LEVEL 3
    Complex operator+(Complex const& num) const {
        Complex x(*this);
        x.add(num);
        return x;
    }
    Complex operator*(double m) const {
        Complex x(*this);
        x.multiply(m);
        return x;
    }
    Complex operator*(Complex const& num) const {
        return Complex(re * num.re - im * num.im, re * num.im + im * num.re);
    }
    Complex operator-() const {
        return Complex(-re, -im);
    }

    friend istream& operator>>(istream& i, Complex &num){
        i >> num.re >> num.im;
        return i;
    }

    friend ostream& operator<<(ostream& o, Complex &num){
        o << num.re << " + " << num.im << 'i';
        return o;
    }

};

    Complex operator*(double x, Complex const& num) {
        return Complex(num.getRe() * x, num.getIm() * x);
    }

#endif