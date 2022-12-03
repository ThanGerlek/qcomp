#pragma once

#include <string>

class Amplitude
{
public:
    Amplitude(double re, double im);
    Amplitude();
    ~Amplitude();
    static Amplitude add(Amplitude a, Amplitude b);
    static Amplitude mult(Amplitude a, Amplitude b);
    void scale(double d);
    void scaleD(double d);
    std::string toString() const;
    double normSq() const;
    double norm() const;
    double getRe() const;
    double getIm() const;

private:
    double re;
    double im;
};
