#ifndef AMPLITUDE_H_QCOMP_12_2_2022_21_58
#define AMPLITUDE_H_QCOMP_12_2_2022_21_58

#include <string>

class Amplitude
{
public:
    Amplitude(double re, double im);
    Amplitude();
    ~Amplitude();
    static Amplitude add2(Amplitude a, Amplitude b);
    static Amplitude mult2(Amplitude a, Amplitude b);
    void add(Amplitude other);
    void mult(Amplitude other);
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

#endif
