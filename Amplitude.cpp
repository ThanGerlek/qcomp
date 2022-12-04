#ifndef AMPLITUDE_CPP_QCOMP_12_2_2022_21_55
#define AMPLITUDE_CPP_QCOMP_12_2_2022_21_55

#include <cmath>
#include <sstream>
#include <iomanip>
#include "Amplitude.h"

Amplitude::Amplitude(double re, double im)
{
    this->re = re;
    this->im = im;
}

Amplitude::Amplitude()
{
    this->re = 0;
    this->im = 0;
}

Amplitude::~Amplitude() {}

////
////
// Static Operations
////

Amplitude Amplitude::add(Amplitude a, Amplitude b)
{
    return Amplitude(a.re + b.re, a.im + b.im);
}

Amplitude Amplitude::mult(Amplitude a, Amplitude b)
{
    // (x+yi)(z+wi) = xz-yw + (yz+xw)i
    return Amplitude(a.re * b.re - a.im * b.im, a.re * b.im + a.im * b.re);
}

std::string Amplitude::toString() const
{
    std::stringstream ss;
    ss << std::setprecision(3) << std::fixed;
    if (this->im == 0)
    {
        ss << re;
    }
    else if (this->re == 0)
    {
        ss << im << "i";
    }
    else
    {
        ss << re << "+" << im << "i";
    }
    return ss.str();
}

void Amplitude::scale(double d)
{
    this->re = this->re * d;
    this->im = this->im * d;
}

void Amplitude::scaleD(double d)
{
    this->re = this->re / d;
    this->im = this->im / d;
}

////
////
// Const Operations
////

double Amplitude::normSq() const
{
    // |a+bi|^2 = a^2 + b^2
    return this->re * this->re + this->im * this->im;
}

double Amplitude::norm() const
{
    // |a+bi| = sqrt(a^2 + b^2)
    return std::hypot(this->re, this->im);
}

double Amplitude::getRe() const
{
    return this->re;
}

double Amplitude::getIm() const
{
    return this->im;
}

#endif
