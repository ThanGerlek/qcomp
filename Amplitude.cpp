#pragma once

#include <cmath>
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
    std::string str = std::to_string(this->re) + "+" + std::to_string(this->im) + "i";
    return str;
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
