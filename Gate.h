#ifndef GATE_H_QCOMP_12_2_2022_21_55
#define GATE_H_QCOMP_12_2_2022_21_55

#include "State.h"

class Gate
{
public:
    Gate();
    Gate(Amplitude matrix[SIZE][SIZE]);
    ~Gate();

private:
    Amplitude matrix[SIZE][SIZE];
};

#endif
